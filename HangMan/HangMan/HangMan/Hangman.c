#include "Hangman.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h> 

char GetRandomWord(const char* fileName)
{
	int sorsz;
	char word = "semmi";
	FILE* fbe;
	fbe = fopen(fileName, "rt");
	sorsz = (rand() % (6081)) + 1;
	for (int i = 1; i < sorsz; i++)
	{
		fscanf(fbe, "%s\n", word);
	}

	return word;
}

char GetRandomWord2(const char* fileName)
{
	char word = "Valami";
	return word;
}