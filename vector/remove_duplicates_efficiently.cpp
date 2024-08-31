#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;
int main() {
    unordered_set<int> uInt;
    vector<int> senData = {0,1,2,3,4,1,4,5,8,21,4,6,13,6,9,3,1,5,4};
    
    size_t prevSize = 0;
    auto it = senData.begin();
    while(it != senData.end()) {
        if(uInt.find(*it) != uInt.end()) {
            it = senData.erase(it);
        } else {
            uInt.insert(*it);
            it++;
        }
    }
    
    for_each(senData.begin(), senData.end(), [] (int it) {
        cout << it << endl;
    });

    return 0;
}
