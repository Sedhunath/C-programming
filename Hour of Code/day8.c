
/*Problem statement

You are given an integer input num.

Write a program to perform the following operations

1. Obtain Z by converting num to Binary form.

2. For each bit A in Z, apply bitwise XOR operation with the adjacent bit present on its right, starting from the Most Significant Bit (MSB), store the obtained value back in bit A. Let the new binary number obtained by performing these operations be Y.

3. Obtain X by converting Y to a Decimal form.

Your task is to return the value of x.

[NOTE - Apply bitwise XOR operation of the Least Significant Bit (LSB) with 1 in Z].

Example 1

Input 

013

Output

6

Explanation

6 was obtained as the result after applying all the operations on num = 013

Example 2

Input

649

Output

922

Explanation

922 was obtained as the result after applying all the operations on num = 649*/
#include<stdio.h>
int fun(int arr[], int n)
{
    int i,j,count=0,temp[n];
    for(i=0;i<n;i++)
    temp[i]=arr[i];
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if (arr[j] > arr[j+1])
            {
                int t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i] == temp[i])
        count++;
    }
    return count;
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d", &arr[i]);
    printf("%d", fun(arr, n));
    return 0;
}
