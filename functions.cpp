/****************************************
* Name: Bryson Shane
* Assignment: 2
* Purpose of the file: The file contains one function counts the amount of characters within a parameter.
* It checks to see if it reaches the end of the parameter with escape character '\0', adding to the counter variable
* for each character it loops through.
* It returns strcounter, the total value amount of characters of the parameter.
*****************************************/
#include "functions.h"


int strlength(const char* str) {
	int strcounter = 0;
	while (str[strcounter] != '\0')
	{
		strcounter++;
	}
	return strcounter;
}