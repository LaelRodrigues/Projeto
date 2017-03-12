/** 
 * @file	calperimetro.h
 * @brief	Arquivo cabecalho com os prototipos das funcoes que imprimi
 *   				o resultado do calculo do perimetro de figuras gemetricas planas
 * @author	Lael Rodrigues(laelrodrigues7@gmail.com)
 * @since	12/03/2017
 * @date 	12/03/2017
 */

#ifndef PERIMETRO_H
#define PERIMETRO_H

#include "perimetro.h"



/**
 * @brief Funcao que imprimi o resultado do calculo
 *        			do perimetro do triangulo
 * @param base Medida da base do triangulo
 * @param altura Medida da altura do triangulo 
 */
void imprimirPeriTriangulo(float base, float altura);


/**
 * @brief Funcao que imprimi o resultado do calculo
 *  				do perimetro do retangulo
 * @param base Medida da base do retangulo
 * @param altura Medida da altura do retangulo 
 */
void imprimirPeriRetangulo(float base, float altura);


/**
 * @brief Funcao que imprimi o resultado do calculo
 *  			 	do perimetro do quadrado
 * @param lado Medida do lado do quadrado
 */
void imprimirPeriQuadrado(float lado);


/**
 * @brief Funcao que imprimi o resultado do calculo
 *  				do perimetro do circulo
 * @param raio Medida do raio do circulo
 */
void imprimirPeriCirculo(float raio);

#endif