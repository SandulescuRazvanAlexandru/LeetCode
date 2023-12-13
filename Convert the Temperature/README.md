# Convert the Temperature

## Problem Statement
The task is to convert a given non-negative floating point number representing a temperature in Celsius to Kelvin and Fahrenheit. The result should be returned as an array `ans = [kelvin, fahrenheit]`.

The conversions are as follows:
- Kelvin = Celsius + 273.15
- Fahrenheit = Celsius * 1.80 + 32.00

### Examples
- **Example 1:**
  - Input: `celsius = 36.50`
  - Output: `[309.65000, 97.70000]`
  - Explanation: Temperature at 36.50 Celsius is converted to 309.65 Kelvin and 97.70 Fahrenheit.

- **Example 2:**
  - Input: `celsius = 122.11`
  - Output: `[395.26000, 251.79800]`
  - Explanation: Temperature at 122.11 Celsius is converted to 395.26 Kelvin and 251.798 Fahrenheit.

### Constraints
- `0 <= celsius <= 1000`

### Note
Answers within \(10^{-5}\) of the actual answer will be accepted.
