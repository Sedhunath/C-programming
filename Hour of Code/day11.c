
String Reverse

﻿You are given a function,

char *ReverseString(char *s);

The function accepts a string ‘s’ that contains alphabets (‘a’ to ‘z’ and ‘A’ to ‘Z’) along with other characters. Reverse this string ‘s’ in such a way that only alphabets are reversed and other characters are not affected.

Note

Return null if it is null.

Null refers to None in the case of Python

Example

Input

a^bk$c

Output

c^kb$a

Explanation

Characters ‘^’ and ‘$’ are at their original positions while all alphabets got reversed.

Input format :
Input is a single string.

Output format :
Output is the reversed string with conditions satisfied.

Sample test cases :
Input 1 :
a^bk$c
Output 1 :
c^kb$a

// You are using GCC
#include<stdio.h>
#include<string.h>
#include<ctype.h>
char*RevStr(char*s){
    if(s==NULL) return NULL;
    int length = strlen(s);
    int left =0;
    int right = length-1;
    while(left<right){
        if(!isalpha(s[left])){
            left++;
        }
        else if(!isalpha(s[right])){
            right--;
        }else{
            char temp = s[left];
            s[left]=s[right];
            s[right]=temp;
            left++;
            right--;
        }
    }
    return s;
}
int main(){
    char s[100];
    scanf("%[^\n]",s);
    char *result = RevStr(s);
    printf("%s",result);
    return 0;
}
