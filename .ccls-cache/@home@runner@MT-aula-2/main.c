#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {

  int i;
  int j;
  int m[10][10];

for(i=0;i<10;i++){
  for(j=0; j<10; j++)
    m[i][j] = i + j;
}

  for(i=0;i<10;i++){
  for(j=0; j<10; j++)
   printf("%d\n" , m[i][j]);
    
}

//strlen e strcopy
  
  
  return 0;
}

//Usar tabela ASCI
//ex : 