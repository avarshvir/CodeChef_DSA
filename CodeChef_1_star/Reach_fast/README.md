# Reach fast
### Chef is standing at coordinate A while Chefina is standing at coordinate B.

### In one step, Chef can increase or decrease his coordinate by at most K.


### Determine the minimum number of steps required by Chef to reach Chefina.

### Input Format
- The first line of input will contain a single integer T, denoting the number of test cases.
- Each test case consists of three integers A,B, and K, the initial coordinate of Chef, the initial coordinate of Chefina and the maximum number of coordinates Chef can move in one step.

### Output Format
- For each test case, output the minimum number of steps required by Chef to reach Chefina.

### Constraints
- 1≤T≤1000
- 1≤A,B≤100
- 1≤K≤100

### Sample 1:
### Input
- 4
- 10 20 3
- 36 36 5
- 50 4 100
- 30 4 2
### Output
- 4
- 0
- 1
- 13

### Explanation:
- Test case 
1
1: In the first three steps, Chef increases his coordinate by 
K
=
3
K=3. In the fourth step, Chef increases his coordinate by 
1
1 which is less than equal to 
K
K. It can be shown that this is the minimum number of steps required by Chef.

- Test case 
2
2: Chef is already at the same coordinate as Chefina. Thus, he needs 
0
0 steps.

- Test case 
3
3: Chef can use 
1
1 step to decrease his coordinate by 
46
46 which is less than 
K
=
100
K=100 and reach Chefina.

- Test case 
4
4: Chef can use 
13
13 steps to decrease his coordinate by 
K
=
2
K=2 and reach the coordinate 
30
−
13
⋅
2
=
4
30−13⋅2=4.