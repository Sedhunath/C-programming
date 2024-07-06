
/*Problem statement

An online book reading community's grid displays books in a specific format. Only one batch of books is displayed at a time and each batch of books is recognized as a string tagged a-z. Each character of the string denotes the initials of the book's author. The community has decided to change the format of the display grid but before they can do this, they need to know the number of unique author's initials present in the given batch of books. The unique author's initials are the initials that appear only once in the batch of books represented as a string.

Write an algorithm to help the community find the count of unique author's initials present in the given batch of books.

Note 

The batch of books contains only the lowercase letters as the author name initial.

Example 

Input 

asfddagha

Output

4*/

#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s",str);
    int count=0,flag=0;
    int len=strlen(str);
    for(int i=0;i<len;i++){
        flag=0;
        for(int j=i+1;j<len;j++){
            if(str[i]==str[j] && str[i]!='#'){
                str[j]='#';
                flag=1;
            }
        }
        if(flag==1){
            str[i]='#';
        }
    }
    for(int i=0;i<len;i++){
        if(str[i]!='#'){
            count++;
        }
    }
    printf("%d",count);
}
