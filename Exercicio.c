#include <stdio.h>

int main(){
	
	int escolha ;
	float base,altura,area,raio,maior,menor;
	
	printf("Escolha uma forma geometrica: \n");
	printf("1-Retangulo \n");
	printf("2-triangulo \n");
	printf("3-circulo   \n");
	printf("4-trapezio  \n\n");
	
	printf("Opção desejada: ");
	scanf("%d",&escolha);
	
	if(escolha == 1){
		
		printf("Digite a base: ");
		scanf("%f",&base);
		printf("Digite a altura: ");
		scanf("%f",&altura);
		
		area = base * altura;
		printf("a area e: %f\n");
	}
	else if (escolha == 2){
		
		printf("Digite a base: ");
		scanf("%f",&base);
		printf("Digite a altura: ");
		scanf("%f",&altura);
		
		area = (base * altura) / 2;
		printf("a area e: %f\n");
		
	}
	else if (escolha == 3){
		
		printf("Digite o raio: ");
		scanf("%f",&raio);
		
		area = 3.14 * raio * raio;
		printf("a area e: %f\n",area);
		
	}
	else if (escolha == 4){
		
		printf("digite a base maior: ");
		scanf("%f",&maior);
		printf("digite a base menor: ");
		scanf("%f",&menor);
		printf("digite a altura: ");
		scanf("%f",&altura);
		
		area = (maior + menor) * altura /2;
		printf("a area e: %f\n",area);
	}
	else
	{
		printf("Opção inválida");	
	}
	
	return 0;
}
