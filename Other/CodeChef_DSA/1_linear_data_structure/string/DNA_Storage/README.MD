# DNA Storage
## For encoding an even-length binary string into a sequence of A, T, C, and G, we iterate from left to right and replace the characters as follows:

- 00 is replaced with A
- 01 is replaced with T
- 10 is replaced with C
- 11 is replaced with G
### Given a binary string 𝑆 of length 𝑁 (𝑁 is even), find the encoded sequence.

## Input Format
- First line will contain 𝑇, number of test cases. Then the test cases follow.
- Each test case contains two lines of input.
- First line contains a single integer 𝑁, the length of the sequence.
- Second line contains binary string 𝑆 of length 𝑁.

## Output Format
- For each test case, output in a single line the encoded sequence.

- Note: Output is case-sensitive.

## Constraints
- 1 ≤ 𝑇 ≤ 100
- 2≤N≤10^3 
- N is even.
- Sum of 𝑁 over all test cases is at most 10^3.
- S contains only characters 0 and 1.

## Sample 1:
Input                       Output
4                            A
2                            AG
00                           CCC
4                            CT
0011                      
6
101010
4
1001

## Explanation:
- Test case 1
1: Based on the rules 00 is replaced with A.

- Test case 2
2: Based on the rules 00 is replaced with A. Similarly, 11 is replaced with G. Thus, the encoded sequence is AG.

- Test case 3
3: The first two characters are 10 which is encoded as C. Similarly, the next two characters 10 are encoded as C and the last two characters 10 are encoded as C. Thus, the encoded string is CCC.

- Test case 4
4: The first two characters are 10 which is encoded as C. Similarly, the next two characters 01 are encoded as T. Thus, the encoded string is CT.

