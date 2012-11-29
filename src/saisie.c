#include <saisie.h>


int 
nbreArgs(char *saisie) 
{
	int i=0;
	int j=1;

	while((i<TAILLE_BUFF_SAISIE)||(saisie[i]!=0))
	{
		if((saisie[i]==' ')||(saisie[i]=='\t')) j++;
		i++;
	}

	return j;
}

char **
lecture(int *args) 
{
	int i=0;
	char **cmd;

	char *saisie=(char*) malloc(TAILLE_BUFF_SAISIE*sizeof(char));

	fgets(saisie,TAILLE_BUFF_SAISIE,stdin); 

	*args=nbreArgs(saisie);
	cmd=(char**) malloc((*args)*sizeof(char*));

	char *argv=strtok(saisie," \t\n");
	do
	{
		cmd[i]=(char*) malloc((strlen(argv)+1)*sizeof(char));
		strcpy(cmd[i],argv);
		argv=strtok(NULL," \t\n");
		i++;
	}
	while(argv!=NULL) ; 

	cmd[(*args)]=NULL;

	return cmd;
}


void
freeCmd(char **cmd,int args)
{
	int i;
	for(i=0;i<args;i++)
	{
		free(cmd[i]);
	}
}

