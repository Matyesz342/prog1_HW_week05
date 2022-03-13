#include <stdio.h>


/*
A programm 1 és 100 között kiírja az összes számot, de ha a szám osztható 3-mal, akkor nem a számot írja ki hanem azt, hogy fizz. Ha 
5-tel osztható akkor kiírja, hogy buzz. Ha 3-mal és 5-tel is osztható, akkorkiírja, hogy fizzbuzz.
*/
int fizz_buzz_keress(const int n)
{
    int szam = 0;
    if (n % 3 == 0)
    {
        if (n % 5 == 0)
        {
            szam = 3;
        }
        else
        {
            szam = 1;
        }
    }
    else if (n % 5 == 0)
    {
        szam = 2;
    }
    else
    {
        szam = 0;
    }
    
    

    return szam;
}
void szam_kiir(const int szam,const int ertek)
{
    if (szam == 0)
    {
        printf("%d\n",ertek);
    }
    else if (szam == 1)
    {
        printf("fizz\n");
    }
    else if (szam == 2)
    {
        printf("buzz\n");
    }
    else if (szam == 3)
    {
        printf("fizzbuzz\n");
    }
}
int main()
{
    
    for (int i = 1; i <= 100; i++)
    {
      int szam = fizz_buzz_keress(i);
      szam_kiir(szam,i);          
    }
    

    return 0;
}