#include <stdio.h>

int str_len(char str[])
{
    int i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return i;
}


void shift(char str[])
{  
    printf("\n%s", str);
    int strlen = str_len(str);

    for(int j = 0; j < strlen; j++)
    {
        for (int i = 0; i < str_len(str)+1; i++)
        {
            str[i] = str[i+1];
        }
        printf("\n%s", str);
    }
}

int main()
{
    char str[100] = "hello";
    shift(str);
}
