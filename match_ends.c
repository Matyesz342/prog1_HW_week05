#include <stdio.h>
#include "prog1.h"
#include <string.h>

int match_ends(int n,string words[])
{
    //printf("%d\n",strlen(s));
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        
        //printf("%s",words[i]);
        if (2 <= strlen(words[i]))
        {
            string tmp = words[i];
            if (tmp[0] == tmp[strlen(tmp)-1])
            {
                //printf("%c",tmp[0]);
                index++;
            }
            tmp = "";
            /*if (words[0] == words[strlen(words[i])])
            {*/
                
            //}    
        }
    }

    return index;
}

int main()
{
    
    string szavak1[] ={"aba","xyz","qq","xx","bbb" };
    int szavak1_meret = 5;
    int index = match_ends(szavak1_meret,szavak1); 
    printf("%d\n",index);

    return 0;
}