#include <stdio.h>
#include <string.h>
void input(char*);
int palindrom(char *, int);
void main()
{
    
    
    char str[20];
    input(str);
    // printf("%s",str);
    int lenght = strlen(str) - 1;
   int result = palindrom(str, lenght);
    if(result ==1){
        printf("Given String is Palindrom");
    }
    else{
        printf("Not Palindrom");
    }
}
void input(char *p)
{
    gets(p);
}
int palindrom(char *p, int j)
{
    for (int i = 0; i <= j; i++)
    {
        if (p[i] == p[j])
        {
            j--;
        }
        else
        {
            
            return 0;
        }
    }
   
       return 1;
}