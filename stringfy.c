#include <stdio.h>

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

int main(void)
{
    string name = "Daniel";
    printf("The length of word %s is %i\n", name, len(name));
}