#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int tribonacci(int n) {
        if (n == 0) return 0;
        if (n == 1 || n == 2) return 1;
        int x1 = 0, x2 = 1, x3 = 1, result = 0;
        while (n > 2) {
            result = x1 + x2 + x3;
            x1 = x2;
            x2 = x3;
            x3 = result;
            --n;
        }
        return result;
    }
};

int main() {
    Solution solution;
    int f = 6; 
    cout << solution.tribonacci(f);

    return 0;
}
