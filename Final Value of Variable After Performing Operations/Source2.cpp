#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int X = 0;
        for (const string& op : operations) {
            if (op == "++X" || op == "X++") {
                ++X;
            }
            else if (op == "--X" || op == "X--") {
                --X;
            }
        }
        return X;
    }
};

int main() {
    Solution solution;
    vector<string> operations = { "++X","++X","X++","X--" }; // Example input

    int result = solution.finalValueAfterOperations(operations);
    cout << "The final value of X is: " << result << endl;

    return 0;
}
