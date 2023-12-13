#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    string defangIPaddr(string address) {
        string result;
        for (int i = 0; i < address.size(); ++i) {
            if (address[i] == '.') {
                result += "[.]";
            }
            else {
                result += address[i];
            }
        }
        return result;
    }
};

int main() {
    Solution solution;
    string address = "1.1.1.1";

    string result = solution.defangIPaddr(address);
    cout << result;

    return 0;
}
