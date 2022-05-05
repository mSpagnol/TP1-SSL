#include <stdio.h>
#include <ctype.h>

int main(void) {
    char palabra [100];
    int i;  
    printf("Escriba una palabra: ");
    do{
      palabra[i] = getchar();
       if(isupper(palabra[i])){
         palabra[i] = tolower(palabra[i]);
       }else if (islower(palabra[i])){
         palabra[i] = toupper(palabra[i]);
      } else if (isdigit(palabra[i])){
         palabra[i] = " ";
      }
      putchar(palabra[i]);
    }while(palabra > 0);
    return 0;
}