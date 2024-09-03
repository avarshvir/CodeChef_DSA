# Too many Floors
### Chef and Chefina are residing in a hotel.

### There are 10 floors in the hotel and each floor consists of 10 rooms.

- Floor 1 consists of room numbers 1 to 10.
- Floor 2 consists of room numbers 11 to 20. …
- Floor i consists of room numbers 10⋅(i−1)+1 to 10⋅i.

### You know that Chef's room number is X while Chefina's Room number is Y.
### If Chef starts from his room, find the number of floors he needs to travel to reach Chefina's room.

### Input Format
- First line will contain T, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, two integers X,Y, the room numbers of Chef and Chefina respectively.

### Output Format
- For each test case, output the number of floors Chef needs to travel to reach Chefina's room.

### Constraints
- 1≤T≤1000
- 1≤X,Y≤100
- X!=Y

## Sample 1:
### Input
- 4
- 1 100
- 42 50
- 53 30
- 81 80
### Output
- 9
- 0
- 3
- 1
### Explanation:
- Test Case 
1
1: Since Room 
1
1 is on 
1
𝑠
𝑡
1 
st
  floor and Room 
100
100 is on 
1
0
𝑡
ℎ
10 
th
  floor, Chef needs to climb 
9
9 floors to reach Chefina's Room.

- Test Case 
2
2: Since Room 
42
42 is on 
5
𝑡
ℎ
5 
th
  floor and Room 
50
50 is also on 
5
𝑡
ℎ
5 
th
  floor, Chef does not need to climb any floor.

- Test Case 
3
3: Since Room 
53
53 is on 
6
𝑡
ℎ
6 
th
  floor and Room 
30
30 is on 
3
𝑟
𝑑
3 
rd
  floor, Chef needs to go down 
3
3 floors to reach Chefina's Room.

- Test Case 
4
4: Since Room 
81
81 is on 
9
𝑡
ℎ
9 
th
  floor and Room 
80
80 is on 
8
𝑡
ℎ
8 
th
  floor, Chef needs to go down 
1
1 floors to reach Chefina's Room.