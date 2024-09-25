#include<stdio.h>

int get_int1(int number1);
int get_int(int number2);
float average(int number3,int array[]);
int get_int3(int number4);

int main (void)
{
    int a;
    int quit;
    int N = get_int1(N);
    int scores[N];
    for (int i = 0; i < N; i++)
    {
        scores[i]=get_int2(a);
    }
    printf("Average is %f.\n",average(N,scores));
    get_int3(quit);
}

int get_int1(int number1)
{
    printf("How many subjects? ");
    scanf("%i",&number1);
    return number1;
}


int get_int2(int number2)
{
    printf("Your scores: ");
    scanf("%i",&number2);
    return number2;
}


float average(int number3,int array[])
{
    int number4=0;
    for (int j = 0; j < number3; j++)
    {
        number4 += array[j];
    }
    return number4 / (float)number3;
}

int get_int3(int number4)
{
    printf("Keep working...\n");
    printf("input '1' to quit.\n");
    scanf("%i",&number4);
    while (number4 == 1)
    {
        return 0;
        continue;        
    }
}