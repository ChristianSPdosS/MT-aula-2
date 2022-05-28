/*
Imprimir números em sequência é uma tarefa relativamente simples. Mas, e quando é um espelho de sequência? Esta é uma sequência que tem um número inicial e um número final e todos os números entre eles, incluindo estes, são dispostos em uma sequência crescente sem espaços, e então essa sequência é projetada de forma invertida, como um reflexo no espelho. Por exemplo, se a sequência for de 7 a 12, o resultado seria 789101112211101987

Escreva um programa que, dados dois inteiros, imprima sua sequência de espelhos.

Entrada
A entrada tem um valor inteiro C indicando o número de casos de teste. Então cada caso tem dois valores inteiros E e B ( 1 ≤ B ≤ E ≤ 12221 ), indicando o início e o fim da sequência.

Saída
Para cada caso de teste, imprima a respectiva sequência de espelhamento.

Amostra de entrada	
3

1 5

10 13

98 101

Amostra de saída

1234554321

1011121331211101

98991001011010019989
  */

#include <stdio.h>

int main(){

  int C, B, E, i, j, x, y, r;
 
 


  scanf("%d" , &C);

for(i=0; i<C; i++){

  scanf("%d" , &B);

  scanf("%d" , &E);

x= B;


for(B = B; B < (E + 1); B++)
 printf("%d" , B);
 

 
 for(E = E; E > (x - 1); E--){

y = E;
while(y !=0){
    
    r = y%10;
    y = y/10;
    printf("%d" , r);
}
}
  printf("\n");
}
  

  return 0;
}