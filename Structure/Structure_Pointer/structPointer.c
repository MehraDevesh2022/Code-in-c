// Wap call by refrence using structre  

#include<stdio.h>
struct Book
{
    int BookID;
    float price;
    char name[20];
};
void input(struct Book *P){ 
    scanf("%d %f" ,&P->BookID , &P->price);  // *p == B  both are same || (*p).BookID == p->BookID (both are same) ((*p). == p->)
    fflush(stdin);
    gets(P->name);

}
void display(struct Book *P){ // *P Structure pointre 
    printf(" Bookid = %d \n Price = %f \n Book Name = %s", P->BookID, P->price, P->name);
} 
int main(int argc, char const *argv[])
{
    struct Book B;
    input(&B); // call by structre reference
    display(&B); // call by structre reference
    return 0;
}

