
/*Divisibility by Eleven

Problem statement

Implement the function

Int divisibilitybyeleven(int num);

The function accepts an integer ‘num’ as input. You have to implement the function such that it returns the number of contiguous integer fragments of ‘num’ that are divisible by 11. Contagious integer fragments of a number, say 1273 are:

1,2,7,3,12,27,73,127,273,and 1273.

Example

Input

1215598

Output

4

Explanation

55,121,12155 and 15598 are contiguous fragments of the number 1215598 that are divisible by 11

Input format :
Input is a single integer.

Output format :
Output is an integer representing the number of fragments.

Sample test cases :
Input 1 :
55
Output 1 :
1
*/

// You are using GCC
#include<stdio.h>
int isdivbyel(int num){
   if(num%11==0){
       return 1;
       
   }else{
       return 0;
   }
}
int divbyel(int num){
    int count = 0;
    int fragment = 0;
    char str[20];
    sprintf(str, "%d",num);
    for(int i=0;str[i] !='\0';i++){
        fragment = 0;
        for(int j = i;str[j]!='\0';j++){
            fragment = fragment*10 + (str[j]-'0');
            if(isdivbyel(fragment)){
                count++;
            }
        }
    }
    return count;
}
int main(){
    int num;
    scanf("%d",&num);
    int result=divbyel(num);
    printf("%d",result);
    return 0;
}
