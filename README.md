Question: 1 - Two Sum 

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

Question: 7 – Reverse Integer  

💻 Approach:
 We are given a signed 32-bit integer x.
 Our task: reverse its digits while ensuring the result stays within the valid 32-bit signed integer range [−231,231−1][-2³¹, 2³¹ − 1][−231,231−1].  
 
1️⃣ Extract the last digit using modulo (x % 10).  
 2️⃣ Remove the digit from x using integer division (x / 10).  
 3️⃣ Before appending the digit, check for overflow or underflow conditions.  
 4️⃣ If reversing exceeds the allowed range, return 0; otherwise, build the reversed number incrementally.  


 ⏱ Time Complexity: O(log₁₀ n)  
 📦 Space Complexity: O(1)  
✨ Key Insight:
 Careful boundary checks are crucial—integer overflow is a logical pitfall, not just a language limitation.

 <img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/32d98142-727a-4eb6-9c76-db52922000db" />


Question: 206 – Reverse Linked List

💻 Approach:
 We are given the head of a singly linked list.
 Our task: Reverse the list and return the new head.
 
1️⃣ Initialize two pointers: prev as NULL and curr pointing to head.  
 2️⃣ Traverse the list while keeping track of the next node.  
 3️⃣ Reverse the next pointer of the current node to point to prev.  
 4️⃣ Move prev and curr one step forward.  
 5️⃣ Once traversal ends, prev becomes the new head of the reversed list.  

⏱ Time Complexity: O(n)  
 📦 Space Complexity: O(1)  
✨ Key Insight:
 Pointer manipulation is powerful—once you control references, you control the structure.

 <img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/13c26024-5370-4c4b-b5c7-649462281d38" />


Question: 9 – Palindrome Number

💻 Approach:
 We are given an integer x.
 Our task: determine whether x is a palindrome—i.e., it reads the same forward and backward.
 
1️⃣ Immediately return false for negative numbers and numbers ending with 0 (except 0 itself).  
 2️⃣ Reverse only half of the number instead of the entire integer.  
 3️⃣ Compare the remaining half with the reversed half.  
 4️⃣ For odd-length numbers, ignore the middle digit during comparison.  

 ⏱ Time Complexity: O(log₁₀ n)  
 📦 Space Complexity: O(1)  
✨ Key Insight:
 You don’t always need to process the entire input—sometimes half is enough.  

 <img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/269d8a83-8b6e-48fe-b6aa-fee62dadabe3" />


Question: 125 – Valid Palindrome
💻 Approach:
 We are given a string s.
 Our task: determine whether it is a palindrome after converting all letters to lowercase and removing all non-alphanumeric characters.
 
1️⃣ Initialize two pointers: one at the start (left) and one at the end (right).  
 2️⃣ Skip non-alphanumeric characters from both ends.  
 3️⃣ Compare characters case-insensitively using tolower.  
 4️⃣ If any mismatch occurs, return false.  
 5️⃣ If all valid characters match, return true.  

 ⏱ Time Complexity: O(n)  
 📦 Space Complexity: O(1)  
✨ Key Insight:
 Preprocessing isn’t always necessary—smart pointer movement can handle validation on the fly.

 <img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/2e6d37dd-fbdd-4c52-b7c4-7303aefb8a80" />

Question: 169 – Majority Element

💻 Approach:
 We are given an array nums of size n.
 Our task: find the element that appears more than ⌊n / 2⌋ times (guaranteed to exist).

1️⃣ Initialize a candidate element and a counter.  
 2️⃣ Traverse the array:  
 • If the current element matches the candidate, increment the count.  
 • Otherwise, decrement the count.  
 3️⃣ When the count reaches zero, update the candidate to the current element and reset the count.  
 4️⃣ After traversal, the remaining candidate is the majority element.  

 ⏱ Time Complexity: O(n)  
 📦 Space Complexity: O(1)  
✨ Key Insight:
 You don’t need frequency maps when a majority is guaranteed—pair cancellation is enough.  
 
 <img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/48750ad1-1452-4770-a5a2-7bc9cfb20ec2" />

Question: 70 – Climbing Stairs

💻 Approach:
We are given an integer n, representing the number of steps to reach the top.
 Each time, we can climb either 1 step or 2 steps.
 Our task: compute the total number of distinct ways to reach the top.

