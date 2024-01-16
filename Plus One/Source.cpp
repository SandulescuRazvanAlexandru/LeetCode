#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i = digits.size() - 1; i >= 0; --i) {
            if (digits[i] < 9) {
                ++digits[i];
                return digits;
            }
            digits[i] = 0;
        }

        vector<int> newDigits(digits.size() + 1);
        newDigits[0] = 1;

        for (int i = 1; i < newDigits.size(); ++i) {
            newDigits[i] = digits[i - 1];
        }

        digits = newDigits; 
        return digits;
    }
};

int main() {
    Solution solution;
    int n;
    cin >> n;
    vector<int> digits(n);
    for (int i = 0; i < n; ++i)
        cin >> digits[i];

    digits = solution.plusOne(digits);

    for (int i = 0; i < digits.size(); ++i)
        cout << digits[i] << " ";

    return 0;
}
