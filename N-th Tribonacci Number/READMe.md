# 🔢 Tri-Step Sequence: Mastering the Tribonacci 🎢

## Problem Statement
The Tribonacci sequence is a variation of the Fibonacci sequence where each term is the sum of the three preceding terms. The challenge is to compute the \( n \)-th Tribonacci number, denoted as \( T_n \).

### Examples
- **Example 1:**
  - `Input: n = 4`
  - `Output: 4`
  - `Explanation: T(3) = 0 + 1 + 1 = 2, T(4) = 1 + 1 + 2 = 4`

- **Example 2:**
  - `Input: n = 25`
  - `Output: 1389537`
  - `Explanation: Calculation proceeds by summing up the last three numbers at each step.`

### Constraints
- `0 <= n <= 37`

## Requirements
- A function to calculate the `n`-th number in the Tribonacci sequence.
- The solution should be efficient and handle the specified range of `n`.

## Solution
The solution extends the iterative approach used in Fibonacci sequences to handle three preceding numbers, updating them in a rolling fashion as the iteration progresses.

### Intuition
The extension from two to three numbers in the sequence naturally suggested an adaptation of the iterative approach previously used for Fibonacci.

### Approach
An iterative loop calculates each new term by summing the last three, then updates the three placeholders to move through the sequence up to the required `n`-th term.

### Complexity
- **Time Complexity:** \( O(n) \) - The function iterates once up to the `n`-th term.
- **Space Complexity:** \( O(1) \) - It maintains a constant number of variables, regardless of the input size.

## Conclusion
This algorithm efficiently computes the Tribonacci numbers, demonstrating how an iterative approach can be adapted to variations of classic sequences.
