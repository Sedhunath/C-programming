*/Highest Common Factor

Problem statement

Find the HCF (Highest Common Factor) of n numbers given in an integer array. Fill in the function HCF() and return the HCF

Example 1

Input

input1: 3

input2: {2, 4, 8}

Output

2

Explanation

The common factor for 2, 4, 8 are 1 and 2. Hence the HCF (Highest Common Factor) is 2.

Example 2

Input

input1: 5

input2: {10, 15, 20, 35, 70}

Output

5

Explanation

The common factor for 10, 15, 20, 35, 70 are 1 and 5. Hence the HCF (Highest Common Factor) is 5.

Input format :
input1: the size array

input2: an integer array

Output format :
Return the HCF of given numbers

Sample test cases :
Input 1 :
3
2 4 8
Output 1 :
2
*/

// You are using GCC
#include<stdio.h>
int main(){
    int n,i,mp,count;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    i=0;
    mp=arr[i];
    while(i<n){
    if(mp<arr[i])
    mp=arr[i];
    i++;
}
while(1)
{
    i=0;
    count=0;
    while(i<n){
        if(arr[i]%mp==0)
        count++;
        i++;
        }
        if(count ==n)
        break;
        else
        mp--;
}
printf("%d",mp);
return 0;
}
