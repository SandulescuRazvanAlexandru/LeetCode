#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int fib(int n) {
        if (n == 0) return 0;
        if (n == 1) return 1;
        int x1 = 0, x2 = 1, result = 0;
        while (n > 1) {
            result = x1 + x2;
            x1 = x2;
            x2 = result;
            --n;
        }
        return result;
    }
};

int main() {
    Solution solution;
    int f = 5; 
    cout << solution.fib(f);

    return 0;
}
