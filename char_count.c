#include <stdio.h>
#include "prog1.h"
#include <string.h>

int char_count(string s,const char c)
{
    //printf("%d\n",strlen(s));
    int index = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        
        if (s[i] == c)
        {
            
            index++;
        }
    }

    return index;
}

int main()
{
    char character = 'i';
    string szo = "cica";
    int index = char_count(szo, character); 
    printf("%d\n",index);

    return 0;
}