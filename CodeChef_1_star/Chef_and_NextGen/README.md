# Chef and NextGen
## Chef is currently working for a secret research group called NEXTGEN. While the rest of the world is still in search of a way to utilize Helium-3 as a fuel, NEXTGEN scientists have been able to achieve 2 major milestones:

### Finding a way to make a nuclear reactor that will be able to utilize Helium-3 as a fuel
### Obtaining every bit of Helium-3 from the moon's surface

## Moving forward, the project requires some government funding for completion, which comes under one condition: to prove its worth, the project should power Chefland by generating at least A units of power each year for the next B years.

## Help Chef determine whether the group will get funded assuming that the moon has X grams of Helium-3 and 1 gram of Helium-3 can provide Y units of power.

### Input Format
- The first line of input contains an integer T, the number of testcases. The description of T test cases follows.
- Each test case consists of a single line of input, containing four space-separated integers A,B,X,Y respectively.

### Output Format
- For each test case print on a single line the answer — Yes if NEXTGEN satisfies the government's minimum requirements for funding and No otherwise.

- You may print each character of the answer string in either uppercase or lowercase (for example, the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical).

### Constraints
- 1≤T≤1000
- 1≤A,B,X,Y,≤1000

### Subtasks
- Subtask #1 (100 points): Original constraints

#### Sample 1:
##### Input
##### Output
- 4
- 1 2 3 4
- 4 3 2 1
- 2 18 9 4
- 1 100 2 49
- Yes
- No
- Yes
- No
### Explanation:
- Test case 
1
1: Chefland requires 
𝐴
=
1
A=1 units of power for the next 
𝐵
=
2
B=2 years. In total, the moon must be capable of providing 
𝐴
⋅
𝐵
=
2
A⋅B=2 units of power. There are in total 
𝑋
=
3
X=3 grams of Helium-3 on the moon which is capable of providing 
𝑋
⋅
𝑌
=
12
X⋅Y=12 units of power. 
12
>
2
12>2, so the project satisfies the minimum requirements for funding. Thus, the answer is Yes.

- Test case 
2
2: The total amount of power needed by Chefland is 
𝐴
⋅
𝐵
=
12
A⋅B=12, whereas the total that can be provided by the Helium-3 present on the moon is 
𝑋
⋅
𝑌
=
2
X⋅Y=2, which is insufficient to receive funding, so the answer is No.

- Test case 
3
3: The total amount of power needed by Chefland is 
𝐴
⋅
𝐵
=
2
⋅
18
=
36
A⋅B=2⋅18=36, and the total that can be provided by the Helium-3 present on the moon is 
𝑋
⋅
𝑌
=
9
⋅
4
=
36
X⋅Y=9⋅4=36, which is sufficient to receive funding, so the answer is Yes.

- Test case 
4
4: The total amount of power needed by Chefland is 
𝐴
⋅
𝐵
=
1
⋅
100
=
100
A⋅B=1⋅100=100, and the total that can be provided by the Helium-3 present on the moon is 
𝑋
⋅
𝑌
=
2
⋅
49
=
98
X⋅Y=2⋅49=98, which is insufficient to receive funding, so the answer is No.