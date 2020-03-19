
#include <stdio.h>

	typedef struct {
		float altura;
		float largura;
	}retangulo, *R;

	int eh_quadrado(retangulo r){
		if(r.altura==r.largura)return 1;
		else return 0;
	}
	
	float Area(R r){
		float a ,b, c;
		b = (r->altura);
		//printf("%d", b);
		c = (r->largura);
		//printf("%d", c);
		return a = b*c;
	}

	int retrato_ou_paisagem(R r){
		if((r->altura)>=(r->largura))return 1;
		else return 0;	
	}

	int main(){
		
		retangulo r1;// r2, r3;
		int quadrado;
		float area, posicao;
		printf("Digite altura do seu retangulo:\n");
		scanf("%f", &r1.altura);
		printf("Digite largura do seu retangulo:\n");
		scanf("%f", &r1.largura);
//		r2.altura = 1;
//	r2.largura= 2;
//		r3.altura = 2;
//		r3.largura= 1;
	
		quadrado = eh_quadrado(r1);
		area		 = Area(&r1);
		posicao  = retrato_ou_paisagem(&r1);
		if(quadrado == 1)printf("Retangulo é um quadrado \n");
		else printf("Retangulo  ñ é um quadrado \n");	
		printf("Area do Retangulo : %f \n", area);
		if(posicao == 1)printf("Retangulo esta em retrato \n");
		else printf("Retangulo esta em paisagem \n");
		printf("\n");

//		quadrado = eh_quadrado(r2);
//		area		 = Area(&r2);
//		posicao  = retrato_ou_paisagem(&r2);
//		if(quadrado == 1)printf("Retangulo 2 é quadrado \n");
//		else printf("Retangulo 2 ñ é quadrado \n");
//		printf("Area do Retangulo 2: %f \n", area);
//		if(posicao == 1)printf("Retangulo 2 esta em retrato \n");
//		else printf("Retangulo 2 esta em paisagem \n");
//		printf("\n");
//
//		quadrado = eh_quadrado(r3);
//		area		 = Area(&r3);
//		posicao  = retrato_ou_paisagem(&r3);
//		if(quadrado == 1)printf("Retangulo 3 é quadrado \n");
//		else printf("Retangulo 3 ñ é quadrado \n");
//		printf("Area do Retangulo 3: %f \n", area);
//		if(posicao == 1)printf("Retangulo 3 esta em retrato \n");
//		else printf("Retangulo 3 esta em paisagem \n");		
//		printf("\n");		
	return 0;
	}
