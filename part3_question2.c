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


char *remove_match(char s1[], char s2[])
{
    char result[100];
    int pos = 0;
    char current;
    int is_in_s2 = 0;

    for (int i = 0; i < str_len(s1); i++)
    {
        current = s1[i];
        int is_in_s2 = 0;

        for (int j = 0; j < str_len(s2); j++)
        {
           if(current == s2[j])
           {
                is_in_s2 = 1;
           } 
        }
        if (is_in_s2 == 0)
        {
            result[pos] = current;
            pos++;
        }
        
    }
    result[pos] = '\0';
    s1 = my_strcpy(s1,result);

    

    return s1;   

}

int main()
{
    char s1[100] = "ESE124";
    char s2[100] = "E";
    
    printf("%s", remove_match(s1,s2));
}
