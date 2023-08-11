The solution file solves Leetcode 599. Minimum Index Sum of Two Lists. It beats 85% or runtimes on average.
# Intuition
Much more difficult, time consuming, than I thought initially. The code iterates both lists and adds matching named elements to a vector.
Then, several more iterations and comparisons are done to get the name of all occurences of minimum sum elements into a vector.

# Approach
Brute Force
# Complexity
- Time complexity:
O(nm) where n elements in list1 and m elements in list2 are visited.

- Space complexity:
O(n) where n elements in either list1 or list2 exist.
