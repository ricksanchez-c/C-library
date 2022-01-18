#include "library.h" 
 
#define Error -1 
#define Ok 1 
 
int main(int argc, char *argv[]){ 
   int estado, linea; 
   char texto[100][100]; 
   int lineas = 0; 
   if(argc!=2){ 
      print("Requiere un argmento\n"); 
      return Error; 
   } 
   else{ 
      clear(); 
      estado = scantxt(argv[1], texto, &lineas); 
      if(lineas<1 || estado==Error){ 
         print("Error al abrir el archivo: ");  
         print(argv[1]); 
         print("\n"); 
         return Error; 
      } 
      for(linea=0; linea<=lineas; linea++){ 
         print(texto[linea]); 
         print("\n"); 
      } 
      pausa(5); 
   } 
   return Ok; 
} 