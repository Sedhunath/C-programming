#include<stdio.h>
int func(char str[]){
    int i,count=0;
    int freq[255]={0};
    for(int i=0;str[i]!='\0';i++){
        freq[str[i]]++;
    }
    for(int i=0;i<255;i++)
        if(freq[i]==1){
            count++;
        }
        return count;
}
int main(){
    char str[50];
    scanf("%s",&str);
    printf("%d",func(str));
}
