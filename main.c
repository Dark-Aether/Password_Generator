/**
 * \file main.c
 * \brief Générateur de mots de passe aléatoires
 * \author Florian Bouchalois
 * \version 1.0
 * \date 19/01/2016
 * 
 * Programme permettant de générer aléatoirement des mots de passe en 
 * fonction des paramètres passé au lancement du programme. 
 * 
 * */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define N 5

/**
 * \fn int main(int argc, char* argv[])
 * 
 * \param argc Nombre d'argument lors l'execution du programme
 * \param argv Tableau contenant les parametres passé lors de l'éxécution (le parametre 0 est le nom du programme)
 * */
int main(int argc, char* argv[]){
		
	int nbCaractere = -1;
	int alea;
	int i;
	char* mdp;
	int tailleTab = 0;
	char TAB[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 
		'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B',
		'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q',
		'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '1', '2', '3', '4', '5', '6', 
		'7', '8', '9', '0', ',', '?', ';', '.', ':', '/', '!', '&', '(', '-', '_', 
		'@', ')', '*', '#'};
	
	srand(time(0));
	tailleTab = strlen(TAB);

	/* Test qui permet de définir le nombre de caractères du mot de passe */
	if(argc < 2){
		nbCaractere = 12;
	} else {
		nbCaractere = atoi(argv[1]);
		if(nbCaractere <= 0){
			printf("L'arguement doit être un nombre ou supérieur à 0! \n");
			exit(0);
		} else {
			if(nbCaractere < 0 || nbCaractere > 60) 
			{
				nbCaractere = 16;
			}
		}
	}
	
	/* Allocation de la mémoire de TAB */
	mdp = (char*)malloc(nbCaractere * sizeof(char));
		
	/* Remplissage du tableau mot de passe avec un caractere aléatoire de TAB */
	for(i = 0; i < nbCaractere; ++i){
		alea = rand()%tailleTab;
		mdp[i] = TAB[alea];
	}
	
	/* Affichage du mot de passe */
	for (i = 0; i < nbCaractere; i++)
	{
		printf("%c",mdp[i]);
	}
	printf("\n");
	
	
	free(mdp);
	return 0;
}
