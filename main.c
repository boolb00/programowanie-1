/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
short int sint1 = 4; // cyfra
long int lint1 = 4; // cyfra
unsigned int unsint1 = 4; // liczba całkowita
signed int ssint1 = 4; // liczba całkowita
signed char schar1 = 4; // znak jako liczba całkowita
unsigned char unschar1 = 4; // znak jako liczba całkowita
float f1 = 2.5; // liczba rzeczywista
double lf1 = 3.1412; // liczba rzeczywista
printf ("Zmienna short int ma rozmiar: %dB\n", sizeof (sint1));
printf ("Zmienna long int ma rozmiar: %dB\n", sizeof (lint1));
printf ("Zmienna unsigned int ma rozmiar: %dB\n", sizeof (unsint1));
printf ("Zmienna signed int ma rozmiar: %dB\n", sizeof (ssint1));
printf ("Zmienna signed char ma rozmiar: %dB\n", sizeof (schar1));
printf ("Zmienna unsigned char ma rozmiar: %dB\n", sizeof (unschar1));
printf ("Zmienna float ma rozmiar: %dB\n", sizeof (f1));
printf ("Zmienna double ma rozmiar: %dB\n", sizeof (lf1));

    return 0;
}



