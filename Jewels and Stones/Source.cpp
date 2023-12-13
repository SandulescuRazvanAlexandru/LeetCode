#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int k = 0;
        for (int i = 0; i < jewels.size(); ++i) {
            for (int j = 0; j < stones.size(); ++j) {
                if (jewels[i] == stones[j]) {
                    ++k;
                }
            }
        }
        return k;
    }
};

int main() {
    Solution solution;
    string jewels = "aA";
    string stones = "aAAbbbb";

    int result = solution.numJewelsInStones(jewels, stones);
    cout << result;

    return 0;
}
