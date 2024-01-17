#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n = num.size();
        int p = 0, cop = k;
        while (cop) {
            ++p;
            cop /= 10;
        }
        int maxLength = n + p; // Maximum length after addition could be n + p
        vector<int> tempResult(maxLength, 0);
        int carry = 0, sum = 0;

        int i = n - 1, j = maxLength - 1;
        while (i >= 0 || k > 0) {
            sum = carry;
            if (i >= 0) {
                sum += num[i];
                i--;
            }
            if (k > 0) {
                sum += k % 10;
                k /= 10;
            }

            carry = sum / 10;
            tempResult[j] = sum % 10;
            j--;
        }

        // If there is a carry left at the end, include it in the result
        if (carry > 0) {
            tempResult[j] = carry;
            j--;
        }

        // Find the start of the non-zero portion of the result
        int start = j + 1;
        while (start < maxLength && tempResult[start] == 0) {
            start++;
        }

        // Handle the case where the result is zero
        if (start == maxLength) {
            return { 0 };
        }

        // Copy the result into the final result array
        int resultSize = maxLength - start;
        vector<int> result(resultSize);
        for (int i = 0; i < resultSize; ++i) {
            result[i] = tempResult[i + start];
        }

        return result;
    }
};

int main() {
    Solution s;
    vector<int> num = { 0 };
    int k = 10000;
    num = s.addToArrayForm(num, k);
    for (int i = 0; i < num.size(); ++i)
        cout << num[i] << " ";

    return 0;
}
