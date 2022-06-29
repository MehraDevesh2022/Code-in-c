//Wap to find min or max from array using pointer
#include<stdio.h>
void MinMax(int size , int *arr , int *max ,int *min){
      *max =arr[0];
      *min =arr[0];
      for (int i = 1; i < size; i++)
      {
        if(*max < arr[i]){
            *max = arr[i];
        }
        else{
            *min =arr[i];
        }
      }
      
}



int main(int argc, char const *argv[])
{
    int arr[] = {2,4,9,10,100,89,5,1,7,0,-1};
    int min ,max;
    int size = sizeof(arr)/sizeof(arr[0]);
    MinMax(size ,arr , &max ,&min);
    printf("MAX is => %d and Min is => %d",max,min);
    return 0;
}
