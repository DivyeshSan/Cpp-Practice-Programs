#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main() {
    multimap<int,string> errorCodeDescMap;
    errorCodeDescMap.insert({0,"Success"});
    errorCodeDescMap.insert({1,"Internal error"});
    errorCodeDescMap.insert({2,"Failed"});
    errorCodeDescMap.insert({3,"Parse failed"});
    errorCodeDescMap.insert({1,"Invalid Certs"});
    
    string targetDesc = "Invalid Certs";
    
    auto range = errorCodeDescMap.equal_range(1);
    for(auto it = range.first; it != range.second; ++it) {
        if(it->second == targetDesc) {
            cout << it->first << " " << it-> second << endl;
        }
    }
    
    return 0;
}
