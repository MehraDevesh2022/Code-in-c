#include <stdio.h>
#include <string.h>
struct Book
{
    int BookiD;
    float price;
    char name[20];
};

int main(int argc, char const *argv[])
{ // intialization during declartion
    struct Book b1 = {1001, 370, "Think Like a Monk"};
    struct Book b2, b3;
    // how to access member variable of Structure variable
    // structure_Variable.Member_Varable
    b2.BookiD = 3000;
    b2.price = 370.07;
    strcpy(b2.name, "A Monk"); // because string used strcpy function for input after declaration.

    // user input of structure
    scanf("%d %f", &b3.BookiD, &b3.price);
    fflush(stdin); // becuse of input buffer \n is reamin in buffer and its treat like a char for string and char input time
    gets(b3.name);
    printf(" Bookid = %d  Price=%f BookName = %s \n", b1.BookiD, b1.price, b1.name);
    printf(" Bookid = %d  Price=%f BookName = %s \n", b2.BookiD, b2.price, b2.name);
    printf(" Bookid = %d  Price=%f BookName = %s \n", b3.BookiD, b3.price, b3.name);

    return 0;
}
