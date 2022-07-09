// function returning structure variable
#include<stdio.h>
struct Book
{
    int BookId;
    float Price;
    char name [20];
};

struct Book input(){
    struct Book B;
    printf("Enter Book Id and Price , Book Name :");
    scanf("%d %2f" ,&B.BookId ,&B.Price);
    fflush(stdin);
    gets(B.name);
    return B; // retrung structre variable with three values
}

int main(int argc, char const *argv[])
{
    struct Book b;
    b = input();
    printf(" Bookid = %d \n Price = %f \n Book Name = %s" ,b.BookId ,b.Price ,b.name);
    return 0;
}

