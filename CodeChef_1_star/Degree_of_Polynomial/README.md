# Degree of Polynomial
### In mathematics, the degree of polynomials in one variable is the highest power of the variable in the algebraic expression with non-zero coefficient.

### Chef has a polynomial in one variable x with N terms. The polynomial looks like A0. x^0 + A1.x^1+....+A(n-2).x^(n-1) where Ai-1 denotes the coefficient of the ith term for all (1≤i≤N).

### Find the degree of the polynomial.

### Note: It is guaranteed that there exists at least one term with non-zero coefficient.

### Input Format
- First line will contain T, number of test cases. Then the test cases follow.
- First line of each test case contains of a single integer N - the number of terms in the polynomial.
- Second line of each test case contains of N space-separated integers - the ith integer Ai−1 corresponds to the coefficient of x(i−1).

### Output Format
- For each test case, output in a single line, the degree of the polynomial.

### Constraints
- 1≤T≤100
- 1≤N≤1000
- -1000 <= Ai <=1000
- Ai =! 0 for at least one (0≤i<N).

### Sample 1:
### Input
- 4
- 1
- 5
- 2
- -3 3
- 3
- 0 0 5
- 4
- 1 2 4 0
### Output
- 0
- 1
- 2
- 2

### Explanation:
- Test case 
1
1: There is only one term 
x
0
x 
0
  with coefficient 
5
5. Thus, we are given a constant polynomial and the degree is 
0
0.

- Test case 
2
2: The polynomial is 
−
3
⋅
x
0
+
3
⋅
x
1
=
−
3
+
3
⋅
x
−3⋅x 
0
 +3⋅x 
1
 =−3+3⋅x. Thus, the highest power of 
x
x with non-zero coefficient is 
1
1.

- Test case 
3
3: The polynomial is 
0
⋅
x
0
+
0
⋅
x
1
+
5
⋅
x
2
=
0
+
0
+
5
⋅
x
2
0⋅x 
0
 +0⋅x 
1
 +5⋅x 
2
 =0+0+5⋅x 
2
 . Thus, the highest power of 
x
x with non-zero coefficient is 
2
2.

- Test case 
4
4: The polynomial is 
1
⋅
x
0
+
2
⋅
x
1
+
4
⋅
x
2
+
0
⋅
x
3
=
1
+
2
⋅
x
+
4
⋅
x
2
1⋅x 
0
 +2⋅x 
1
 +4⋅x 
2
 +0⋅x 
3
 =1+2⋅x+4⋅x 
2
 . Thus, the highest power of 
x
x with non-zero coefficient is 
2
2.