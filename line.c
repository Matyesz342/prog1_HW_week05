#include <stdio.h>

/*
    A program egy 40 egység hosszú "vonalat" rajzol ki.
*/
#pragma region eljárása
void line(char c,const int vonal)
{
    for (int i = 0; i < vonal; i++)
    {
        /*if (i == vonal - 1 )
        {
            printf("-\n");
        }
        else 
        {*/
            printf("%c",c);
        //}
    }
}
#pragma endregion
int main()
{
    int vonal = 40;
    line('-',vonal);

    return 0;
}