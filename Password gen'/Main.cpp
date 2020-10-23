#include "Header.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void) {
int charGenSucess;
	int choiceType, arrayLeng;
	char *passArray;
	printf_s("%s \n", "Input passtype 1 for numbers. ");
	printf_s("%s \n", "Input passtype 2 for lowercase letters.");
	printf_s("%s \n", "Input passtype 3 for numbers, letters and special characters. ");
	while (1) {
		printf_s("\n%s \n", "Input passtype: ");
		scanf_s("%d", &choiceType);
		getchar();
		if (0 < choiceType && choiceType < 4){
			printf_s("%s \n", "Input pass length: ");
			scanf_s("%d", &arrayLeng);
			getchar();
			//const int arrayLengdudu = arrayLeng;
			//char passArray[arrayLengdudu];
			//char passArray[arrayLengdudu];
			passArray = (char *)malloc(arrayLeng * sizeof(char));
			charGenSucess = genchar(choiceType, passArray, arrayLeng);
			if (charGenSucess == 1)
			{
				printf_s("\n%s", "Your password is: ");
				for (int i = 0; i < arrayLeng; i++) {
					printf_s("%c", passArray[i]);
				}
				printf_s("\n\n\n");
			}
			else if (charGenSucess == 0) {
			printf_s("%s \n", "No passowrd for you.");
			}
		}
		else
		{
			printf_s("%s", "Invalid passtype");
		}









		
	}
	return 0;
}
