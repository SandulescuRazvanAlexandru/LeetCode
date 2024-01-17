# 🌀 Unraveling the Fibonacci Spiral: Iterative Computation 🧠

## Problem Statement
The task is to find the `n`-th number in the Fibonacci sequence, which is a series where each number is the sum of the two preceding ones, starting from 0 and 1.

### Examples
- **Example 1:**
  - `Input: n = 2`
  - `Output: 1`
  - `Explanation: F(2) = F(1) + F(0) = 1 + 0 = 1.`

- **Example 2:**
  - `Input: n = 3`
  - `Output: 2`
  - `Explanation: F(3) = F(2) + F(1) = 1 + 1 = 2.`

- **Example 3:**
  - `Input: n = 4`
  - `Output: 3`
  - `Explanation: F(4) = F(3) + F(2) = 2 + 1 = 3.`

### Constraints
- `0 <= n <= 30`

## Requirements
- Implement a function that computes the `n`-th Fibonacci number using an iterative approach.
- The function should be efficient in terms of time and space complexity.

## Solution
The implemented algorithm tackles the problem iteratively, storing only the two most recent numbers of the sequence at any given time to compute the next one.

### Intuition
The iterative method was chosen for its simplicity and efficiency, reflecting the natural progression of the Fibonacci sequence.

### Approach
The algorithm starts by checking for the base cases. If the input `n` is not a base case, it calculates the sequence iteratively using a while loop, continuously updating two variables that track the last two numbers of the sequence.

### Complexity
- **Time Complexity:** $$O(n)$$ - The solution involves a single loop that runs `n` times.
- **Space Complexity:** $$O(1)$$ - Only a fixed number of variables are used, which does not scale with the input size.

## Conclusion
The solution is an optimal and straightforward method for computing Fibonacci numbers, showcasing the elegance of iterative algorithms in solving classic problems in computer science.
