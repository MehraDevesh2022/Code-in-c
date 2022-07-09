// wap weekdays using enum
#include<stdio.h>
enum weekdays{
    Monday =1 , Tuesday , Wednesday , Thursday , Friday , Saturady , Sunday
};
int main(int argc, char const *argv[])
{
    for (int i = Monday; i <= Sunday ; i++)
    {
      printf("%d ",i);
    }

    return 0;
}
