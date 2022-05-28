/*

João quer montar um painel de leds contendo diversos números. Ele não possui muitos leds, e não tem certeza se conseguirá montar o número desejado. Considerando a configuração dos leds dos números abaixo, faça um algoritmo que ajude João a descobrir a quantidade de leds necessário para montar o valor.




Entrada
A entrada contém um inteiro N, (1 ≤ N ≤ 1000) correspondente ao número de casos de teste, seguido de N linhas, cada linha contendo um número (1 ≤ V ≤ 10100) correspondente ao valor que João quer montar com os leds.

Saída
Para cada caso de teste, imprima uma linha contendo o número de leds que João precisa para montar o valor desejado, seguido da palavra "leds".

Exemplo de Entrada	
3
115380
2819311
23456

  Exemplo de Saída


27 leds
29 leds
25 leds

*/


#include <stdio.h>

int main(){

int n;
  int i;
  int j;
char V[102];
  int leds=0;

  scanf("%d" , &n);

  for(j=0; j<n; j++){

scanf("%s" , V);

    for(i=0; V[i] != '\0'; i++){

      switch(V[i]){
case '1' : leds += 2; break;
        case '2' : leds += 5; break;
        case '3' : leds += 5; break;
        case '4' : leds += 4; break;
        case '5' : leds += 5; break;
        case '6' : leds += 6; break;
        case '7' : leds += 3; break;
        case '8' : leds += 7; break;
        case '9' : leds += 6; break;
        case '0' : leds += 6; break;
        
      }

    }
printf("%d leds\n" , leds);

leds= 0;

  }
  
  return 0;
}