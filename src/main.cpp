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


	do{	
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
				float base, altura;
				dadosTriangulo(base, altura);
				imprimirPeriTriangulo(base);
				break;

			case 2:
				float base, altura;
				dadosRetangulo(base, altura);
				imprimirPeriRetangulo(base, altura);
				break;

			case 3:
				float lado;
				dadosQuadrado(lado);
				imprimirPeriQuadrado(lado);
				break;

			case 4:
				float raio;
				dadosCirculo(raio);
				imprimirPeriCirculo(raio);
				break;

			case 5:
				float area_b, area_l, altura; 
				dadosPiramide(area_b, area_l);
				dadosVolPiramide(area_b, altura);
				break;

			case 6:
				float aresta;
				dadosCubo(aresta);
				imprimirVolCubo(aresta);
				break;

			case 7:
				float aresta1, aresta2, aresta3;
				dadosParalelepipedo(aresta1, aresta2, aresta3);
				imprimirVolParalelepipedo(aresta1, aresta2, aresta3);
				break;

			case 8:
				float raio;
				dadosEsfera(raio);
				imprimirVolEsfera(raio);
				break;

			case 0:
				return 0;

			default:
				cout << "Valor invalido!!" << endl;
			break;
		}
	} while(escolha != 0);

}