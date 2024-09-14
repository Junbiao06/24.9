#include<stdio.h>
void add (int x,int y);
int main (void)
{
    int x = 10;
    int y = 20;
    printf("%i\n",x+y);
}
void add(int x,int y)
{
    return x + y;
}