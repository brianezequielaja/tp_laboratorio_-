/*
 Hacer una calculadora. Para ello el programa iniciar� y contar� con un men� de opciones:

 1. Ingresar 1er operando (A=x)
 2. Ingresar 2do operando (B=y)
 3. Calcular todas las operaciones
 a) Calcular la suma (A+B)
 b) Calcular la resta (A-B)
 c) Calcular la division (A/B)
 d) Calcular la multiplicacion (A*B)
 e) Calcular el factorial (A!)
 4. Informar resultados
 a) �El resultado de A+B es: r�
 b) �El resultado de A-B es: r�
 c) �El resultado de A/B es: r� o �No es posible dividir por cero�
 d) �El resultado de A*B es: r�
 e) �El factorial de A es: r1 y El factorial de B es: r2�
 5. Salir

 � Todas las funciones matem�ticas del men� se deber�n realizar en una biblioteca aparte,
 que contenga las funciones para realizar las cinco operaciones.
 � En el men� deber�n aparecer los valores actuales cargados en los operandos A y B
 (donde dice �x� e �y� en el ejemplo, se debe mostrar el n�mero cargado)
 � Deber�n contemplarse los casos de error (divisi�n por cero, etc)
 � Documentar todas las funciones
 */
#include <stdio.h>
#include <stdlib.h>
#include "AJA TP1.h"

int main(void) {
	setbuf(stdout, NULL);

	int menu;
	int num1;
	int num2;

	int flagNum1 = 0;
	int flagNum2 = 0;

	int ecuacionSuma;
	int ecuacionResta;
	float ecuacionDivision;
	int ecuacionMultiplicacion;
	int factorial1;
	int factorial2;

	do {
		printf(
				"||| Men� de opciones |||\n\n1. Ingresar el primer n�mero:\n2. Ingresar el segundo n�mero:\n3. Calcular todas las operaciones\n4. Informar resultados\n5. Salir\n\n");
		scanf("%d", &menu);

		switch (menu) {

		case 1:
			num1 = cargarNumero();
			flagNum1 = 1;
			system("cls");
			break;

		case 2:
			num2 = cargarNumero();
			flagNum2 = 1;
			system("cls");
			break;

		case 3:
			if (flagNum1 == 1 && flagNum2 == 1) {
				ecuacionSuma = calculoSuma(num1, num2);
				ecuacionResta = calculoResta(num1, num2);
				ecuacionMultiplicacion = calculoMultiplicacion(num1, num2);
				ecuacionDivision = calculoDivision(num1, num2);
				factorial1 = calculoFactorial(num1);
				factorial2 = calculoFactorial(num2);
				printf("Realizando ecuaciones...\n\n");
			} else {
				printf("Error, ingrese nuevamente los n�meros.\n\n");
			}

			if (num2 == 0) {
				printf("\nNo se puede dividir por 0, ingrese los n�meros nuevamente.\n");
			}
			system("pause");
			break;

		case 4:
			if (flagNum1 == 1 && flagNum2 == 1) {
			printf("\nEl resultado de la suma entre %d y %d es: %d.", num1,
					num2, ecuacionSuma);
			printf("\nEl resultado de la resta entre %d y %d es: %d.", num1,
					num2, ecuacionResta);
			printf("\nEl resultado de la multiplicaci�n entre %d y %d es: %d.",
					num1, num2, ecuacionMultiplicacion);
			printf("\nEl resultado de la divisi�n entre %d y %d es: %.2f.",
					num1, num2, ecuacionDivision);
			printf("\nEl factorial del primer n�mero es: %d.", factorial1);
			printf("\nEl factorial del segundo n�mero es: %d.\n\n", factorial2);
			} else {
				printf("Error, ingrese nuevamente los n�meros.\n\n");
			}
			break;

		case 5:
			break;
		} //fin del switch

		system("pause");
	} while (menu != 5);

	return 0;

} //fin de main
