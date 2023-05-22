#include <stdio.h>

int main(int argc, const char * argv[])
{
int num1;
  printf("Digite um numero de 1 a 7: ");
  scanf(" %d", &num1);
  
switch(num1) {
   case '1':
     printf ("1 – “Voce pertence ao curso de Agronomia");
     break;
   case '2':
     printf ("Voce pertence ao curso de Veterinária");
     break;
   case '3':
     printf ("Voce pertence ao curso de Zootecnia");
     break;
   case '4':
     printf ("Voce pertence ao curso de Pedagogia");
     break;
   case '5':
     printf ("Voce pertence ao curso de Letras");
     break;
   case '6':
     printf ("Voce pertence ao curso de Engenharia de Alimentos");
     break;
   case '7':
     printf ("Voce pertence ao curso de CIENCIA DA COMPUTACAO!");
     break;
     }
}
