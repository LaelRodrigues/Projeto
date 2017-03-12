/** 
 * @file	calcarea.h
 * @brief	Arquivo cabecalho com os prototipos das funcoes que solicita ao
 *   				usuario os dados para o calculo da area de figuras geometricas
 * @author	Lael Rodrigues(laelrodrigues7@gmail.com)
 * @since	12/03/2017
 * @date 	12/03/2017
 */

#ifndef CALCAREA_H
#define CALCAREA_H

#include "area.h"



/**
 * @brief Funcao que solicita ao usuario os dados necessarios
 *  			para o calculo da area do triangulo
 * @param base Medida da base do triangulo
 * @param altura Medida da altura do triangulo 
 */
void dadosTriangulo(float base, float altura);


/**
 * @brief Funcao que solicita ao usuario os dados necessarios
 *  			para o calculo da area do retangulo
 * @param base Medida da base do retangulo
 * @param altura Medida da altura do retangulo 
 */
void dadosRetangulo(float base, float altura);


/**
 * @brief Funcao que solicita ao usuario os dados necessarios
 *  			para o calculo da area do quadrado
 * @param lado Medida do lado do quadrado
 */
void dadosQuadrado(float lado);


/**
 * @brief Funcao que solicita ao usuario os dados necessarios
 *  			para o calculo da area do circulo
 * @param raio Medida do raio do circulo
 */
void dadosCirculo(float raio);


/**
 * @brief Funcao que solicita ao usuario os dados necessarios
 *  			para o calculo da area do piramide
 * @param area_b Medida da area da base da piramide
 * @param area_l Medida da area lateral da piramide
 */
void dadosPiramide(float area_b, float area_l);


/**
 * @brief Funcao que solicita ao usuario os dados necessarios
 *  			para o calculo da area do cubo
 * @param aresta Medida da aresta do cubo
 */
void dadosCubo(float aresta);


/**
 * @brief Funcao que solicita ao usuario os dados necessarios
 *  			para o calculo da area do paralepipedo
 * @param aresta1 Medida da primeira aresta do paralepipedo
 * @param aresta2 Medida da segunda aresta do paralepipedo
 * @param aresta3 Medida da terceira aresta do paralepipedo
 */
void dadosParalepipedo(float aresta1, float aresta2, float aresta3);


/**
 * @brief Funcao que solicita ao usuario os dados necessarios
 *  			para o calculo da area do circulo
 * @param raio Medida do raio da esfera
 */
void dadosEsfera(float raio);

#endif