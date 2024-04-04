#include <stdio.h>

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

char *ToPigLatin(char* word)
{
    if(word[0] == 'a' || word[0] == 'e' || word[0] == 'i' || word[0] == 'o' || word[0] == 'u')
    {
        return my_strcat(word,"way");
    }
    else
    {
        
    }
}

int main()
{
    char alien[100] = "alien";
    printf("\n%s", ToPigLatin(alien));
}
