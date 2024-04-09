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

int my_is_upper (char c)
{
    return c >= 'A' && c <= 'Z'; 
}

char my_to_upper (char c)
{
    if (c >= 'a' && c <= 'z')
    {
        return c - 'a' + 'A';
    }
    else
    {
        return c;
    }
}

char my_to_lower (char c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return c - 'A' + 'a';
    }
    else
    {
        return c;
    }
}

char *ToPigLatin(char* word)
{
    int i = 0; int j = str_len(word); int k;
    int empty_char;
    char temp;
    char *result;
    int firstV;
    int first_char_upper;

    if(my_is_upper(word[0]))
    {
        first_char_upper = 1;
        word[0] = my_to_lower(word[0]);

    }
    
    
    if(word[0] == 'a' || word[0] == 'e' || word[0] == 'i' || word[0] == 'o' || word[0] == 'u' || word[0] == 'A' || word[0] == 'E' || word[0] == 'I' || word[0] == 'O' || word[0] == 'U')
    {
        return my_strcat(word,"way");
    }
    
    else
    {
        firstV = 0;
        for (k = 0; k < j; k++) 
        {
            if(word[0] == 'a' || word[0] == 'e' || word[0] == 'i' || word[0] == 'o' || word[0] == 'u')
            {
                firstV = i;
                break;
            }
        }

        k=0;
        for (i = firstV; i < j; i++)
        {
            result[k] = word[i];
            k++;
        }

        for (i = 0; i < firstV; i++)
        {
            result[k] = word[i];
            k++;
        }

        if(first_char_upper == 1)
        {
            result[0] = my_to_upper(result[0]);
        }
        
        
        return my_strcat(result, "ay");       
    }
}

int main()
{
    char *input1, *input2,*input3, *input4, *input5;
    
    printf("\nenter words to be converted: ");scanf("%s %s %s %s %s", input1,input2,input3,input4,input5);
    printf("\nconverted words: %s %s %s %s %s", ToPigLatin(input1),ToPigLatin(input2),ToPigLatin(input3),ToPigLatin(input4),ToPigLatin(input5));
}
