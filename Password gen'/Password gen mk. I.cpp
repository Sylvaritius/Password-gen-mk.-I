#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int genchar(int passType, char *passArray, int passLength) {
	srand(time(0));
	if (passType == 1) {
		//this password type is purely numbers.
		int charGen1Res;
		char charGenConverted;
		for (int i = 0; i < passLength; i++)
		{
			charGen1Res = rand() % (9 - 0 + 1) + 0; //generates random number.
			charGenConverted = charGen1Res + '0';
			passArray[i] = charGenConverted;
		}
		

		return 1;
	}
	else if (passType == 2) {
		// this password type is purely letters.
		int charGen2Res;
		for (int i = 0; i < passLength; i++)
		{
			charGen2Res = rand() % (122 - 97 + 1) + 97; //generates random number.
			passArray[i] = charGen2Res; // sets the number as a char against ascii.
		}
		return 1;
	}
	else if (passType == 3) {
		//this type of password uses letters, numbers and special chars.
		int charGen2Res;
		for (int i = 0; i < passLength; i++)
		{
			charGen2Res = rand() % (126 - 33 + 1) + 33; //generates random number.
			passArray[i] = charGen2Res; // sets the number as a char against ascii.
		}
		return 1;
	}
	









	
}