<img width="1366" height="768" alt="image" src="https://github.com/user-attachments/assets/b434122a-f143-40e0-9c04-4562dbce7570" /># LeetCode-C-
Every Problem that I've solved on LeetCode.....

Question 1. Two Sum -------------------------------------------------------------------------------------------------------------------------------------------------------------
💻 Approach:
 We are given an array nums and a target value.
 Our task: find indices of two numbers such that they add up to the target.
1️⃣ Traverse the array once while keeping track of seen elements.
 2️⃣ For each number x, compute its complement: target - x.
 3️⃣ If the complement already exists in a hash map, we’ve found the solution.
 4️⃣ Otherwise, store the current number with its index for future lookups.

⏱ Time Complexity: O(n)
 📦 Space Complexity: O(n)
✨ Key Insight:
 Trading extra space for time using a hash map transforms a brute-force O(n²) solution into an optimal O(n) approach.

<img width="1366" height="768" alt="image" src="https://github.com/user-attachments/assets/7b72397e-2d2e-4e43-83ed-3d945dab57f9" />

