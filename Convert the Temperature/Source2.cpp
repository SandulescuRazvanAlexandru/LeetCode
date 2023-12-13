#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> ans(2);
        ans[0] = celsius + 273.15;
        ans[1] = celsius * 1.80 + 32.00;
        return ans;
    }
};

int main() {
    Solution solution;
    double celsius;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    vector<double> temperatures = solution.convertTemperature(celsius);
    cout << "Temperature in Kelvin: " << temperatures[0] << endl;
    cout << "Temperature in Fahrenheit: " << temperatures[1] << endl;

    return 0;
}
