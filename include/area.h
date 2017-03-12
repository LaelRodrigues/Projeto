/** 
 * @file	area.h
   @brief	Arquivo cabecalho com os prototipos das funcoes que realizam
 *   				o calculo da area de viguras geometricas planas e espaciais
 * @author	Lael Rodrigues(laelrodrigues7@gmail.com)
 * @since	12/03/2017
 * @date 	12/03/2017
 */

#ifndef AREA_H
#define AREA_H

#define PI 3.1415

#include <iostream>

using std::cin;
using std::cout;
using std::endl;


/**
 * @brief Funcao que calcula a area de um triangulo
 * @param base Medida da base do triangulo
 * @param altura Medida da altura do triangulo 
 * @return Area do triangulo
 */
float areaTriangulo(float base, float altura);


/**
 * @brief Funcao que calcula a area de um retagulo
 * @param base Medida da base do retangulo
 * @param altura Medida da altura do retangulo 
 * @return Area do retangulo
 */
float areaRetangulo(float base, float altura);


/**
 * @brief Funcao que calcula a area de um quadrado
 * @param lado Medida do lado do quadrado
 * @return Area do quadrado
 */
float areaQuadrado(float lado);


/**
 * @brief Funcao que calcula a area de um circulo
 * @param raio Medida do raio do circulo
 * @return Area do circulo
 */
float areaCirculo(float raio);


/**
 * @brief Funcao que calcula a area de uma piramide
 * @param area_b Medida da area da base da piramide
 * @param area_l Medida da area lateral da piramide
 * @return Area da piramide
 */
float areaPiramide(float area_b, float area_l);


/**
 * @brief Funcao que calcula a area de um cubo
 * @param aresta Medida da aresta do cubo
 * @return Area do cubo
 */
float areaCubo(float aresta);


/**
 * @brief Funcao que calcula a area de um paralepipedo
 * @param aresta1 Medida da primeira aresta do paralepipedo
 * @param aresta2 Medida da segunda aresta do paralepipedo
 * @param aresta3 Medida da terceira aresta do paralepipedo
 * @return Area do paralepipedo
 */
float areaParalelepipedo(float aresta1, float aresta2, float aresta3);


/**
 * @brief Funcao que calcula a area de uma Esfera
 * @param raio Medida do raio da esfera
 * @return Area da esfera
 */
float areaEsfera(float raio);

#endif
