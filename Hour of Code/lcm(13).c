/*
Lowest Common Multiple (LCM)

Problem statement

Find the LCM of two given integers. Fill in a function that takes as inputs two integers and return their LCM.

Example 1

Input

input1: 2

input2: 3

Output 

6

Explanation

The LCM of 2 and 3 is 6

Example 2

Input

input1: 5

input2: 65

Output

65

Explanation 

The LCM of 5 and 65 is 65.

Input format :
input1: First integer

input2: Second integer

Output format :
Return the LCM of input numbers

Code constraints :
1 <= input1 < 109

1 <= input2 < 109

Sample test cases :
Input 1 :
2
3
Output 1 :
6
*/
#include<stdio.h>
int main(){
    int x,y,m;
    scanf("%d%d",&x,&y);
    m=(x>y)?x:y;
    while(1){
        if(m%x==0 && m%y==0){
            printf("%d",m);
            break;
        }
        ++m;
    }
    return 0;
}
