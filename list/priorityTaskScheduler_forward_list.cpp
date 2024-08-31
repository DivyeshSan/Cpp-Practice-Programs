#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main() {
    forward_list<tuple<int,string>> priorityTaskList = {make_tuple(7, "Process A"), make_tuple(6, "Process B"), make_tuple(5, "Process C"), make_tuple(4, "Process D")};
    
    tuple<int,string> newTask = make_tuple(1, "Process X");
    
    if(priorityTaskList.empty()) {
      priorityTaskList.push_front(newTask);  
    } else {
        auto prev_it = priorityTaskList.begin();
        auto it = priorityTaskList.begin();
        for(; it != priorityTaskList.end();++it) {
            if(get<0>(*it) < get<0>(newTask)) {
                if(it == priorityTaskList.begin()) {
                    priorityTaskList.push_front(newTask);
                } else {
                    priorityTaskList.insert_after(prev_it, newTask);
                }
                break;
            }
            prev_it = it;
        }
        if(it == priorityTaskList.end()) {
            priorityTaskList.insert_after(prev_it, newTask);
        }
        
    }
    
    for(auto it: priorityTaskList) {
        cout << get<0>(it) << " " << get<1>(it) << endl;
    }
    
    return 0;
}
