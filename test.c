#include <stdio.h>
#include "stringfy.h"

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