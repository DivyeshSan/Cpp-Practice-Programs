#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main() {
    list<tuple<int,string>> priorityTaskList = {make_tuple(7, "Process A"), make_tuple(6, "Process B"), make_tuple(5, "Process C"), make_tuple(4, "Process D")};
    
    tuple<int,string> newTask = make_tuple(6, "Process X");
    
    if(priorityTaskList.empty()) {
      priorityTaskList.push_back(newTask);  
    } else {
        for(auto it = priorityTaskList.begin(); it != priorityTaskList.end();++it) {
            if(get<0>(*it) < get<0>(newTask)) {
                priorityTaskList.insert(it, newTask);
                break;
            }
        }
    }
    
    for(auto it: priorityTaskList) {
        cout << get<0>(it) << " " << get<1>(it) << endl;
    }
    
    return 0;
}
