#include <stdio.h>
#ifndef COMPLEX_MATH
#define COMPLEX_MATH


/**
 * Complex number structure
 */
struct ComplexNumber{
/*@{*/
	float real;			//Parte real
	float img;			//Parte imaginaria
};



/** @brief Prints character 
 * 
 *  @param *n1 Primer Apuntador es para una estructura ComplexNumber
 *  @param *n2 Segund Apuntador es para una estructura ComplexNumber
 *  @param *operator Operador para obtener el resultado
 *  @param *argv[] Argumentos obtenidos de la consola
 *  @return Void
 */

void getCNumbersOp(struct ComplexNumber *n1, struct ComplexNumber *n2, char *operator, char *argv[]);


 /** @brief Se crean los numeros reales e imaginarios
 * 
 *  @param *ptr Apuntador a estructura
 *  @param numero real flotante
 *  @param Numero imaginario flotante
 *  @return Void
 */

void setCNumber(struct ComplexNumber *ptr, float real, float img);

 /** @brief imprime numeros complejos
 * 
 *  @param *ptr Apuntador ala estrucutra de numero complejos 
 *
 *  @return Void
 */

void printCNumber(struct ComplexNumber *ptr);

/** @brief Imprime caracteres
 * 
 *  @param *result Apuntador a la estructura que contiene el resultado
 *	@param *number1 Primero numero complejo
 *  @param *number2 Segundo numero complejo
 *	@param operator operador
 *  @return Void
 */

void printOperation(struct ComplexNumber *result, struct ComplexNumber *number1, struct ComplexNumber *number2, char operator);

/** @brief Imprime caracteres
 * 
 *  @param *result Apuntador a la estructura que contiene el resultado
 *	@param *number1 Primero numero complejo
 *  @param *number2 Segundo numero complejo
 *	@param operator operador
 *  @return Void
 */

 





int doCNumbersOp(struct ComplexNumber *result, struct ComplexNumber *number1, struct ComplexNumber *number2, char operator);


/** @brief Suma 2 numeros complejos
 * 
 *  @param *result Apuntador a la estructura que contiene el resultado
 *  @param *number1 Primero numero complejo
 *  @param *number2 Segundo numero complejo
 *  @return Void
 */


void addCNumbers(struct ComplexNumber *result, struct ComplexNumber *number1, struct ComplexNumber *number2);


/** @brief Resta 2 numeros complejos
 * 
 *  @param *result Apuntador a la estructura que contiene el resultado
 *  @param *number1 Primero numero complejo
 *  @param *number2 Segundo numero complejo
 *  @return Void
 */


void subCNumbers(struct ComplexNumber *result, struct ComplexNumber *number1, struct ComplexNumber *number2);

/** @brief Multiplica 2 numeros complejos
 * 
 *  @param *result Apuntador a la estructura que contiene el resultado
 *  @param *number1 Primero numero complejo
 *  @param *number2 Segundo numero complejo
 *  @return Void
 */

void mulCNumbers(struct ComplexNumber *result, struct ComplexNumber *number1, struct ComplexNumber *number2);

/** @brief Divide 2 numeros complejos
 * 
 *  @param *result Apuntador a la estructura que contiene el resultado
 *  @param *number1 Primero numero complejo
 *  @param *number2 Segundo numero complejo
 *  @return Void
 */

void divCNumbers(struct ComplexNumber *result, struct ComplexNumber *number1, struct ComplexNumber *number2);

#endif
