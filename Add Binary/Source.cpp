#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        string result = "";
        int carry = 0;

        int i = a.size() - 1;
        int j = b.size() - 1;

        while (i >= 0 || j >= 0 || carry > 0) {
            int sum = carry;
            if (i >= 0) {
                sum += a[i] - '0'; // Convert char to int
                i--; // Move to the next digit
            }
            if (j >= 0) {
                sum += b[j] - '0'; // Convert char to int
                j--; // Move to the next digit
            }

            carry = sum / 2; // Calculate the carry for the next iteration
            // Add the current digit to the result
            if (sum % 2 == 1) {
                result += '1';
            }
            else {
                result += '0';
            }
        }

        // Reverse the result manually
        int n = result.size();
        for (int k = 0; k < n / 2; k++) {
            char temp = result[k];
            result[k] = result[n - k - 1];
            result[n - k - 1] = temp;
        }

        return result;
    }
};

int main() {
    Solution solution;
    string a = "1010";
    string b = "1011";
    string sum = solution.addBinary(a, b);
    cout << "The sum of " << a << " and " << b << " is " << sum << endl;
    return 0;

    return 0;
}
