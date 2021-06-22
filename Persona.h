/******************************************************************************** 
* usar funcion con argumentos:							*
*										*
*	variable X;								*
*	funcion(X); 	//es una funcion que solo lee la variable X		*
*	funcion(&X); 	//es una funcion que lee y modifica la variable X	*
*										*
*	arreglo X[10];								*
*	funcion(X); 	//es una funcion que lee y modifica el arreglo X	*
*										*
*********************************************************************************/
/******************************************************************************** 
* construir funcion con argumentos:						*
*										*
*	void funcion(variable X){						*
*		read X;			//solo lee la variable X		*
*	}									*
*	void funcion(variable *X){						*
*		*X = *X + 1;		//lee y modifica la variable X		*	
*	}									*
*										*
*	void funcion(arreglo X[]){						*
*		X[0] = X[0] + 1;	//lee y modifica el arreglo X		*		
*	}									*
*********************************************************************************/


/* incluimos solo las librerias propias del compilador */
//#include "library.h"
#include <stdio.h> 

typedef enum { Error, Ok } Estado;

typedef struct{
	char Nombre1[30];
	char Nombre2[30];
	char Apellido1[30];
	char Apellido2[30];
	int Edad;
} Persona;

void init_Persona(Persona *person);

void show_Persona(Persona person);

int save_Persona(char ruta[], Persona person);

int load_Persona(char ruta[], Persona *person);

