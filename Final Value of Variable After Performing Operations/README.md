# Final Value of Variable After Performing Operations

## Problem Statement
In a programming language with only four operations and one variable `X`, you are tasked with finding the final value of `X` after performing a series of operations. The operations are as follows:
- "++X" and "X++" increment the value of the variable `X` by 1.
- "--X" and "X--" decrement the value of the variable `X` by 1.

Given an array of strings `operations` containing a list of operations, return the final value of `X` after performing all the operations. Initially, the value of `X` is 0.

### Examples
- **Example 1:**
  - Input: `operations = ["--X","X++","X++"]`
  - Output: `1`
  - Explanation: The operations modify `X` as follows: `--X` (X becomes -1), `X++` (X becomes 0), `X++` (X becomes 1).

- **Example 2:**
  - Input: `operations = ["++X","++X","X++"]`
  - Output: `3`
  - Explanation: The operations modify `X` as follows: `++X` (X becomes 1), `++X` (X becomes 2), `X++` (X becomes 3).

- **Example 3:**
  - Input: `operations = ["X++","++X","--X","X--"]`
  - Output: `0`
  - Explanation: The operations modify `X` as follows: `X++` (X becomes 1), `++X` (X becomes 2), `--X` (X becomes 1), `X--` (X returns to 0).

### Constraints
- `1 <= operations.length <= 100`
- `operations[i]` will be either `"++X"`, `"X++"`, `"--X"`, or `"X--"`.
