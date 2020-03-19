
#include<stdio.h>
#define Tam_max 5
	
	typedef struct{
		int emp;
		int subordinados[Tam_max];
		int n_sub;
	} empregado;
	
	empregado novo(int num){
		empregado e;
		e.emp = num;
		e.n_sub = 0;
		return e;
	}
	
	void adicionar_empregado(empregado *atual, empregado *subalterno){
		if(atual->n_sub < 5){
			(atual->subordinados[(atual->n_sub)]) = (subalterno->emp);
			(atual->n_sub)++;
		}
	}
	
	void contar_empregados(empregado e){
		printf("O funcionário %d tem %d subalternos\n", e.emp, e.n_sub);	
	}
	/*void printar(empregado e){
		printf("empregado: %d \n", e.emp);
	}*/



	int main(){
		empregado e1, e2, e3, e4, e5, e6, e7, e8, e9;
		
		e1 = novo(1);
		e2 = novo(2);
		e3 = novo(3);
		e4 = novo(4);
		e5 = novo(5);
		e6 = novo(6);	
		e7 = novo(7);
		e8 = novo(8);
		e9 = novo(9);
		
		//empregados primeiro nível
		adicionar_empregado(&e9, &e1);
		adicionar_empregado(&e9, &e6);
		adicionar_empregado(&e9, &e3);
		adicionar_empregado(&e9, &e8);	
		//empregados segundo nível
		adicionar_empregado(&e1, &e2);
		adicionar_empregado(&e1, &e4);
		adicionar_empregado(&e3, &e5);
		adicionar_empregado(&e8, &e7);
		
		contar_empregados(e1);
		contar_empregados(e2);
		contar_empregados(e3);
		contar_empregados(e4);
		contar_empregados(e5);
		contar_empregados(e6);
		contar_empregados(e7);
		contar_empregados(e8);
		contar_empregados(e9);
				
//		printar(e1);
//		printar(e2);
//		printar(e3);
		return 0;
	}


