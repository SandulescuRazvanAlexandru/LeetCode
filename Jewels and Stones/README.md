# Jewels and Stones

## Problem Statement
You are given two strings: `jewels`, representing the types of stones that are jewels, and `stones`, representing the stones you have. Each character in `stones` is a type of stone you have. You want to determine how many of the stones you have are also jewels.

Letters are case-sensitive, meaning "a" is considered a different type of stone from "A".

### Examples
- **Example 1:**
  - Input: `jewels = "aA"`, `stones = "aAAbbbb"`
  - Output: `3`
  - Explanation: There are 3 stones that are also jewels: two "a" stones and one "A" stone.

- **Example 2:**
  - Input: `jewels = "z"`, `stones = "ZZ"`
  - Output: `0`
  - Explanation: There are no stones that are jewels since "z" is different from "Z".

### Constraints
- `1 <= jewels.length, stones.length <= 50`
- `jewels` and `stones` consist of only English letters.
- All the characters of `jewels` are unique.
