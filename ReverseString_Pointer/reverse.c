#include <stdio.h>
void input(char *p) ;
void reverse(char *p);
void display(char*);
void main()
{
  char str[20];
  input(str);
  reverse(str);
  display(str);

}
// get input
void input(char *p){
   gets(p);
}
// reverse a string 
void reverse(char *p)
{
  int j=-1;
  for (int i = 0; p[i]; i++)
  {
     j++;
  }
  int i=0;
  while (i<=j)
  {
    int temp = p[i];
    p[i] =p[j];
    p[j] =temp;
    i++;
    j--;
  }
  
}
// diplaying string
void display(char *p){
   printf("\n%s",p);
}
  