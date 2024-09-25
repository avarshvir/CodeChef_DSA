# Endless Appetizers
### Life is a like a box of of mozzarella sticks. You never know what you're gonna get, but you can predict with 100 percent accuracy that it will be a mozzarella stick.

### Chef's colleague issued a challenge to Chef: "If you eat more than X mozzarella sticks, I'll give you 30 rupees for each extra one you eat".

### For example, if X=5 and Chef eats 8 sticks, he would receive 90 rupees because he ate 3 extra sticks.

### You know that the restaurant serves Y mozzarella sticks per plate.
### You also know that Chef received R rupees from his colleague as a result of the challenge.

### What's the maximum number of plates of mozzarella sticks that Chef could have ordered?

### Note:

- Chef won't order a new plate till he finishes eating all the sticks from the previous one.
- However, it's possible that Chef didn't finish all the sticks from the final plate he ordered.
- See the explained examples below for more clarification.

### Input Format
- The first line of input will contain a single integer T, denoting the number of test cases.
- Each test case consists of one line of input, containing three space-separated integers X,Y, and R — the lower limit on the number of sticks, the number of sticks on a single plate, and the money received by Chef.

### Output Format
- For each test case, output on a new line the answer: the maximum number of plates Chef could have ordered.

### Constraints
- 1≤T≤10^4 
- 1≤X≤100
- 1≤Y≤10
- 0≤R≤3⋅10^4 
- It is guaranteed that R is a multiple of 30.

### Sample 1:
### Input
- 4
- 7 5 30
- 16 5 0
- 15 9 120
- 23 1 2130
### Output
- 2
- 4
- 3
- 94

### Explanation:
- Test case 
1
1: Chef received 
30
30 rupees; meaning he ate 
1
1 extra stick.
Since 
𝑋
=
7
X=7, this means he must've eaten exactly 
8
8 sticks.
At 
5
5 sticks per plate, Chef would need 
2
2 plates to eat 
8
8 sticks (and two sticks from the second plate will remain uneaten).

- Test case 
2
2: Chef received 
0
0 rupees. Since 
𝑋
=
16
X=16, this means he ate 
≤
16
≤16 sticks.
The maximum he could've eaten is exactly 
16
16; and this would require 
4
4 plates since each plate has 
5
5 sticks.

- Test case 
3
3: Chef received 
120
120 rupees, meaning he ate 
4
4 extra sticks.
This makes for a total of 
15
+
4
=
19
15+4=19 sticks, and at 
9
9 sticks per plate he would need 
3
3 plates.