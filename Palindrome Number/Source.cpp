#include <iostream>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int reversedHalf = 0;
        while (x > reversedHalf) {
            reversedHalf = reversedHalf * 10 + x % 10;
            x /= 10;
        }

        // Check for even length palindromes
        if (x == reversedHalf) {
            return true;
        }

        // Check for odd length palindromes
        // For odd length, the middle digit is not compared
        if (x == reversedHalf / 10) {
            return true;
        }

        // If neither condition is true, it's not a palindrome
        return false;


        //===method cool===//
        //// When the length is an odd number, we can get rid of the middle digit by reversedHalf/10
        //// For example when the input is 12321, at the end of the loop we get x = 12, reversedHalf = 123,
        //// since the middle digit doesn't matter in palindrome(it will always equal to itself), we can simply get rid of it.
        //return x == reversedHalf || x == reversedHalf / 10;
    }
};

int main() {
    Solution solution;
    int number;
    cout << "Enter a number to check if it's a palindrome: ";
    cin >> number;

    bool isPalind = solution.isPalindrome(number);
    if (isPalind) {
        cout << number << " is a palindrome." << endl;
    }
    else {
        cout << number << " is not a palindrome." << endl;
    }

    return 0;
}
