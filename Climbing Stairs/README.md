# Climbing Stairs Solution 🧗‍♂️

## Problem Statement
You are climbing a staircase. It takes `n` steps to reach the top. Each time you can either climb 1 or 2 steps. The challenge is to find how many distinct ways you can climb to the top.

### Examples
- **Example 1:**
  - `Input: n = 2`
  - `Output: 2`
  - `Explanation: There are two ways to climb to the top.`
    1. `1 step + 1 step`
    2. `2 steps`

- **Example 2:**
  - `Input: n = 3`
  - `Output: 3`
  - `Explanation: There are three ways to climb to the top.`
    1. `1 step + 1 step + 1 step`
    2. `1 step + 2 steps`
    3. `2 steps + 1 step`

### Constraints
- `1 <= n <= 45`

## Requirements
- Implement a function that accepts an integer `n`, the total number of steps in the staircase.
- The function should return an integer, the total number of distinct ways to reach the top.

## Solution
This solution adopts a dynamic programming approach, akin to the Fibonacci sequence. Starting at the base, we calculate the number of ways to reach each step by summing the ways to get to the two previous steps.

### Intuition
Recognizing the problem's resemblance to the Fibonacci sequence, where the ways to reach a particular step is the sum of ways to reach the two preceding steps, guided the decision to apply a dynamic programming strategy.

### Approach
The approach involves a bottom-up dynamic programming technique. Initializing base cases for the 0th and 1st step and subsequently iterating up to `n`, each step's number of ways is calculated based on the values previously computed.

### Complexity
- **Time Complexity:** $$O(n)$$ - The solution involves a single iteration through `n`, with each step calculated in constant time.
- **Space Complexity:** $$O(n)$$ - Space is allocated to store the number of ways to reach each step up to `n`.

## Conclusion
The presented algorithm provides a swift and scalable solution to the climbing stairs challenge, demonstrating the effectiveness of dynamic programming in solving combinatorial problems.
