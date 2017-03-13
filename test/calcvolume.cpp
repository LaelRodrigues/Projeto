/** 
 * @file	calcvolume.cpp
 * @brief	Arquivo corpo com a implementacao das funcoes que solicita 
 *   				ao usuario os dados para o calculo do volume de figuras espaciais
 * @author	Lael Rodrigues(laelrodrigues7@gmail.com)
 * @since	12/03/2017
 * @date 	12/03/2017
 * @sa 		calcvolume.h
 */

#include "calcvolume.h"

/**
 * @brief Funcao que solicita ao usuario os dados necessarios
 *  			para o calculo do volume da piramide
 * @param area_b Medida da area da base da piramide
 * @param altura Medida da altura da piramide
 */
void dadosVolPiramide(float area_b, float altura){
	
	cout << "Calculo do volume" << endl;
	cout << "Digite o Valor da area da base: ";
	cin >> area_b;
	cout << "Digite o valor da altura: ";
	cin >> altura;
	cout << "O valor do volume da piramide eh: " <<  volPiramide(area_b, altura) << endl;
}


/**
 * @brief Funcao que solicita ao usuario os dados necessarios
 *  			para o calculo do volume do cubo
 * @param aresta Medida da aresta do cubo 
 */
void dadosVolCubo(float aresta){
	
	cout << "Calculo do volume" << endl;
	cout << "Digite o valor da aresta: ";
	cin >> aresta;
	cout << "O valor do volume do cubo eh: " << volCubo(aresta) << endl;
}


/**
 * @brief Funcao que solicita ao usuario os dados necessarios
 *  			para o calculo do volume do paralelepipedo
 * @param aresta1 Medida da primeira aresta do paralelepipedo
 * @param aresta2 Medida da segunda aresta do paralelepipedo
 * @param aresta3 Medida da terceira aresta do paralelepipedo
 */

void dadosVolParalelepipedo(float aresta1, float aresta2, float aresta3){

	cout << "Calculo do volume" << endl;
	cout << "Digite o valor da primeira aresta: ";
	cin >> aresta1;
	cout << "Digite o valor da segunda aresta: ";
	cin >> aresta2;
	cout << "Digite o valor da terceira aresta: ";
	cin >> aresta3;
	cout << "O valor do volume do paralelepipedo eh: " << volParalelepipedo(aresta1, aresta2, aresta3) << endl;

}

/**
 * @brief Funcao que solicita ao usuario os dados necessarios
 *  			para o calculo do volume do esfera
 * @param raio Medida do raio da esfera 
 */
void dadosVolEsfera(float raio){

	cout << "Calculo do volume" << endl;
	cout << "Digite o valor do raio: ";
	cin >> raio;
	cout << "O valor do volume da esfera eh: " << volEsfera(raio) << endl;
}