#include <stdio.h>
#include <stdlib.h>

void main() {
	
	/** 
		
		Receives number of people, then, receives the height of
		every single person and outputs witch one is the taller and
		shorter person.
	
	*/
	
	int numP;
	float tallP, shortP;
	
	printf("Digite o número de pessoas: ");
	
	scanf("%d", &numP);
	
	float vetP[numP];
	
	int i;
	
	for(i = 0; i < numP; i++) {
		
		printf("Digite a altura da pessoa %d: ", i + 1);
		scanf("%f", &vetP[i]);
		
		if (i == 0) {
			shortP = vetP[i];
			tallP = vetP[i];	
		}
		
		if (vetP[i] > tallP) {
			tallP = vetP[i];
		} 	
		else if (vetP[i] < shortP) {
			shortP = vetP[i];
		};
	};
	
	printf("A pessoa mais alta tem %f metros.", tallP);
	printf("A pessoa mais baixa tem %f metros.", shortP);
	
	/**
	
		Receives a number and outputs its factorial
		
	*/
		
	int a, fatA;
	fatA = 1;
	
	printf("Digite um número inteiro A:");
	
	scanf("%d", &a);
	
	printf("%d! = ", a);
	
	while (a > 0) {
		
		fatA = fatA * a;
		
		printf("%d X ", a);
		a--;
	};
	printf("= %d", fatA);	
	
	
	/**
	
		Example that shows how pointers work.
		in this example, we update the value of 'i'
		by changing the value of its pointer 'pi'
	
	*/
	
	int i, e, *pi;
	
	pi = &i;
	
	i = 10;
	
	printf("O valor de i e: %d \n", i);
	
	printf("mude o valor de pi: ");
	
	scanf("%d", &e);
	
	*pi = e;
	
	printf("O valor de i e: %d", i);
	
	
	
	/**
	
		Very basic example, receives fifteen values and 
		store them to array, then output them.
	
	*/
	
	int i, NUM[15];
	
	//lendo os valores
	
	for (i=0; i<15; i++) {
	
	printf("Informe um numero: \n");
	
	scanf("%d", &NUM[i]);
	
	}
	
	//imprimindo os valores
	
	for (i=0; i<15; i++) {
	
		printf("Numero: %d \n", NUM[i]);
		
		}	

}
