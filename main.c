/*
Alumno: Spagnol, Martín.
Curso: K2002
*/
#include <stdio.h>
#include <ctype.h>

int main(void) {
  
    int caracter; 

    printf("Escriba una palabra: ");

    caracter = getchar();

    while (caracter != EOF)
    {
      
      int acceso = 0;

      if(isupper(caracter)){
        acceso = 1;
        putchar(tolower(caracter));
        }

      if(islower(caracter)){
        acceso = 1;
        putchar(toupper(caracter));
      }

      if(!(isdigit(caracter)) && acceso != 1){
        putchar(caracter);
      }

      caracter = getchar();

    }

    return 0;
}