#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> array;
        for (int i = 0; i < words.size(); ++i) {
            for (int j = 0; j < words[i].size(); ++j) {
                if (words[i][j] == x) {
                    array.push_back(i);
                    break;
                }
            }
        }
        return array;
    }
};

int main() {
    Solution solution;
    vector<string> words = { "leet", "code" };
    char x = 'e';

    vector<int> indices = solution.findWordsContaining(words, x);
    cout << "Indices of words containing '" << x << "': ";
    for (int index : indices) {
        cout << index << " ";
    }
    cout << endl;

    return 0;
}
