# The Two Dishes

### Chef prepared two dishes yesterday. Chef had assigned the tastiness T1 and T2 to the first and to the second dish respectively. The tastiness of the dishes can be any integer between 0 and N (both inclusive).

### Unfortunately, Chef has forgotten the values of T1 and T2 that he had assigned to the dishes. However, he remembers the sum of the tastiness of both the dishes - denoted by S.

### Chef wonders, what can be the maximum possible absolute difference between the tastiness of the two dishes. Can you help the Chef in finding the maximum absolute difference?

### It is guaranteed that at least one pair {T1 and T2} exist such that T1 + T2 = S, 0 <= T1, T2 <= N.

### Input Format
- The first line of input contains a single integer T, denoting the number of testcases. The description of the T testcases follows.
- The first and only line of each test case contains two space-separated integers N, S, denoting the maximum tastiness and the sum of tastiness of the two dishes, respectively.

### Output Format
- For each testcase, output a single line containing the maximum absolute difference between the tastiness of the two dishes.

### Constraints
- 1≤T≤10^3
- 1≤N≤10^5
- 1≤S≤2⋅10^5
 
### Sample 1:
### Input
- 3
- 3 1
- 4 4
- 2 3
### Output
- 1
- 4
- 1

### Explanation:
- Test Case 
1
1: The possible pairs of 
{
T
1
,
T
2
}
{T 
1
​
 ,T 
2
​
 } are 
{
0
,
1
}
{0,1} and 
{
1
,
0
}
{1,0}. Difference in both the cases is 
1
1, hence the maximum possible absolute difference is 
1
1.

- Test Case 
2
2: The possible pairs of 
{
T
1
,
T
2
}
{T 
1
​
 ,T 
2
​
 } are 
{
0
,
4
}
{0,4}, 
{
1
,
3
}
{1,3}, 
{
2
,
2
}
{2,2}, 
{
3
,
1
}
{3,1} and 
{
4
,
0
}
{4,0}. The maximum possible absolute difference is 
4
4.

- Test Case 
3
3: The possible pairs of 
{
T
1
,
T
2
}
{T 
1
​
 ,T 
2
​
 } are 
{
1
,
2
}
{1,2} and 
{
2
,
1
}
{2,1}. Difference in both the cases is 
1
1, and hence the maximum possible absolute difference is 
1
1.