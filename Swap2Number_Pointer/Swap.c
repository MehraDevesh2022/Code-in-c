// wap to swap two number using pointer
#include<stdio.h>
void swap(int* ,int*);
void display(int* ,int*);
void main(){
    int a,b;
    printf("Enter two value :\n");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    display(&a,&b);
}
void swap(int *p,int *q){
   int t =*p; // *p == a therefor t intead of *t
   *p = *q;
   *q = t;

}
void display(int *p , int *q){
    printf("\n After Swaping : \n a = %d \n b = %d",*p,*q);
}