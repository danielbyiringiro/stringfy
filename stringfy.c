#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

typedef char *string;

int len(string word)
{
    int i = 0;
    char breek = '\0';
    while (1)
    {
        if (*(word + i) == breek)
        {
            break;
        }
        i ++;
    }
    return i;
}

bool equals(string word1, string word2)
{
    if (len(word1) != len(word2))
    {
        return false;
    }

    int length = len(word1);

    for (int i = 0; i < length; i ++)
    {
        if (*(word1 + i) != *(word2 + i))
        {
            return false;
        }
    }

    return true;
}

bool equalsIgnoreCase(string word1, string word2)
{
    if (len(word1) != len(word2))
    {
        return false;
    }

    int length = len(word1);

    for (int i = 0; i < length ; i ++)
    {
        if (tolower(*(word1 + i)) != tolower(*(word2 + i)))
        {
            return false;
        }
    }

    return true;

}

