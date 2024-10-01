#include<stdio.h>
int get_int(int a);

int main (void)
{
    int a;
    int array[] = {1,5,10,50,100,500};
    int n = get_int(a);
    for (int i = 0;i<6;i++)
    {
        if (array[i] == n)
        {
            printf("Found.\n");
            return 0;
        }
    }
    printf("Error.\n");
    return 1;
}

int get_int(int a)
{
    printf("Number: ");
    scanf("%i",&a);
    return a;
}