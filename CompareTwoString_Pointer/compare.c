// WAP to compare two string
#include<stdio.h>
int compare(int *p, int *q);
int length(char *p);
void main()
{
    char str[20];
    char str1[20];
    printf("Enter two strings :\n");
    scanf("%s %s",&str ,&str1);
    int ans = compare(str,str1);
    if(ans !=0){
        printf("Equals");
    }
    else{
        printf("\nNot equals");
    }
}
int compare(int *p , int *q){
  int size = length(p);
  int size1 = length(q);
  if(size == size1){
      for(int i=0; i<size; i++){
          if(*(p+i) != *(q+i)){
              return 0;
          }
      }
  }
  else {
      return 0;
  }
  return 1;

}
int length(char *p)
{
    int i;
    for (i = 0; *(p + i) != '\0'; i++)
    {
    }
    return i;
}