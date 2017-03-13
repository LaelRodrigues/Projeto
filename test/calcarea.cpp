/** 
 * @file	calcarea.cpp
 * @brief	Arquivo corpo com a implementacao das funcoes que solicita ao
 *   				usuario os dados para o calculo da area de figuras geometricas 
 * @author	Lael Rodrigues(laelrodrigues7@gmail.com)
 * @since	12/03/2017
 * @date 	12/03/2017
 * @sa 		calcarea.h
 */

#include "calcarea.h"


/**
 * @brief Funcao que solicita ao usuario os dados necessarios
 *  			para o calculo da area do triangulo
 * @param base Medida da base do triangulo
 * @param altura Medida da altura do triangulo 
 */
void dadosAreaTriangulo(float base, float altura){

	cout << "Calculo da area" << endl;
	cout << "Digite o valor da base: ";
	cin >> base;
	cout << "Digite o valor da altura: ";
	cin >> altura;
	cout << "O valor da area do triangulo eh: " << areaTriangulo(base, altura) << endl;
}


/**
 * @brief Funcao que solicita ao usuario os dados necessarios
 * 				para o calculo da area do retangulo
 * @param base Medida da base do retangulo
 * @param altura Medida da altura do retangulo 
 */
void dadosAreaRetangulo(float base, float altura){

	cout << "Calculo da area" << endl;
	cout << "Digite o valor da base: ";
	cin >> base;
	cout << "Digite o valor da altura: ";
	cin >> altura;
	cout << "O valor da area do retangulo eh: " << areaRetangulo(base, altura) << endl;

}


/**
 * @brief Funcao que solicita ao usuario os dados necessarios
 *  			para o calculo da area do quadrado
 * @param lado Medida do lado do quadrado
 */
void dadosAreaQuadrado(float lado){

	cout << "Calculo da area" << endl;
	cout << "Digite o valor do lado: ";
	cin >> lado;
	cout << "O valor da area do quadrado eh: " << areaQuadrado(lado) << endl;
}


/**
 * @brief Funcao que solicita ao usuario os dados necessarios
 *  			para o calculo da area do circulo
 * @param raio Medida do raio do circulo
 */
void dadosAreaCirculo(float raio){

	cout << "Calculo da area" << endl;
	cout << "Digite o valor do raio: ";
	cin >> raio;
	cout << "O valor da area do circulo eh: " << areaCirculo(raio) << endl;

}


/**
 * @brief Funcao que solicita ao usuario os dados necessarios
 *  			para o calculo da area do piramide
 * @param area_b Medida da area da base da piramide
 * @param area_l Medida da area lateral da piramide
 */
void dadosAreaPiramide(float area_b, float area_l){

	cout << "Calculo da area" << endl;
	cout << "Digite o valor da area da base: ";
	cin >> area_b;
	cout << "Digite o valor da area lateral: ";
	cin >> area_l;
}


/**
 * @brief Funcao que solicita ao usuario os dados necessarios
 *  			para o calculo da area do cubo
 * @param aresta Medida da aresta do cubo
 */
void dadosAreaCubo(float aresta){

	cout << "Calculo da area" << endl;
	cout << "Digite o valor do aresta: ";
	cin >> aresta;
	cout << "O valor da area do cubo eh: " << areaCubo(aresta) << endl;
}


/**
 * @brief Funcao que solicita ao usuario os dados necessarios
 *  			para o calculo da area do paralelepipedo
 * @param aresta1 Medida da primeira aresta do paralelepipedo
 * @param aresta2 Medida da segunda aresta do paralelepipedo
 * @param aresta3 Medida da terceira aresta do paralelepipedo
 */
void dadosAreaParalelepipedo(float aresta1, float aresta2, float aresta3){

	cout << "Calculo da area" << endl;
	cout << "Digite o valor da primeira aresta: ";
	cin >> aresta1;
	cout << "Digite o valor da segunda aresta: ";
	cin >> aresta2;
	cout << "Digite o valor da terceira aresta: ";
	cin >> aresta3;
	cout << "O valor da area do paralepipedo eh: " << areaParalelepipedo(aresta1, aresta2, aresta3) << endl;

}


/**
 * @brief Funcao que solicita ao usuario os dados necessarios
 *  			para o calculo da area do circulo
 * @param raio Medida do raio da esfera
 */
void dadosAreaEsfera(float raio) {

	cout << "Calculo da area" << endl;
	cout << "Digite o valor do raio: ";
	cin >> raio;
	cout << "O valor da area da esfera eh: " << areaEsfera(raio) << endl;
}