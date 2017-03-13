/** 
 * @file	main.cpp
 * @brief   arquivo corpo de teste das funcoes para calcular 
 * 					a area, o perimetro e o volume de figura geometricas
 * @author	Lael Rodrigues(laelrodrigues7@gmail.com)
 * @since	12/03/2017
 * @date	12/03/2017
 * @sa 		calcarea.h
 * @sa		calcperimetro.h
 * @sa		calcvolume.h
*/

#include "calcarea.h"
#include "calcperimetro.h"
#include "calcvolume.h"


/**
 * @brief	funcao principal
 */

int main(){

	int escolha;

	float a, b, c;
	a = 0;
	b = 0;
	c = 0;


	do{	
		cout << "------------------------------------------" << endl;
		cout << "Calculadora de geometria plana e espacial" << endl;
		cout << "Digite 1 para triangulo equilatero" << endl;
		cout << "Digite 2 para retangulo" << endl;
		cout << "Digite 3 para quadrado" << endl;
		cout << "Digite 4 para circulo" << endl;
		cout << "Digite 5 para piramide com base quadrangular" << endl;
		cout << "Digite 6 para cubo" << endl;
		cout << "Digite 7 para paralelepipedo" << endl;
		cout << "Digite 8 para esfera" << endl;
		cout << "digite 0 para sair" << endl;

		cin >> escolha;
		switch(escolha){

			case 1:
				dadosAreaTriangulo(a, b);
				dadosPeriTriangulo(a);
				break;

			case 2:
				dadosAreaRetangulo(a, b);
				dadosPeriRetangulo(a, b);
				break;

			case 3:
				dadosAreaQuadrado(a);
				dadosPeriQuadrado(a);
				break;

			case 4:
				dadosAreaCirculo(a);
				dadosPeriCirculo(a);
				break;

			case 5:
				dadosAreaPiramide(a, b);
				dadosVolPiramide(a, c);
				break;

			case 6:
				dadosAreaCubo(a);
				dadosVolCubo(a);
				break;

			case 7:
				dadosAreaParalelepipedo(a, b, c);
				dadosVolParalelepipedo(a, b, c);
				break;

			case 8:
				dadosAreaEsfera(a);
				dadosVolEsfera(a);
				break;

			case 0:
				return 0;

			default:
				cout << "Valor invalido!!" << endl;
			break;
		}
	} while(escolha != 0);

}