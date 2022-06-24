#include<stdio.h>
void Short(int*,int);
void input(int *p,int);
void display(int*,int);
void main(){
    int n ;
    printf("Enter size of Array :     ");
    scanf("  %d", &n);
    int arr[n];
    printf("Enter elements of Array : ");
    input(arr,n);
    printf("Unshorted Array : ");
    display(arr, n);
    Short(arr,n);
    printf("\nShorted Array : ");
    display(arr,n);
    
        }

void input(int *p , int size){
    for (int i = 0; i<size; i++)
    {
        scanf("%d ", (p+i));
    }
}
void display(int *p ,int size){
    for (int i = 0; i < size; i++)
    {
        printf("  %d", p[i]);
    }
}
void Short(int *p ,int size){
    for (int i = 0; i < size -1; i++)
    {
      for (int j = i+1; j<size; j++)
      {
          if(p[i]> p[j]){
              int temp = p[i];
              p[i] = p[j];
              p[j] =temp ;
          }
      }
      
    }
    
}