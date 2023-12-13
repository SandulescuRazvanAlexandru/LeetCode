# Concatenation of Array

## Description
This repository contains a solution for the "Concatenation of Array" problem. The objective is to concatenate a given integer array `nums` with itself to form a new array `ans` of twice the original length where each element at index `i` is equal to `nums[i]`, and each element at index `i + n` is also equal to `nums[i]`.

## Problem Statement
Given an integer array `nums` of length `n`, the task is to create an array `ans` of length `2n` where `ans[i]` is equal to `nums[i]` for `0 <= i < n` (0-indexed) and `ans[i + n]` is also equal to `nums[i]`. The array `ans` is the concatenation of two `nums` arrays.

### Examples
- **Example 1:**
  - Input: `nums = [1,2,1]`
  - Output: `[1,2,1,1,2,1]`
  - Explanation: The array `ans` is formed by concatenating `nums` with itself.

- **Example 2:**
  - Input: `nums = [1,3,2,1]`
  - Output: `[1,3,2,1,1,3,2,1]`
  - Explanation: Similarly, `ans` is the concatenation of two `nums` arrays.

### Constraints
- `n == nums.length`
- `1 <= n <= 1000`
- `1 <= nums[i] <= 1000`