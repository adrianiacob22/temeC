#include <stdio.h>
//#include <libc.h>
#include <string.h>
int main()
{
	printf ("Sa trecem la traba!\n");
	char textDeScris[1000];
	strcpy(textDeScris, "Incredibil, nu am gasit nimic!");
	char str[100];
	int numarDeLitere,primul,primulCuvantGasit;
	FILE *file;
	primul=1;
	primulCuvantGasit=1;
	file=fopen("cuvinte.txt","r");
	if (file){
		while (fscanf(file, "%s", str)!=EOF){
			if (primul==1){
				printf ("Citesc numarul de litere:");
				numarDeLitere=atoi(str); printf (" %d\n",numarDeLitere);
				if (numarDeLitere==0){
					strcpy(textDeScris,"Nu e posibil sa numar cuvinte cu 0 litere");
				}
				primul=0;
			}
			else{
				if (strlen(str)==numarDeLitere){
					if (primulCuvantGasit==1){
						strcpy(textDeScris," Am gasit: ");
						strcat(textDeScris,str);
						primulCuvantGasit=0;

					}
					else{
						strcat(textDeScris,", ");
						strcat(textDeScris, str);
					}
				}
			}

		}
	}
	fclose(file);
	printf (" %s\n",textDeScris);
return 0;
}
