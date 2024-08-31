#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main() {
    vector<int> senData = {0,1,2,3,4,5,6,7,8,9,10};
    
#if 1
    int left = 0;
    int right = senData.size() - 1;
    while(left < right) {
        std::swap(senData[left], senData[right]);
        left++;
        right--;
    }
#else
    std::reverse(senData.begin(), senData.end());
#endif
    for_each(senData.begin(), senData.end(), [] (int it) {
        cout << it << endl;
    });

    return 0;
}
