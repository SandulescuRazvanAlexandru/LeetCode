#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int total = 0;

        for (int i = 0; i < s.length(); ++i) {
            int value = romanCharToInt(s[i]);

            if (i + 1 < s.length() && value < romanCharToInt(s[i + 1])) {
                total -= value;
            }
            else {
                total += value;
            }
        }

        return total;
    }

    int romanCharToInt(char c) {
        switch (c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
        }
    }
};

int main() {
    Solution solution;
    string roman;
    cout << "Enter a Roman numeral: ";
    cin >> roman;

    int result = solution.romanToInt(roman);
    cout << "The integer value of " << roman << " is " << result << "." << endl;

    return 0;
}
