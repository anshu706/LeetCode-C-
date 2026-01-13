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
