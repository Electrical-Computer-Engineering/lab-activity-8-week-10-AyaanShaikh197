#include <stdio.h>

int my_isalpha (char c)
{
    return (c >= 'A' && c <= 'z') || (c >= 'a' && c <= 'z');
}

int my_isdigit (char i)
{
    return i >= '0' && i <= '9';
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



int main ()
{
    my_isalpha('c');
    my_isalpha('A');
    my_isdigit('5');
    my_isdigit('d');
    my_to_upper('a');
    my_to_upper('A');
    my_to_lower('S');
    my_to_lower('s');
}
