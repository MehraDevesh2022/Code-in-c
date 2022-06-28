#include<stdio.h>
#include<string.h>
#define m 11
#define n 12
void Short(char str[][n]){
    char temp[n];
    for (int i = 0; i < m-1; i++)
    {
        for (int j = i+1; j< n; j++)
        {
            int result  = strcmp(str[i] , str[j]);
            if (result > 0)
            {
                strcpy(temp , str[i]);
                strcpy(str[i] ,str[j]);
                strcpy(str[j] , temp);
            }
            
        }
        
    }
    
}
int main(int argc, char const *argv[])
{
    char str[11][12] = { "Rudraprayag",
                       "Chamoli",
                       "Pauri	",
                      "Rishikesh",
                      "Kotdwar",
                     "Pithoragarh",
                     "Almora",
                     "Nainital",
                     "Champawat",
                     "Bageshwar",
                     "Rishikesh" };
        
     Short(str);
     for (int i = 0; i < m; i++)
     {
       printf("%s \n" ,str[i]);
     }
     
    return 0;
}
