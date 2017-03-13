/** 
 * @file	perimetro.cpp
 * @brief	Arquivo corpo com a implementacao das funcoes que realizam
 *   				o calculo do perimetro de viguras geometricas planas
 * @author	Lael Rodrigues(laelrodrigues7@gmail.com)
 * @since	12/03/2017
 * @date 	12/03/2017
 * @sa		perimetro.h
 */

#include "perimetro.h"

/**
 * @brief Funcao que calcula o perimetro de um triangulo
 * @param lado Medida do lado triangulo  
 * @return Perimetro do triangulo
 */
float periTriangulo(float lado){
	return 3 * lado;
}


/**
 * @brief Funcao que calcula o perimetro do retangulo
 * @param base Medida da base do retangulo
 * @param altura Medida da altura do retangulo 
 * @return Perimetro do retangulo
 */
float periRetangulo(float base, float altura){
	return 2 * (base + altura);
}

/**
 * @brief Funcao que calcula o perimetro de um quadrado
 * @param lado Medida do lado do quadrado
 * @return Perimetro do quadrado
 */
float periQuadrado(float lado){
	return 4 * lado;
}


 /**
  * @brief Funcao que calcula o perimetro do circulo
  * @param raio Medida do raio do circulo
  * @return Perimetro do circulo
  */
float periCirculo(float raio){
	return 2 * PI * raio;
}