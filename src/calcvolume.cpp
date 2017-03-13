/** 
 * @file	calcvolume.cpp
 * @brief	Arquivo corpo com a implementacao das funcoes que imprimi o resultado
 *   				do calculo de figuras espaciais ou solicita dados ao usuario para realizar o calculo
 * @author	Lael Rodrigues(laelrodrigues7@gmail.com)
 * @since	12/03/2017
 * @date 	12/03/2017
 * @sa 		calcvolume.c
 */

#include "calcvolume.h"

/**
 * @brief Funcao que solicita ao usuario os dados necessarios
 *  			para o calculo do volume da piramide
 * @param area_b Medida da area da base da piramide
 * @param altura Medida da altura da piramide
 */
void dadosvolPiramide(float area_b, float altura){

	cout << "Digite o valor da altura: ";
	cin >> altura;
	cout << "O valor do volume da piramide eh: " <<  volPiramide(area_b, altura) << endl;
}


/**
 * @brief Funcao que imprimi o resultado do calculo
 *        			do volume do cubo
 * @param aresta Medida da aresta do cubo 
 */
void imprimirVolCubo(float aresta){

	 cout << "O valor do volume do cubo eh: " << volCubo(aresta) << endl;
}


/**
 * @brief Funcao que imprimi o resultado do calculo
 *        			do volume do paralelepipedo
 * @param aresta1 Medida da primeira aresta do paralelepipedo
 * @param aresta2 Medida da segunda aresta do paralelepipedo
 * @param aresta3 Medida da terceira aresta do paralelepipedo
 */

void imprimirVolParalelepipedo(float aresta1, float aresta2, float aresta3){
	
	cout << "O valor do volume do paralelepipedo eh: " << volParalelepipedo(aresta1, aresta2, aresta3) << endl;

}

/**
 * @brief Funcao que imprimi o resultado do calculo
 *        			do volume do esfera
 * @param raio Medida do raio da esfera 
 */
void impirmirVolEsfera(float raio){

	cout << "O valor do volume da esfera eh: " << volEsfera(raio);
}