/*
Concrete and Glass Slabs

The program must accept a character matrix of size R*C containing and "-" as the input. The character
"=" represents a concrete slab and the character "-" represents a glass slab. If an iron ball falls on a glass
slab, then it will break the glass and continue to fall. The iron ball stops falling when it falls on a concrete
slab, but if the iron ball falls directly on a concrete slab without breaking any glass before, then the
concrete slab will break and continue to fall till the next occurring concrete slab in that column. If a slab is
broken, the program must replace the corresponding character with the character nx". Finally, the program
must print the modified matrix representing the state of R*C slabs as the output.
Boundary Condition(s):
2 R, C 50
Input Format:
The first line contains R and C separated by a space.
The next R lines, each contains C characters separated by a space.
Output Format:
The first R lines, each contains C characters separated by a space.
Example Input/Output 1:
Input:
55
Output:

xxxxx
= x xxx
=xx=x
-x===
*/
