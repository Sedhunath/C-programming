/*Count occurrences of a digit

Problem statement

Implement the following function: 

int CountDigiOoccurrences(int l, int u, int x);

The function accepts 3 positive integers ‘l’, 'u' and 'x' as its arguments. You are required to calculate the number of occurrences of a digit 'x' in the digits of numbers lying in the range between ‘I’ and 'u' both inclusive, and return the same. 

Note

I < u

0 < x < 9

Example

Input

I: 2

u: 13

x: 3

Output

2

Explanation

The number of occurrences of digit 3 in the digits of numbers lying in the range [2, 13] both inclusive is 2, ie (3, 13), hence 2 is returned.

Input format :
The input accepts the three integers separated by a new line as given in the question.

Output format :
The output is a single integer type.

Sample test cases :
Input 1 :
2
13
3
Output 1 :
2
Input 2 :
1 
100 
9
Output 2 :
2
*/
// You are using GCC
#include <stdio.h>
int CountDidOccur(int l,int u,int x){
    int count=0;
    for(int i=1;i<=u;i++){
        int num = i;
        while (num>0){
           
                if(num %10 ==x){
                    count++;
                }
                num/=10;
        
        }
    }
    return count;
}
int main(){
    int l,u,x;
    scanf("%d %d %d",&l,&u,&x);
    int result=CountDidOccur(l,u,x);
    printf("%d\n",result);
    return 0;
}
