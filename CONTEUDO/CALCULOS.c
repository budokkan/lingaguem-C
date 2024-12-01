#include <stdio.h>

int man (){
    int A, B, soma, sub, mult, div;

    printf ("digite o primeiro numero: \n");
     scanf("%d", &A);
    prinft ("digite o segundo numero: \n");
     scanf("%d", &B);


  soma = A + B;
  sub = A - B;
  mult = A * B;
  div = A / B;

   printf ("resultado das operações: \n");
   printf ("resultado da soma: %d.\n", soma);
   printf ("resultado da subtração: %d.\n", sub);
   printf ("resultado da multiplicação: %d.\n", mult);
   printf ("resultado da divisão: %d.\n", div);

}