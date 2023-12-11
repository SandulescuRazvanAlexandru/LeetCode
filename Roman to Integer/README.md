# Roman to Integer

## Description
This repository contains a solution for the "Roman to Integer" problem. The challenge is to convert a Roman numeral to an integer. This solution addresses the standard form of Roman numerals where symbols are placed from largest to smallest from left to right, and it adheres to the subtractive principle used in Roman numerals.

## Problem Statement
Roman numerals are represented by seven different symbols: I, V, X, L, C, D, and M. Given a Roman numeral, the task is to convert it to an integer.

### Examples
- **Example 1:**
  - Input: `s = "III"`
  - Output: `3`
  - Explanation: `III` = 3.

- **Example 2:**
  - Input: `s = "LVIII"`
  - Output: `58`
  - Explanation: `L = 50`, `V= 5`, `III = 3`.

- **Example 3:**
  - Input: `s = "MCMXCIV"`
  - Output: `1994`
  - Explanation: `M = 1000`, `CM = 900`, `XC = 90` and `IV = 4`.

### Constraints
- `1 <= s.length <= 15`
- `s` contains only the characters (`'I'`, `'V'`, `'X'`, `'L'`, `'C'`, `'D'`, `'M'`).
- It is guaranteed that `s` is a valid Roman numeral in the range `[1, 3999]`.


