# Maximum-Rectangular-Area-in-a-Histogram
Find the largest rectangular area possible in a given histogram where the largest rectangle can be made of a number of contiguous bars. For simplicity, assume that all bars have the same width and the width is 1 unit, there will be N bars height of each bar will be given by the array arr.

Example 1:
<br>
Input:
N = 7
<br>
arr[] = {6,2,5,4,5,1,6}
<br>
Output: 12
<br>
Explanation: In this example the largest area would be 12 of height 4 and width 3. We can achieve this 
area by choosing 3rd, 4th and 5th bars.




Example 2:
<br>
Input:
N = 8
<br>
arr[] = {7 2 8 9 1 3 6 5}
<br>
Output: 16
<br>
Explanation: Maximum size of the histogram 
will be 8  and there will be 2 consecutive 
histogram. And hence the area of the 
histogram will be 8x2 = 16.

Your Task:
<br>
The task is to complete the function getMaxArea() which takes the array arr[] and its size N as inputs and finds the largest rectangular area possible and returns the answer.

Expected Time Complxity : O(N)
<br>
Expected Auxilliary Space : O(N)

Constraints:
<br>
1 ≤ N ≤ 106
0 ≤ arr[i] ≤ 1012