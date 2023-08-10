The solution file solves Leetcode 1408. String Matching in an Array and beats 100% of runtimes.
Given an array of string words, return all strings in words that is a substring of another word. You can return the answer in any order

# Intuition
Harder than I thought, a few things not considered initially. A brute force method that checks each element in both arrays
and keeps track of position and duplicates.

# Approach
Naiive, checks, without sorting, for substring occurrences.

# Complexity
- Time complexity:
O(n^2) for number of elements in words

- Space complexity:
O(n) for number of elements in words
