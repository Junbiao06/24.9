#include<stdio.h>

int get_int(int number1);
float average(int number2,int array[]);

int main (void)
{
    int arrays;
    const int N = 4;
    int scores[N];
    for(int i=0;i<N;i++)
    {
        scores[i]=get_int(arrays);
    }
    printf("Average is %f\n",average(N,scores));
    return 0;
    
}

int get_int(int number1)
{
    printf("Please input an integer: ");
    scanf("%f",&number1);
    return number1;
}

float average(int number2,int array[])
{
    int sum = 0;
    for(int j=0;j<number2;j++)
    {
        sum += array[j];
    }
    return sum / (float)number2;
}