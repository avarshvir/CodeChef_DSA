# Monopoly

### There are 4 companies in the markets of Chefland, A, B, C, and D.This year,

- Company A made a profit of P lakh rupees,
- Company B made a profit of Q lakh rupees,
- Company C made a profit of R lakh rupees,
- Company D made a profit of S lakh rupees.

### There is said to be a monopoly in the market if the profit made by one company is strictly greater than the sum of profits made by all other companies.
### Determine if there is a monopoly in the market or not.

##### Input Format
- The first line of input will contain a single integer T, denoting the number of test cases.
- The first line and only line of each test case contains four space-separated integers P, Q, R and S — the profits made by companies A, B, C and D respectively.

##### Output Format
- For each test case, output YES if there is a monopoly in the market. Otherwise, output NO.

- You may print each character of YES and NO in uppercase or lowercase (for example, yes, yEs, Yes will be considered identical).

##### Constraints
- 1≤T≤5000
- 1≤P,Q,R,S≤100

#### Sample 1:
###### Input
###### Output
- 4
- 1 1 1 10
- 30 20 6 4
- 100 90 3 4
- 14 15 16 17
- YES
- NO
- YES
- NO
###### Explanation:
- Test Case 1: Here, company 
𝐷
D's profit (
10
10) is greater than the sum of profits of all other companies (
1
+
1
+
1
=
3
1+1+1=3).

- Test Case 2: Here, no company's profit is strictly greater than the sum of profits of all other companies.

- Test Case 3: Here, company 
𝐴
A's profit (
100
100) is greater than the sum of profits of all other companies (
90
+
3
+
4
=
97
90+3+4=97).