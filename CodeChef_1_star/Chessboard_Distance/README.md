# Chessboard Distance
## The Chessboard Distance for any two points (X1,Y1) and (X2, Y2) on a Cartesian plane is defined as max(∣X1 - X2|),(|Y1-Y2|).
​
## You are given two points (X1,Y1) and (X2, Y2) Output their Chessboard Distance.

## Note that, ∣P∣ denotes the absolute value of integer P. For example, ∣−4∣=4 and ∣7∣=7.

## Input Format
- First line will contain T, the number of test cases. Then the test cases follow.
- Each test case consists of a single line of input containing 4 space separated integers- X1,Y1,X2,Y2 - as defined in the problem statement.

## Output Format
- For each test case, output in a single line the chessboard distance between (X1,Y1) and (X2, Y2)

## Constraints
- 1≤T≤1000
- 1≤X1,Y1,X2,Y2≤10^5

 
## Subtasks
- Subtask #1 (100 points): original constraints

## Sample 1:
### Input
- 3
- 2 4 5 1
- 5 5 5 3
- 1 4 3 3
### Output
- 3
- 2
- 2
### Explanation:
- In the first case, the distance between 
(
2
,
4
)
(2,4) and 
(
5
,
1
)
(5,1) is 
𝑚
𝑎
𝑥
(
∣
2
−
5
∣
,
∣
4
−
1
∣
)
=
𝑚
𝑎
𝑥
(
∣
−
3
∣
,
∣
3
∣
)
=
3
max(∣2−5∣,∣4−1∣)=max(∣−3∣,∣3∣)=3.

- In the second case, the distance between 
(
5
,
5
)
(5,5) and 
(
5
,
3
)
(5,3) is 
𝑚
𝑎
𝑥
(
∣
5
−
5
∣
,
∣
5
−
3
∣
)
=
𝑚
𝑎
𝑥
(
∣
0
∣
,
∣
2
∣
)
=
2
max(∣5−5∣,∣5−3∣)=max(∣0∣,∣2∣)=2.

- In the third case, the distance between 
(
1
,
4
)
(1,4) and 
(
3
,
3
)
(3,3) is 
𝑚
𝑎
𝑥
(
∣
1
−
3
∣
,
∣
4
−
3
∣
)
=
𝑚
𝑎
𝑥
(
∣
−
2
∣
,
∣
1
∣
)
=
2
max(∣1−3∣,∣4−3∣)=max(∣−2∣,∣1∣)=2.