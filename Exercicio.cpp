#include<iostream>

using namespace std;

main(){
	
	int escolha;
	float base,altura,area,raio,maior,menor;
	
	cout << "Escolha uma forma geometrica: " << endl;
	cout << "1-Retangulo: " << endl;
	cout << "2-triangulo: " << endl;
	cout << "3-circulo  : " << endl;
	cout << "4-trapezio : " << endl;
	cout << "Opção desejada : ";
	cin >> escolha;
	
 if(escolha == 1){
		
		cout << "Digite a base: " ;
		cin >> base;
		cout << "Digite a altura: ";
		cin >> altura;
		
		area = base * altura;
		cout << "a area e: " << area << endl;
	}
	else if (escolha == 2){
		
		cout << "Digite a base: ";
		cin >> base;
		cout << "Digite a altura: ";
		cin >> altura;
		
		area = (base * altura) / 2;
		cout << "a area e: " << area << endl;
		
	}
	else if (escolha == 3){
		
		cout << "Digite o raio: ";
		cin >> raio;
		
		area = 3.14 * raio * raio;
		cout << "a area e: " << area << endl;
	}
	else if (escolha == 4){
		
		cout << "digite a base maior: ";
		cin >> maior;
		cout << "digite a base menor: ";
		cin >> menor;
		cout << "digite a altura: ";
		cin >> altura;
		
		area = (maior + menor) * altura /2;
		cout << "a area e: " << area << endl; 
	}
	else
	{
		cout << "opção inválida" << endl;
	}
	
	return 0;
}
