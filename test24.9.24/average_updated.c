#include<stdio.h>

int get_int1(int number1);
int get_int(int number2);
float average(int number3,int array1[]);
void get_int3();
int sum(int number5,int array2[]);

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
    printf("Total scores is %i\n",sum(N,scores));
    printf("You should keep working...\n");
    get_int3(quit);
    return 0;
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


float average(int number3,int array1[])
{
    int number4=0;
    for (int j = 0; j < number3; j++)
    {
        number4 += array1[j];
    }
    return number4 / (float)number3;
}

void get_int3()
{
    int number4 = 0;
    while (number4 != 1)
    {
    printf("input '1' to quit.\n");
    scanf("%i",&number4);
    if (number4 == 1)
    {
        break;
    }
    }
}

int sum(int number5,int array2[])
{
    int number6=0;
    for(int k = 0; k < number5;k++)
    {
        number6 += array2[k];
    }
    return number6;
}
