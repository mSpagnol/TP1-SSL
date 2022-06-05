/*
Alumno: Spagnol, Martín.
Curso: K2002
*/
#include <stdio.h>
#include <ctype.h>

int main(void) {
    int i;  
    printf("Escriba una palabra: ");
    while (1)
    {
      int caracter = getchar();
      if(isupper(caracter)){
        putchar(tolower(caracter));
      }else if(islower(caracter)){
        putchar(toupper(caracter));
      }else if(isdigit(caracter)){

      }else{
        putchar(caracter);
      }

    }
}