1️⃣ Use Dynamic Programming to break the problem into subproblems.  
 2️⃣ Let dp[i] represent the number of ways to reach step i.  
 3️⃣ Base cases:  
 • dp[0] = 1 (one way to stay at the ground)  
 • dp[1] = 1   
 4️⃣ Recurrence relation:
 dp[n] = dp[n-1] + dp[n-2]  
 5️⃣ Use memoization to avoid redundant calculations.  

 ⏱ Time Complexity: O(n)  
 📦 Space Complexity: O(n)  
✨ Key Insight:
Problems that look recursive often hide an optimal dynamic programming solution when overlapping subproblems exist.  


<img width="800" height="449" alt="image" src="https://github.com/user-attachments/assets/6226bc85-d4af-4ddd-adb9-47c1330bc940" />

Question: 344 – Reverse String

💻 Approach:
We are given a character array s.
Our task: reverse the string in-place using O(1) extra memory.

1️⃣ Initialize two pointers: one at the start (left) and one at the end (right).  
2️⃣ Swap the characters at left and right.  
3️⃣ Move left forward and right backward.  
4️⃣ Repeat until both pointers meet.  

⏱ Time Complexity: O(n)  
📦 Space Complexity: O(1)  
✨ Key Insight:
Reversal doesn’t require extra arrays—careful pointer manipulation is enough.

<img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/23f0eed1-8c35-40c7-af77-af488741b9be" />

Question: 136 – Single Number

💻 Approach:
We are given an array where every element appears twice except one.  
 The goal is to find that unique element in linear time and constant space.  
🔑 Key Insight:
 Using the XOR (^) operator
a ^ a = 0 → duplicate elements cancel out
a ^ 0 = a → the unique element remains
By XOR-ing all elements together, all pairs vanish, leaving only the single number.

This allows us to solve the problem in one pass without extra memory.  
⏱ Time Complexity: O(n)  
 📦 Space Complexity: O(1)  
💡 DSA Lesson Reinforced:
 Sometimes the most optimal solution isn’t about data structures—it’s about understanding bitwise properties.

 <img width="800" height="450" alt="image" src="https://github.com/user-attachments/assets/086ff97b-2be3-4007-8292-466d247f4455" />

Question: 217 – Contains Duplicate
💻 Approach:  
We are given an integer array nums.
Our task: determine whether any element appears at least twice in the array.  
1️⃣ Sort the array to bring duplicate values next to each other.  
2️⃣ Traverse the array and compare each element with the next one.  
3️⃣ If any adjacent elements are equal, return true.  
4️⃣ If no duplicates are found after traversal, return false.  
  
⏱ Time Complexity: O(n log n) (due to sorting)  
📦 Space Complexity: O(1) (in-place sort, ignoring input modification)  
✨ Key Insight:
Sometimes a simple preprocessing step like sorting can significantly simplify the problem logic.  

<img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/034624e5-5b85-4f19-920c-572c39275218" />

Question: 66 – Plus One  
💻 Approach: 
We are given a large integer represented as an array of digits.
Our task: increment the number by one and return the resulting digit array.  
1️⃣ Start traversing the digits from the last index (least significant digit).  
2️⃣ If the current digit is less than 9, increment it and return the array.  
3️⃣ If the digit is 9, set it to 0 and continue moving left (carry propagation).  
4️⃣ If all digits become 0, insert 1 at the beginning of the array.  
5️⃣ Return the final updated digits.  

⏱ Time Complexity: O(n)  
📦 Space Complexity: O(1) (in-place modification, excluding output)  
✨ Key Insight:
Handling carry correctly is the core challenge—once mastered, the solution becomes very intuitive.  

<img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/9eb95ded-d1b4-45b2-b71b-a7a2f06205b4" />

Question: 13 – Roman to Integer  
💻 Approach:
We are given a Roman numeral string and need to convert it into its integer value.  
Key idea: 
 Roman numerals are usually written from larger to smaller values, except when subtraction is involved (like IV, IX, CM).  
1️⃣ Map each Roman symbol to its integer value.  
 2️⃣ Traverse the string from left to right.  
 3️⃣ If the current symbol is smaller than the next one, subtract it.  
 4️⃣ Otherwise, add it to the result.  
 5️⃣ Return the accumulated sum.  

 ⏱ Time Complexity: O(n)  
 📦 Space Complexity: O(1)  
