#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);  // Create a vector of the same length as nums

        for (int i = 0; i < n; ++i) {
            ans[i] = nums[nums[i]];  // Set each element of ans to nums[nums[i]]
        }

        return ans;
    }
};

int main() {
    Solution solution;
    vector<int> nums = { 0, 2, 1, 5, 3, 4 }; // Example input

    vector<int> result = solution.buildArray(nums);
    cout << "Built array from permutation: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
