#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size() - 1; ++i) {
            for (int j = i + 1; j < nums.size(); ++j) {
                if (nums[i] + nums[j] == target) {
                    return { i, j };
                }
            }
        }
        return {}; // In case there is no solution
    }
};

int main() {
    int n, target;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " integers:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    cout << "Enter target sum: ";
    cin >> target;

    Solution solution;
    vector<int> indices = solution.twoSum(nums, target);

    if (!indices.empty()) {
        cout << "Indices: " << indices[0] << ", " << indices[1] << endl;
        cout << "Numbers: " << nums[indices[0]] << ", " << nums[indices[1]] << endl;
    }
    else {
        cout << "No two sum solution found!" << endl;
    }

    return 0;
}
