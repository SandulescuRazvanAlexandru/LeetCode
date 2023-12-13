#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for (int i = 0; i < operations.size(); ++i) {
            if (operations[i][1] == '-') {
                --x;
            }
            else {
                ++x;
            }
        }
        return x;
    }
};

int main() {
    Solution solution;
    vector<string> operations = { "++X","++X","X++","X--" }; // Example input

    int result = solution.finalValueAfterOperations(operations);
    cout << "The final value of X is: " << result << endl;

    return 0;
}
