
#include <stdio.h>

	typedef struct {
		float altura;
		float largura;
	}retangulo;

	retangulo novo_retangulo(float Naltura, float Nlargura){
		retangulo r;
		r.altura = Naltura;
		r.largura= Nlargura;
		return r;
	}

	void modificar_retangulo(retangulo *R, float Naltura, float Nlargura){
		(R->altura) = Naltura;
		(R->largura)= Nlargura;		
	}
	


	int main(){
		
		retangulo r = novo_retangulo(5,6);
		printf("Novo retângulo tem altura: %f e largura: %f \n", r.altura, r.largura );
		modificar_retangulo(&r, 9, 10);
		printf("O retângulo modificado tem altura: %f e largura: %f \n", r.altura, r.largura );
	return 0;
	}
