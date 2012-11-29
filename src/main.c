#include "parc.h"
#include "bmpfile.h"
#include "iobmp.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void aide()
{
	printf("Tapez 0 pour quitter le programme.\n");
	printf("Tapez 1 pour générer automatiquement un jeu d'image.\n");
	printf("Tapez 2 pour travailler une image en particulier.\n");
}

Arbq modif(Arbq (**func)(Arbq),Couleur (**fonc)(Couleur))
{
	int index=1;
	Arbq a,atmp;
	a=import("strasbourg_matrix.mat");
	atmp=NULL;
	while(index!=0)
	{
		printf("Tapez 1 pour opérer des modifications sur les pixels\n");
		printf("Tapez 2 pour opérer des modifications sur la forme de	l'image\n");
		printf("Tapez 0 pour sortir\n\n");
		scanf("%d",&index);
		if(index==1)
		{
			int i;
			printf("Tapez 0 pour inverser les couleurs\n");
			printf("Tapez 1 pour changer l'image en niveau de gris\n");
			printf("Tapez 2 pour niveler les couleurs\n\n");
			scanf("%d",&i);
			atmp=a;
			if((i<3)&&(i>=0)) a=parc(a,fonc[i]);
			if(atmp!=NULL) atmp=dela(atmp);
		}
		if(index==2)
		{
			int i;
			printf("Tapez 0 pour avoir un miroir horizontale de l'image\n");
			printf("Tapez 1 pour avoir une symétrie horizontale\n");
			printf("Tapez 2 pour avoir un miroir vertical\n");
			printf("Tapez 3 pour avoir une symétrie verticale\n");
			printf("Tapez 4 pour avoir une rotation à gauche\n");
			printf("Tapez 5 pour avoir une rotation à droite\n");
			printf("Tapez 6 pour dézoomer\n");
			printf("Tapez 7 pour copier\n\n");
			scanf("%d",&i);
			atmp=a;
			if((i>=0)&&(i<8)) a=opa(a,func[i]);
			if(atmp!=NULL) atmp=dela(atmp);
		}
	}
	return a;
}

int 
main() 
{
	Arbq arb,a;
	int i,n;
	int index=-1;
	Arbq (*func[8])(Arbq)={symh_aux,symh,symv_aux,symv,rotg,rotd,dzoo,cpa};
	Couleur (*fonc[3])(Couleur)={invc,nivg,tresh};
	char *filename[12]={"miroirH","symh","miroirV","symv","rotg","rotd","dzoo","cpa","invc","nivg","tresh","jeux/"};
	char *name;

	aide();
	while(index!=0)
	{
		arb=import("strasbourg_matrix.mat");
		scanf("%d",&index);
		switch(index)
		{
			case 0: break;
			case 1:
			{
				printf("Génération d'un jeu d'image\n");
				for(i=0;i<8;i++)
				{
					n=strlen(filename[i])+strlen(filename[11])+1;
					name=(char*)malloc(sizeof(char)*n);
					name=strcat(strcpy(name,filename[11]),filename[i]);
					printf("Génération du fichier %s\n",name);
					a=opa(arb,func[i]);
					exportBmp(a,name);
					free(name);
					a=dela(a);
				}
				int j;
				for(j=0;j<3;i++,j++)
				{
					n=strlen(filename[i])+strlen(filename[11])+1;
					name=(char*)malloc(sizeof(char)*n);
					name=strcat(strcpy(name,filename[11]),filename[i]);
					printf("Génération du fichier %s\n",name);
					a=parc(arb,fonc[j]);
					exportBmp(a,name);
					free(name);
					a=dela(a);
				}
				break;
			}
			case 2: 
			{
				a=modif(func,fonc);
				exportBmp(a,"jeux/perso");
				a=dela(a);
				index=2;
				break;
			}
			case 10: { aide(); break; }
			default:
			{
				printf("Tapez 10 pour obtenir de l'aide.\n");
			}
		}
		if(arb!=NULL) arb=dela(arb);
	}


	return 0;
}


