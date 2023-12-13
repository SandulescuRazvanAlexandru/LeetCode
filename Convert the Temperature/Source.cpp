#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double kelvin = celsius + 273.15;
        double fahrenheit = celsius * 1.80 + 32.00;
        return { kelvin, fahrenheit };
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
