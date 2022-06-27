// count vowels using pointer
#include<stdio.h>
#include<string.h>
void input(char*);
void count(char*,char*);
void main(){
    char Vowels[] ={"aeiou"};
    char Str[20];
    input( Str);
    count(Str, Vowels);

}
// input from user
void input(char *p ){
    scanf("%[^\n]%*c",p);
}
// count vowels
void count(char *p,char *v){
    strlwr(p);
  
  for (int row = 0; v[row]; row++){
      int count = 0;
      for (int clm = 0; p[clm]; clm++)
      {
          if (v[row] == p[clm]){ // same as *(v+row) == *(p+clm)
              count++;
          }
   }
   printf("Total Vowel %c = %d \n",v[row],count);
   
  }
  
}
