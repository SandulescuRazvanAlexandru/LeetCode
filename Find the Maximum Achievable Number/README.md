# Find the Maximum Achievable Number

## Problem Statement
Given two integers, `num` and `t`, the task is to find the maximum possible achievable number by either increasing or decreasing another integer `x` by 1, and simultaneously increasing or decreasing `num` by 1, no more than `t` times.

An integer `x` is called achievable if it can become equal to `num` after applying the mentioned operation no more than `t` times.

The goal is to return the maximum possible achievable number. It is guaranteed that at least one achievable number exists.

### Examples
- **Example 1:**
  - Input: `num = 4`, `t = 1`
  - Output: `6`
  - Explanation: The maximum achievable number is `x = 6`; it can become equal to `num` after decreasing `x` by 1 and increasing `num` by 1, making both `x` and `num` equal to 5.

- **Example 2:**
  - Input: `num = 3`, `t = 2`
  - Output: `7`
  - Explanation: The maximum achievable number is `x = 7`; after decreasing `x` by 1 and increasing `num` by 1 twice, `x` will equal `num` at 5.

### Constraints
- `1 <= num, t <= 50`
