#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> shuffled(2 * n);
        for (int i = 0; i < n; ++i) {
            shuffled[2 * i] = nums[i];
            shuffled[2 * i + 1] = nums[i + n];
        }
        return shuffled;
    }
};

int main() {
    Solution solution;
    vector<int> nums = { 2, 5, 1, 3, 4, 7 };
    int n = 3;

    vector<int> result = solution.shuffle(nums, n);
    cout << "Shuffled array: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
