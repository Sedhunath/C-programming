
/*Lowest Common Multiple (LCM) 

You are given an array of positive integers, arr, of size array_length. You are asked to build set S which consists of the LCM of every pair of adjacent elements in arr. Your task is to find the largest element in set S.

For example, for the array {1, 2, 3, 4}, set S = { lcm(1,2), lcm(2,3), lcm(3,4) } = {2, 6, 12}. The largest element is 12.

Notes

The array contains only positive integers.

Adjacent elements may NOT be circular, i.e. they may not wrap around the end of the array

Definition of LCM

A multiple of a number, num, is a number that can be divided by num. For example, the multiples of 5 are 5, 10, 15, 20, 25, and so on. The lowest common multiple (LCM) of two numbers, a and b, is the smallest positive number that is a multiple of both a and b.

Example 1

Input

4

1 3 2 4

Output 

6

Explanation

set S = {lcm(1, 3), lcm(3, 2), lcm(2, 4) } = {3, 6, 4}

Largest element = 6*/

// You are using GCC
#include<stdio.h>
int lcm(int a,int b){
    int max= (a>b)?a:b;
    while(1){
        if(max%a==0 && max%b ==0)
        return max;
        max++;
    }
}
int find_largest_lcm(int arr[],int array_length){
    int largest_lcm=-1;
    for(int i=0;i<array_length - 1;i++){
        int current_lcm = lcm(arr[i],arr[i+1]);
        if(current_lcm > largest_lcm)
        largest_lcm = current_lcm;
    }
    return largest_lcm;
}
int main(){
    int array_length;
    scanf("%d",&array_length);
    int arr[array_length];
    for(int i=0;i<array_length;i++){
        scanf("%d",&arr[i]);
    }
    int largest_lcm = find_largest_lcm(arr,array_length);
    printf("%d",largest_lcm);
    return 0;
}