✨ Key Insight:
 The trick isn’t memorizing Roman rules—it’s recognizing that relative order matters more than absolute values.
 
<img width="1280" height="720" alt="image" src="https://github.com/user-attachments/assets/f5961a6f-9caf-40ab-9b64-6bcf04f1c200" />


🔪 Problem No: 53 – Maximum Subarray
💻 Approach:
We are given an integer array nums.
Our task is to find the contiguous subarray with the largest sum and return that sum.

1️⃣ Initialize two variables:
 • currSum to track the current subarray sum  
 • maxSum to store the maximum sum seen so far  
2️⃣ Traverse the array element by element.  
3️⃣ Add the current value to currSum.  
4️⃣ Update maxSum with the maximum of currSum and maxSum.  
5️⃣ If currSum becomes negative, reset it to 0 (it won’t help future subarrays).  
6️⃣ After traversing the array, return maxSum.  

⏱ Time Complexity: O(n)  
📦 Space Complexity: O(1)  
✨ Key Insight:
The maximum subarray either extends the previous subarray or starts fresh at the current element—there’s no benefit in carrying a negative sum forward.

<img width="800" height="450" alt="image" src="https://github.com/user-attachments/assets/1baf3000-e3db-480f-ae45-c3f60a4a9e13" />

Question: 104 – Maximum Depth of Binary Tree

💻 Approach:
We are given the root of a binary tree.
Our task: find the maximum depth, i.e., the number of nodes on the longest path from the root to the farthest leaf.

1️⃣ If the current node is NULL, return 0 (base case).  
2️⃣ Recursively compute the depth of the left subtree.  
3️⃣ Recursively compute the depth of the right subtree.  
4️⃣ Take the maximum of left and right depths and add 1 for the current node.  
5️⃣ Return the final depth.  

⏱ Time Complexity: O(n)  
 (each node is visited exactly once)  
📦 Space Complexity: O(h)  
 (where h is the height of the tree due to recursion stack; worst case O(n))  
✨ Key Insight:
Tree problems often become simple once you clearly define the base case and trust recursion to handle subtrees correctly.

<img width="800" height="450" alt="image" src="https://github.com/user-attachments/assets/d512a78f-604b-42d7-ade9-5e134d4d6a6b" />

Question: 543 – Diameter of Binary Tree

💻 Approach:
We are given the root of a binary tree.
Our task is to find the diameter of the tree, defined as the length (number of edges) of the longest path between any two nodes.  
This path may or may not pass through the root.  
1️⃣ Use Depth-First Search (DFS) to compute the height of each subtree.  
2️⃣ At every node, calculate the possible diameter passing through that node as:
 left subtree height + right subtree height.  
3️⃣ Maintain a variable to track the maximum diameter found so far.  
4️⃣ Return the height of the current node as:
 1 + max(left height, right height) to support parent calculations.  
5️⃣ After traversing the entire tree, return the stored maximum diameter.  

⏱ Time Complexity: O(n) — each node is visited once.  
📦 Space Complexity: O(h) — recursion stack, where h is the height of the tree
 (O(n) in the worst case of a skewed tree).  
✨ Key Insight:
The diameter of a binary tree is not the same as its height.  
 It’s about combining heights from both sides at every node.  
 
<img width="800" height="450" alt="image" src="https://github.com/user-attachments/assets/d02e0172-f899-4fcc-a3fd-de6fa9348cfb" />

Question: 50 – Pow(x, n)
💻 Approach:
We are given a number x and an integer n.  
Our task: compute xnx^nxn efficiently, even when n is very large or negative.  
Instead of multiplying x repeatedly (which would be slow), we use Binary Exponentiation.  
1️⃣ Handle base cases upfront:  
If n == 0, return 1.  
If x == 0, return 0.  
If x == 1 or x == -1, return the result directly based on n.  
2️⃣ Convert n into a long variable to safely handle large negative values.  
3️⃣ If n is negative:  
Convert the problem to (1/x)−n(1/x)^{-n}(1/x)−n.  
4️⃣ Initialize ans = 1.  
5️⃣ While n > 0:  
If n is odd, multiply ans by x.  
Square x.  
Divide n by 2.  
6️⃣ Return ans as the final result.  

