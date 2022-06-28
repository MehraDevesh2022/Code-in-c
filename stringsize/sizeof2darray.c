// wap to calculate the size of matrix
#include <stdio.h>

int main() {

int result[10][7] = {

    {'1','X','2','X','2','1','1'},
    {'X','1','1','2','2','1','1'},
    {'X','1','1','2','2','1','1'},
    {'1','X','2','X','2','2','2'},
    {'1','X','1','X','1','X','2'},
    {'1','X','2','X','2','1','1'},
    {'1','X','2','2','1','X','1'},
    {'1','X','2','X','2','1','X'},
    {'1','1','1','X','2','2','1'},
    {'1','X','2','X','2','1','1'}

};

int row = sizeof(result)/sizeof(result[0]);
int column = sizeof(result[0])/row;

printf("Number of rows: %d\n", row);
printf("Number of columns: %d\n", column);

}