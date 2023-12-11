#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string removeVowels(string s) {
        string result;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u') {
                result += s[i];
            }
        }
        return result;
    }
};

int main() {
    Solution solution;
    string input;
    cout << "Enter a string: ";
    cin >> input;

    string output = solution.removeVowels(input);
    cout << "String after removing vowels: " << output << endl;

    return 0;
}
