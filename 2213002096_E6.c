#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char cadA[100];
	char cadB[100];
	char cadVoc[100];
	char cadCons[100];
	int i;
	int contVocal;
	int contCons;
	int tam;
	int tam2;
	int comp;
	printf("Cadena A:\n");
	scanf("%[^\n]", &cadA);
	
	while(getchar()!='\n');
	tam=strlen(cadA);
	printf("\nCadena B:\n");
	scanf("%[^\n]", &cadB);
	tam2=strlen(cadB);
	if(tam<tam2){
		printf("\nLa cadena B tiene mas caracteres");
	}
	if(tam>tam2){
		printf("\nLa cadena A tiene mas caracteres");
	}
	if(tam==tam2){
		printf("\nAmbas cadenas tienen la misma cantidad de caracteres");
	}
	comp=strcmp(cadB, cadA);
	
	if(comp>0){
		printf("\nLa cadena A es menor alfabeticamente");
	}
	if(comp<0){
		printf("\nLa cadena B es menor alfabeticamente");
	}
	if(comp==0){
		printf("\nAmbas cadenas son iguales alfabeticamente");
	}
	for(i=0;i<tam;i++){
		if(cadA[i]=='a'||cadA[i]=='e'||cadA[i]=='i'||cadA[i]=='o'||cadA[i]=='u'){
			cadA[i] = toupper(cadA[i]);
		}
	}
	printf("\n%s", cadA);
	for(i=0;i<tam2;i++){
		if(cadB[i]=='a'||cadB[i]=='e'||cadB[i]=='i'||cadB[i]=='o'||cadB[i]=='u'){
			
		}
		else{
			cadB[i] = toupper(cadB[i]);
		}
	}
	printf("\n%s", cadB);
	return 0;
	}
