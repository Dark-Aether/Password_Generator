/**
 * \file main.c
 * \brief Random password generator
 * \author Florian Bouchalois
 * \version 0.2
 * \date 23/11/2016
 * 
 * Allow to create random password according to the parameters passed at launch 
 * 
 * */

#include <getopt.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


/**
 * \fn void print_usage()
 * 
 * \brief Print how to use the program
 */
void print_usage(){
	printf("Usage: GenPasswd [-s size] [-n number of password] \n");
} 

/**
 * \fn int main(int argc, char* argv[])
 * 
 * \brief Generate a random password
 * 
 * \param argc Number of parameters at launch
 * \param argv Array containing the parameters
 * */
int main(int argc, char* argv[]){
		
	int passwdSize = 24;
	int randomNumber;
	int i,j;
	int option = 0;
	int numberOfPassword = 1;
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
/*
	option = getopt(argc, argv, "s:n:");
	printf("%d\n", option);
*/	
	/* Get the arguments from the command line */
	while( (option = getopt(argc, argv, "s:n:")) != -1){
		switch (option) {
			case 's':
				passwdSize = atoi(optarg);
				break;
			case 'n':
				numberOfPassword = atoi(optarg);
				break;
			default:
				print_usage();
				exit(EXIT_FAILURE);
		}
	}

	for (j = 0; j < numberOfPassword; ++j)
	{
		if (passwdSize <= 0)
		{
			passwdSize = 24;/*
			printf("Password size set to 24 by default !\n");*/
		} else {
			if (passwdSize > 1024)
			{
				passwdSize = 1024;
			}
		}

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
	}

	return 0;
}
