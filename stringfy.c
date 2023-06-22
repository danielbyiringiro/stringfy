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

int main(void)
{
    string word1 = "Daniel";
    string word2 = "Byiringiro";
    string word3 = "Daniel";
    string word4 = "DAniel";
    string word5 = "danIEL";
    string word6 = "xerxes";

    printf("word1 and word 2 are equal: %d \n", equals(word1,word2));
    printf("word1 and word 3 are equal: %d \n", equals(word1,word3));
    printf("word1 and word 4 are equal: %d \n", equals(word1,word4));
    printf("word1 and word 5 are equal: %d \n", equals(word1,word5));
    printf("word5 and word 6 are equal: %d \n", equals(word5,word6));
    printf("word1 and word 2 are equal: %d \n", equalsIgnoreCase(word1,word2));
    printf("word1 and word 3 are equal: %d \n", equalsIgnoreCase(word1,word3));
    printf("word1 and word 4 are equal: %d \n", equalsIgnoreCase(word1,word4));
    printf("word1 and word 5 are equal: %d \n", equalsIgnoreCase(word1,word5));
    printf("word5 and word 6 are equal: %d \n", equalsIgnoreCase(word5,word6));

}