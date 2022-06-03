// Wap to sort two number using pointer

#include <stdio.h>
void input(int *p, int size);
void display(int *p, int size);
void sort(int *p, int size);
void swap(int *p, int *q);
void main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    input(a, n);
    sort(a, n);
    display(a, n);
}

void input(int *p, int size)
{
    for (int i = 0; i < size; i++)
    {
        scanf("%d", (p + i));
    }
}
void sort(int *p, int size)
{

    for (int i = 0; i < size - 1; i++)
    {

        for (int j = i + 1; j < size; j++)
        {
            if (*(p + i) > *(p + j))
            {
                swap((p + i), (p + j));
            }
        }
    }
}
void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}
void display(int *p, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf(" %d", *(p + i));
    }
}
