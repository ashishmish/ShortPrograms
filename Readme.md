Problem Statement 1: 
You are provided with set of integers, you need to find the sum of all positive integers in it (negative inputs must be ignored).
 
Input
X – Number of test cases [X < 1000]
On each of next X lines given a integer Y [-1000 <= Y <= 1000]

Output
One integer equals to sum of all positive integers.

Example
Input:
5
4
-5
3
-11
-1
Output:
7


Problem Statement 2: 
Write a program to solve easy arithmetical expressions. Program will be provided with BNF (Backus Normal Form) form to solve & the definition of the same is below.
 <expre>::=<num><opt><num>
<num>::=0|1|2|...|99
<opt>::=+|-|*
 
Note: There must not be any semicolons ";" in your program, Also the C function "system()" is prohibited in this problem.

Input
Multiple test cases, the number of them T is given in the very first line, T<=99.
Each test case contains one line with a correct expression, without leading or trailing spaces.

Output 
For each test case you should output one line contains the result of the expression without any leading zeros. You may assume this number is always a non-negative one.
 

Example
Input:
3
6*7
67-25
31+11

Output:
42
42
42

Problem Statement 3: 
You are provided with some input your task is to reverse the input N times.
 
Input
 
The first lines of the input is an integer N (1 <= N <= 1000). Next follows the input consisting of ASCII characters. The input is terminated by EOF character. 
Length of each word is less than 1024 and maximum number of words can be never more than 1024.
 
Output
 
The input reversed N times with at least a space/newline between any two words of your output.
 
 
Example
Input: 
2
Fox jumps over the lazy dog.

Output:
.god .god yzal yzal eht eht revo revo spmuj spmuj xoF xoF
 

Input: 
1 
It matters not how strait the gate,
How charged with punishments the scroll.
I am the master of my fate: 
I am the captain of my soul.
 
Output:
.luos ym fo niatpac eht ma I 
:etaf ym fo retsam  eht ma I
.llorcs eht stnemhsinup htiw degrahc woH
,etag eht tiarts woh ton srettam tI




Problem Statement 4: 
In some cases kids are observed to pronounce some letters incorrectly, some of them they sometimes pronounce correctly and sometimes incorrectly. Rohit sometimes says T instead of K, but he never says K instead of T. Similarly he sometimes says D instead of G. Instead of R he sometimes says L and sometimes F. Of course it happens that he pronounces the letter correctly. Rohit's father always thinks how many words can mean the word spoken by his son (it doesn't matter if they are real English words).
You task is to write a program which reads from standard input the words spoken by Rohit, counts how many different words can that mean & writes the outcome on standard output as shown below -
 
Input
Ten test cases (given one under another, you have to process all!). Every test case is a single line - a word spoken by Rohit. Only 26 capital letters are used. Maximum length of word is 20.
 
Output
For every test case write an integer in a single line with a single integer, denoting the number of words which Rohit's word can mean.
 

Example
Input:
FILIPEK
[And 9 test cases more]

Output:
4
[And 9 test cases more]







Problem Statement 5: 
This is a very small problem, but small is not always easy. Your task is to write a program which prints itself n (-10 <= n <= 10) times. 
If input is negative, means the reversed program should be printed.

Note: No file I/O allowed.

Input
A line contains an integer n. 

Output 
The required string described above. 

Example
Input:
-2

Source Code:
abcd

Output:
Dcbadcba
