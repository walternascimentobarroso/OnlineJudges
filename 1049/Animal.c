#include <stdio.h>
#include <string.h>

int main() {
	char classA[15], classB[15], classC[15];
	
    scanf("%s\n%s\n%s", classA, classB, classC);
 
	if(strcmp (classA, "vertebrado") == 0) {
		if(strcmp (classB, "ave") == 0) {
			if(strcmp (classC, "carnivoro") == 0) {
				printf("aguia\n");
			} else if(strcmp (classC, "onivoro") == 0) {
				printf("pomba\n");
			}
		} else if(strcmp (classB, "mamifero") == 0) {
			if(strcmp (classC, "onivoro") == 0) {
				printf("homem\n");
			} else if(strcmp (classC, "herbivoro") == 0) {
				printf("vaca\n");
			}
		}
	} else if(strcmp (classA, "invertebrado") == 0) {
		if(strcmp (classB, "inseto") == 0) {
			if(strcmp (classC, "hematofago") == 0) {
				printf("pulga\n");
			} else if(strcmp (classC, "herbivoro") == 0) {
				printf("lagarta\n");
			}
		} else if(strcmp (classB, "anelideo") == 0) {
			if(strcmp (classC, "hematofago") == 0) {
				printf("sanguessuga\n");
			} else if(strcmp (classC, "onivoro") == 0) {
				printf("minhoca\n");
			}
		}
	}
    
	return 0;
}

