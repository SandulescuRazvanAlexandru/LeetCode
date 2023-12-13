# Defanging an IP Address

## Problem Statement
Given a valid (IPv4) IP address, the objective is to return a defanged version of that IP address. A defanged IP address is a way to express an IP address that prevents software from interpreting it as a clickable link, which is often done for security and to prevent unwanted connections.

A defanged IP address replaces every period `"."` with `"[.]"`.

### Examples
- **Example 1:**
  - Input: `address = "1.1.1.1"`
  - Output: `"1[.]1[.]1[.]1"`
  - Explanation: The periods in the IP address are replaced with `"[.]"`.

- **Example 2:**
  - Input: `address = "255.100.50.0"`
  - Output: `"255[.]100[.]50[.]0"`
  - Explanation: Similarly, the periods are replaced with `"[.]"`.

### Constraints
- The given `address` is a valid IPv4 address.
