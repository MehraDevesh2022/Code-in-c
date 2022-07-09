// Passing structre value as an argument
#include <stdio.h>
struct Book
{
    int BookId;
    float Price;
    char name[20];
};

struct Book input()
{
    struct Book B;
    printf("Enter Book Id and Price then Enter and  Book Name :");
    scanf("%d %2f", &B.BookId, &B.Price);
    fflush(stdin);
    gets(B.name);
    return B; // retrung structre variable with three values
}
void display(struct Book b){
    printf(" Bookid = %d \n Price = %f \n Book Name = %s", b.BookId, b.Price, b.name);
}

int main(int argc, char const *argv[])
{
    struct Book b;
    b = input();
    display(b); // passing struct value as an argument
    return 0;
}
