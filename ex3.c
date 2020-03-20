
#include<stdio.h>
#define Tam_max 5
	
	typedef struct empregado{
		int emp;
		struct empregado*  subordinados[Tam_max];
		int n_sub;
	} empregado;

	empregado novo(int num){
		empregado e;
		e.emp = num;
		e.n_sub = 0;
		int i = 0;
		for (i; i<Tam_max; i++) e.subordinados[i]=NULL;
		return e;
	}
	
	void adicionar_empregado(empregado *atual, empregado *subalterno){
		if(atual->n_sub < 5){
			atual->subordinados[(atual->n_sub)] = subalterno;
			(atual->n_sub)++;
		}
	}
	//Função que conta os empregados direto de cada nó
	void contar_empregados(empregado e){
		printf("O funcionário %d tem %d subalternos diretos\n", e.emp, e.n_sub);	
	}
	
	//vamos implementar a função recursiva que acessa todos os nós
	int todos_empregados(empregado *pai){
		int i = 0, valor = 0;
		while( (i<Tam_max) && ((pai->subordinados[i]) != NULL) ){
			valor += todos_empregados((pai->subordinados[i]));
			i++;
		}
		return valor += pai->n_sub;
	}
	
	/*tentativa de implentar o contador de níveis, fora isso tudo funciona.
	
	 *int contar_niveis(){
		int i = 0, niveis = 0;
		while( (i<Tam_max) && ((pai->subordinados[i]) != NULL) ){
			contar_niveis((pai->subordinados[i]));
			i++;
		}
		
		return niveis;
	}*/
	
	int main(){
		empregado e[9];
		int i;
		for(i = 0; i<9; i++) e[i] = novo(i);
	
		//empregados primeiro nível
		adicionar_empregado(&e[8], &e[0]);
		adicionar_empregado(&e[8], &e[5]);
		adicionar_empregado(&e[8], &e[2]);
		adicionar_empregado(&e[8], &e[7]);	
		//empregados segundo nível
		adicionar_empregado(&e[0], &e[1]);
		adicionar_empregado(&e[0], &e[3]);
		adicionar_empregado(&e[2], &e[4]);
		adicionar_empregado(&e[7], &e[6]);
		for(i=0; i<9; i++)contar_empregados(e[i]);
		int j = 0;
		for(j; j<9; j++){
		int total = 0 ;
		total = todos_empregados(&e[j]);
		printf("o empregado %d tem %d subordinados totais\n", e[j].emp, total);
		}

		return 0;
	}

