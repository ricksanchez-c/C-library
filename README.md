# Libreria personalizada para C


## Codigo de Ejemplo usado esta libreria:
```c
#include "library.h" 

...

int main(int argc, char *argv[]){ 
   Persona yo; 
   int Estado; 
   if(argc!=2){ 
      clear(); 
      print("Ingrese su Primer Nombre: "); 
      scan(yo.Nombre1, 30); 
      print("Ingrese su Segundo Nombre: "); 
      scan(yo.Nombre2, 30); 
      print("Ingrese su Primer Apellido: "); 
      scan(yo.Apellido1, 30); 
      print("Ingrese su Segundo Apellido: "); 
      scan(yo.Apellido2, 30); 
      do{ 
         char edad[10]; 
         print("Ingrese su Edad: "); 
         scan(edad, 10); 
         Estado = ctoi(edad, &yo.Edad); 
      }while(Estado==Error); 
      Estado = Guardar_Persona("PERSONA.TXT", yo); 
      if(Estado==Error){ 
         return 0; 
      } 
   } 
   else{ 
      clear(); 
      Estado = Abrir_Persona(argv[1], &yo); 
      if(Estado==Error){ 
         return 0; 
      } 
   } 
   Mostrar_Persona(yo); 
   pausa(5); 
   return 0; 
} 
 
... 
 
```