⏱ Time Complexity: O(log n)  
📦 Space Complexity: O(1)  
✨ Key Insight:
Breaking the exponent into binary form is the trick—each bit decides whether the current power of x contributes to the final answer.

<img width="800" height="450" alt="image" src="https://github.com/user-attachments/assets/2226a18b-8406-47f4-ae35-c08b3fcd5bda" />

Question: 121 – Best Time to Buy and Sell Stock

💻 Approach:  
We are given an array where each element represents the stock price on a given day.
Our goal is to maximize profit by buying once and selling once in the future.

1️⃣ Initialize bestBuy as the price on day 0 (minimum price seen so far).  
2️⃣ Initialize maxProfit as 0.  
3️⃣ Traverse the array from day 1 onwards.  
4️⃣ For each day:    
Calculate the profit if we sell today (current price - bestBuy).  
Update maxProfit if this profit is higher.  
Update bestBuy if today’s price is lower than the previous best.  
5️⃣ Return maxProfit.

⏱ Time Complexity: O(n)  
📦 Space Complexity: O(1)  
✨ Key Insight: 
The real trick isn’t finding the maximum difference—it’s tracking the minimum price before the current day.
Once that clicks, the solution becomes straightforward.

<img width="800" height="450" alt="image" src="https://github.com/user-attachments/assets/75dd3875-245e-434b-b311-06d088e912c9" />

Question: 141 – Linked List Cycle

💻 Approach:
We are given the head of a singly linked list.  
Our task: determine whether the linked list contains a cycle.  
To solve this efficiently, we use Floyd’s Cycle Detection Algorithm (Tortoise & Hare).  
1️⃣ Initialize two pointers:  
slow moves one step at a time  
fast moves two steps at a time  
2️⃣ Traverse the list while fast and fast->next are not NULL.  
3️⃣ Move slow by one node and fast by two nodes.  
4️⃣ If at any point slow == fast, a cycle exists → return true.  
5️⃣ If traversal ends without collision, no cycle exists → return false.  

⏱ Time Complexity: O(n)  
📦 Space Complexity: O(1) (no extra memory used)  
✨ Key Insight:
Detecting cycles doesn’t require extra data structures—smart pointer movement is enough.  

<img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/ed3677ea-f05e-4248-8f92-cc0d2a5f11ba" />


Question: 142 – Linked List Cycle II
💻 Approach:
We are given the head of a linked list and need to find the node where a cycle begins.  
 If no cycle exists, return null. 
 
🔍 Strategy Used: Floyd’s Cycle Detection Algorithm (Tortoise & Hare)  
1️⃣ Initialize two pointers:  
Slow (s) → moves one step at a time  
Fast (f) → moves two steps at a time  
2️⃣ Traverse the list:  
If fast and slow meet, a cycle is confirmed.  
3️⃣ To find the starting node of the cycle:  
Create a new pointer start at head.  
Move start and slow one step at a time.  
The node where they meet is the cycle entry point.  
4️⃣ If fast reaches NULL, there is no cycle.  

⏱ Time Complexity: O(n)  
📦 Space Complexity: O(1) (no extra data structures used)  
✨ Key Insight:
Detecting a cycle is only half the problem — finding where it starts is the real challenge.

<img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/799b4c89-160d-4eb4-8dc6-fcd52c0f2a4d" />

Question: 226 – Invert Binary Tree  
💻 Approach:  
We are given the root of a binary tree.  
Our task is to invert the tree — that is, swap the left and right children of every node.  
We use recursion to solve this efficiently.  

1️⃣ If the current node is NULL, return NULL (base case).  
2️⃣ Recursively invert the left subtree.  
3️⃣ Recursively invert the right subtree.  
4️⃣ Swap the left and right child pointers of the current node.  
5️⃣ Return the root after inversion.  

⏱ Time Complexity: O(n)  
(Each node is visited exactly once)  
📦 Space Complexity: O(h)  
(Recursive call stack, where h is the height of the tree)  
✨ Key Insight:
Tree problems often become simpler when you think recursively — invert subtrees first, then fix the current node.  
This process continues until all nodes are processed.  

<img width="800" height="450" alt="image" src="https://github.com/user-attachments/assets/e3ef7baa-8267-405c-8215-87eb1e8265d9" />

