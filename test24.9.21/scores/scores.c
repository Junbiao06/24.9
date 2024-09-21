#include<stdio.h>
const int N = 3;
int get_int(int a);
int main(void)
{
    int scores[N];
    int number;
    for(int i=0;i < N;i++)
    {
        scores[i]=get_int(number);
    }
    printf("%f\n",(scores[0]+scores[1]+scores[2])/(float)N);
}

int get_int(int a)
{
    int number;
    printf("input an integer: ");
    scanf("%i",&number);
    return number;
}