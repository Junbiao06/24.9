#include<stdio.h>
#include<string.h>


char* get_char(char*a);

int main (void)
{
    char* a;
    char* string[] = {"apple","banana","orange","watermelon",};
    char* n = get_char(a);
    for (int i = 0;i<6;i++)
    {
        if (strcmp(string[i],n))
        {
            printf("Match.\n");
            return 0;
        }
    }
    printf("Error.\n");
    return 1;
}

char* get_char(char*a)
{
    printf("String: ");
    scanf("%c",&a);
    return a;
}