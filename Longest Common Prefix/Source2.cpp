#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        string prefix = strs[0]; // Start with the entire first string as the prefix

        for (int i = 1; i < strs.size(); ++i) {
            // Compare the current prefix with each string in the array
            for (int j = 0; j < prefix.size() && j < strs[i].size(); ++j) {
                if (strs[i][j] != prefix[j]) {
                    // If characters don't match, truncate the prefix
                    prefix = prefix.substr(0, j);
                    break; // And break out of the loop
                }
            }
            // If the whole string matches but is shorter than the current prefix,
            // update the prefix to this string.
            if (strs[i].size() < prefix.size()) {
                prefix = strs[i];
            }
        }

        return prefix;
    }
};

int main() {
    Solution solution;
    vector<string> strs = { "flower", "flow", "flight" }; // Example input

    string result = solution.longestCommonPrefix(strs);
    cout << "The longest common prefix is: " << result << endl;

    return 0;
}
