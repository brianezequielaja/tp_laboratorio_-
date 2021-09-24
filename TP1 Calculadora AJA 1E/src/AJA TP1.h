#ifndef AJA_TP1_H_
#define AJA_TP1_H_

int cargarNumero();
/**\brief Solicita un número al usuario.
 * \param  El usuario ingresa un número.
 * \return Retorna un entero.
 */

int calculoSuma(int num1, int num2);
/**\brief Realiza una suma entre los números solicitados.
 * \param Ingresa el primer número.
 * \param Ingresa el segundo número.
 * \return Retorna el resultado de la suma de los números anteriormente solicitados.
 */

int calculoResta(int num1, int num2);
/**\brief Realiza una resta entre los números solicitados.
 * \param Ingresa el primer número.
 * \param Ingresa el segundo número.
 * \return Retorna el resultado de la resta de los números anteriormente solicitados.
 */

int calculoMultiplicacion(int num1, int num2);
/** \brief Realiza una multiplicación entre los números solicitados.
 * \param Ingresa el primer número.
 * \param Ingresa el segundo número.
 * \return Retorna el resultado de la multiplicación de los números anteriormente solicitados.
 */

float calculoDivision(int num1, int num2);
/** \brief Realiza una división entre los números solicitados.
 * \param Ingresa el primer número.
 * \param Ingresa el segundo número.
 * \return Retorna el resultado de la división de los números anteriormente solicitados.
 */

int calculoFactorial(int numero);
/** \brief Realiza la factorización de los números solicitados por el usuario; se utiliza un for para realizar la iteración decreciente.
 * \param Ingresa el primer número.
 * \param Ingresa el segundo número.
 * \return Retorna el factorial del número solicitado.
 */

#endif /* AJA_TP1_H_ */
