#include <iostream>

using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        int low = 1, high = x, ans = 0;
        while (low <= high) {
            long long mid = low + (high - low) / 2;
            if (mid * mid <= x) {
                ans = mid;
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    int x = 1;
    cout << s.mySqrt(x);

    return 0;
}
