//ESTRUTURA DE REPETI��O FOR: EXE 01
#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
		
	int contador;
	
	//ESTRUTURA DE REPETI��O FOR
	
	for(contador=0;contador<5; contador++){
		
		printf("\nO valor do contador � %i ", contador);
	}
	getch();
	return 0;

}
