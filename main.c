/**
 * \file main.c
 * \brief Random password generator
 * \author Florian Bouchalois
 * \version 1.0
 * \date 19/01/2016
 * 
 * Allow to create random password according to the parameters passed at launch 
 * 
 * */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


/**
 * \fn int main(int argc, char* argv[])
 * 
 * \param argc Number of parameters at launch
 * \param argv Array containing the parameters
 * */
int main(int argc, char* argv[]){
		
	int passwdSize = -1;
	int randomNumber;
	int i;
	char* password;
	int arrayLength = 0;
	char array[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 
		'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B',
		'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q',
		'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '1', '2', '3', '4', '5', '6', 
		'7', '8', '9', '0', ',', '?', ';', '.', ':', '/', '!', '&', '(', '-', '_', 
		'@', ')', '*', '#'};
	
	srand(time(0));
	arrayLength = strlen(array);

	/* Test which allow to choose the size of the password */
	if(argc < 2){
		passwdSize = 12;
	} else {
		passwdSize = atoi(argv[1]);
		if(passwdSize <= 0){
			printf("The parameter must be a number or greater than 0! \n");
			exit(0);
		} else {
			if(passwdSize > 128) 
			{
				passwdSize = 12;
			}
		}
	}
	
	/* Memory allocation of the password array */
	password = (char*)malloc(passwdSize * sizeof(char));
		
	/* Fill the password array with the random caracter */
	for(i = 0; i < passwdSize; ++i){
		randomNumber = rand()%arrayLength;
		password[i] = array[randomNumber];
	}
	
	/* Print the password */
	for (i = 0; i < passwdSize; i++)
	{
		printf("%c",password[i]);
	}
	printf("\n");
	
	
	free(password);
	return 0;
}
