#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, nums[100000];
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> nums[i];
    
    // check anomolies, return early if there
    // are more than 2 non-contiguous anomolies
    vector<int> anomolies;
    for (int i = 1; i < n; ++i) {
        if (nums[i] < nums[i-1]) {
            if (anomolies.size() < 2 ||
                i-1-anomolies.back() == 1) {
                anomolies.push_back(i-1);
            }
            else {
                cout << "no" << endl;
                return 0;
            }
        }
    }
    
    if (anomolies.empty()) {
        cout << "yes" << endl;
        return 0;
    }
    
    //anomolies should conform to a specific patterns
    int sz    = anomolies.size(),
        left  = anomolies[0], 
        right = anomolies.back() + 1;
    const char* keyword = (sz <= 2) ? "swap" : "reverse";

    if ((left == 0 || nums[right] >= nums[left-1]) &&
        (right == n - 1 || nums[left] <= nums[right+1]))
        printf("yes\n%s %d %d\n", keyword, left + 1, right + 1);
    else
        puts("no\n");
    return 0;
}
