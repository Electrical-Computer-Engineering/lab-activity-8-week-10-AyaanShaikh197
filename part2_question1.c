#include <stdio.h>
#define INT_MAX 1000

int my_strcmp(char str1[], char str2[])
{
    int i=0;

    while (str1[i] != '\0' || str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            return 1;
        }
        i++;
    }

    return 0;
}

int my_strncmp(char str1[], char str2[], int n)
{
    int i=0;

    for (i; i < n; i++)
    {
        if (str1[i] != str2[i])
        {
            return 1;
        }
    }

    return 0;
}

char *my_strcpy (char str1[], char str2[])
{
    int i = 0;

    while (str2[i] != '\0')
    {
        str1[i] = str2[i];
        i++;
    }
    str1[i] = '\0';
    
    return str1;
}

char *my_strcat(char str1[], char str2[])
{
    int i = 0;
    int k = 0;
    while (str1[i] != '\0')
    {
        i++;
    }
    while (str2[k] != '\0')
    {
        str1[i++] = str2[k++];
    }

    str1[i] = '\0';
    return str1;
}

--------------char *my_reverse (char str1[], char str2[])
{
    int i = 0;
    int str_len = 0;

    while(str2 != '\0')
    {
        str_len++;
    }

    while (str2[i] != '\0')
    {
        str1[i] = str2[str_len - i];
        i++;
    }
    str1[i] = '\0';
    
    return str1;
}


int main()
{
    char car[100] = "Hi";
    char car2[100] = "esrever";

    printf("\n%s", my_reverse(car,car2));
    printf("\n%d", my_strcmp(car,car2));
    printf("\n%d", my_strncmp(car,car2,2));
    printf("\n%s", my_strcpy(car,car2));
    printf("\n%s", my_strcat(car,"hi"));
    
}
