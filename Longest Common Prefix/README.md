# Longest Common Prefix

## Description
This repository contains a solution for the "Longest Common Prefix" problem. The challenge is to write a function that finds the longest common prefix among an array of strings. If there is no common prefix, the function should return an empty string.

## Problem Statement
Write a function to find the longest common prefix string amongst an array of strings. If there is no common prefix, return an empty string `""`.

### Examples
- **Example 1:**
  - Input: `strs = ["flower","flow","flight"]`
  - Output: `"fl"`
  - Explanation: "fl" is the longest common prefix in the given input strings.

- **Example 2:**
  - Input: `strs = ["dog","racecar","car"]`
  - Output: `""`
  - Explanation: There is no common prefix among the input strings.

### Constraints
- `1 <= strs.length <= 200`
- `0 <= strs[i].length <= 200`
- `strs[i]` consists of only lowercase English letters.