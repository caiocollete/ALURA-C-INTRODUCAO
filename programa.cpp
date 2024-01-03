#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio2.h>

int main(){
	int seg=time(0);
	srand(seg);
	int tentativas,chute,numerosecreto = rand()%50+1,maxTentativas;
	int pontos=100;
	
	// imprime o cabecalho do nosso jogo
	printf("******************************************\n");
	printf("* Bem vindo ao nosso jogo de adivinhacao *\n");	
	printf("******************************************\n");
	
	
	printf("Escolha o nivel:\n[1]Facil\n[2]Medio\n[3]Dificil\n");
	printf("->");
	swith(getche()){
		case 1: maxTentativas=20;break;
		case 2: maxTentativas=10;break;
		case 3: maxTentativas=5;break;
	}
	clrscr();
	printf("MAXIMO DE TENTATIVAS: %d\n\n",maxTentativas);
	printf("Chute: ");
	scanf("%d",&chute);

	for(tentativas=1;tentativas<maxTentativas && chute!=numerosecreto;tentativas++) {
		
		if(chute>numerosecreto) {
				printf("Seu chute foi maior que o numero secreto\n");
		}
		else {
			printf("Seu chute foi menor que o numero secreto\n");
		}
		pontos-=(chute-numerosecreto)/2;
		printf("Chute: ");
		scanf("%d",&chute);
	}
	

	if(chute==numerosecreto){
		printf("Voce acertou em %d tentativas\n", tentativas);
		printf("Pontos: %d\n",pontos);
	}
	else{
		printf("Tentativas esgotadas: %d\n", tentativas);
	}
	
	printf("Fim de jogo.\n");	
}
