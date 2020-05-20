#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "Hangman.h"

#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE
#define WIN_32_LEAN_AND_MEAN


int main() {
   
    int tal = 1, neh = 0, megadt = 0; //a jatekos pillanatnyi talalgatasainak szama, a nehezsegi fok, illetve a megadott betuk szama
    int tal_max = 5; //maximalis talalgatasok szama
    int* mask; //tomb, amiben a megtalalt betuk pozicioja van tarolva
    char* word = 0; // a kitalalni valo szo
    char* guess = 0; //a jatekos altal megadott betu
    word = GetRandomWord("The Great Word List.txt");
    int n = strlen(word);
    mask = (int*)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        mask[i] = 0;
    }

    printf("Valassza ki a nehezsegi fokot!\n");
    printf("1.Konnyu\n");
    printf("2.Kozepes\n");
    printf("3.Nehez\n");
    scanf_s("%d", neh);
    switch (neh)
    {
    case 1 :
        tal_max = 7;
        megadt = n % 3;
        while (tal <= tal_max)
        {
            printf("Adjon meg egy betut!\n");

            for (int i = 0; i < n; i++)
            {
                if (mask[i] == 1)
                    printf(word[i]);
                else if (i % 3 == 0 && megadt != 0)
                {
                    printf(word[i]);
                    megadt--;
                    mask[i] = 1;
                }

                else
                    printf("_");
            }

            scanf_s("%c", guess);

            for (int i = 0; i < n; i++)
            {
                if (guess == word[i])
                {
                    mask[i] = 1;
                    printf("Helyes valasz!\n");
                }
                    
                else
                {
                    tal++;
                    printf("Helytelen valasz!\n");
                }
            }
            for (int j = 0; j < n; j++)
            {
                if (mask[j] == 0)
                    break;
                else
                    printf("Gyozelem! A kitalalt szo : %s", word);
            }
        }
        printf("Vesztettel! A szo %s volt", word);
        break;

    case 2:
        tal_max = 5;
        if (n < 5)
            megadt = 1;
        else if (n < 10)
            megadt = 2;
        else
            megadt = 3;
        while (tal <= tal_max)
        {
            printf("Adjon meg egy betut!\n");

            for (int i = 0; i < n; i++)
            {
                if (mask[i] == 1)
                    printf(word[i]);
                else if (i % 2 == 0 && megadt != 0)
                {
                    printf(word[i]);
                    megadt--;
                    mask[i] = 1;
                }

                else
                    printf("_");
            }

            scanf_s("%c", guess);

            for (int i = 0; i < n; i++)
            {
                if (guess == word[i])
                {
                    mask[i] = 1;
                    printf("Helyes valasz!\n");
                }
                else
                {
                    tal++;
                    printf("Helytelen valasz!\n");
                }
            }
            for (int j = 0; j < n; j++)
            {
                if (mask[j] == 0)
                    break;
                else
                    printf("Gyozelem! A kitalalt szo : %s", word);
            }
        }
        printf("Vesztettel! A szo %s volt", word);
        break;

    case 3:
        tal_max = 3;
        megadt = 0;
        while (tal <= tal_max)
        {
            printf("Adjon meg egy betut!\n");

            for (int i = 0; i < n; i++)
            {
                if (mask[i] == 1)
                    printf(word[i]);
                else if (i % 2 == 0 && megadt != 0)
                {
                    printf(word[i]);
                    megadt--;
                    mask[i] = 1;
                }

                else
                    printf("_");
            }

            scanf_s("%c", guess);

            for (int i = 0; i < n; i++)
            {
                if (guess == word[i])
                {
                    mask[i] = 1;
                    printf("Helyes valasz!\n");
                }
                else
                {
                    tal++;
                    printf("Helytelen valasz!\n");
                }
            }
            for (int j = 0; j < n; j++)
            {
                if (mask[j] == 0)
                    break;
                else
                    printf("Gyozelem! A kitalalt szo : %s", word);
            }
        }
        printf("Vesztettel! A szo %s volt", word);
        break;
    }
}