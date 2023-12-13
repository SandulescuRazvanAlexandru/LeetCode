#include <iostream>

using namespace std;

class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        return num + 2 * t;
    }
};

int main() {
    Solution solution;
    int num, t;
    cout << "Enter num and t: ";
    cin >> num >> t;

    int result = solution.theMaximumAchievableX(num, t);
    cout << "The maximum achievable number is: " << result << endl;

    return 0;
}
