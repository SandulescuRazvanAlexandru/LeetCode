#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size(), k = 0;
        for (int i = 0; i < n - 1; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (nums[i] == nums[j]) {
                    ++k;
                }
            }
        }
        return k;
    }
};

int main() {
    Solution solution;
    vector<int> nums = { 1, 2, 3, 1, 1, 3 }; // Example input

    int result = solution.numIdenticalPairs(nums);
    cout << result;

    return 0;
}
