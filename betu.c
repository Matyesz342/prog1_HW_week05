#include <stdio.h>
#include "prog1.h"
#include <string.h>

int szo_keress(string s,const char c)
{
    //printf("%d\n",strlen(s));
    int index = -1;
    for (int i = 0; i < strlen(s); i++)
    {
        
        if (s[i] == c)
        {
            
            index = i;
        }
    }

    return index;
}

int main()
{
    char character = 'x';
    string szo = "cica";
    int index = szo_keress(szo, character); 
    printf("%d\n",index);

    return 0;
}