//count lenght of sting using pointer
#include<stdio.h>
void input(char*);
int size(char*);
void main(){
    char str[20];
    input(str);
    int lenght = size(str);
    printf("Lenght of sting is :%d", lenght);
}
void input(char *p){
    scanf("%[^\n]%*c",p);
}
int size(char *p){
    int count =0;
    for (int i = 0; p[i]; i++)
    {
        count++;
    }
    return count;
    
}