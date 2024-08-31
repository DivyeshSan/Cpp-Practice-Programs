#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main() {
    deque<int> senQueue;
    
    int max_size = 20;
    int push_size = 30;
    
    for(int i = 0; i < push_size;  i++) {
        if(senQueue.size() == max_size) {
            senQueue.pop_front();
        }
        senQueue.push_back(i);
    }
    
    while(senQueue.size() != 0) {
        cout << senQueue.front() << endl;
        senQueue.pop_front();
    }

    return 0;
}
