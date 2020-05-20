#ifndef Hangman_H
#define Hangman_H

#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE
#define WIN_32_LEAN_AND_MEAN

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>


char GetRandomWord(const char* fileName);

char GetRandomWord2(const char* fileName);


#endif