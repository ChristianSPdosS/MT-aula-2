/*
  Joãozinho tem que ajudar o pai. Um relatório específico está sendo pressionado com letras indesejadas entre os três números existentes. Você tem que fazer um programa para somar esses três números, ignorando as letras existentes. Cada linha não tem espaços.

Entrada
A primeira linha de entrada contém um inteiro N ( N < 100000). Seguem N linhas com exatamente 14 caracteres que devem ser lidos e os três números existentes nesta linha devem ser extraídos e somados.

Saída
Para cada entrada, seu programa deve imprimir um inteiro representando a soma dos 3 números existentes daquela linha.

Amostra de entrada	
3
Ab23s249ttu21
At01v021kkk12
xx14l134mjm01

Amostra de saída

293
34
149
  */

#include <stdio.h>

int main(){
int N, i, m;
int n1= 0;
int n2=0;
int n3= 0;
int v=0;
char c[14];

  scanf("%d" , &N);

for(m =0; m< N; m++){

scanf("%s" , c);

for(i=0; c[i] != '\0'; i++){
    
  if(c[i] != '0' && c[i] != '1' && c[i] != '2' && c[i] != '3' && c[i] != '4' && c[i] != '5' && c[i] != '6' && c[i] != '7' && c[i] != '8' && c[i] != '9') 
    continue;
    
    
    else if(v==0){
        
       n1= n1 * 10;
        
    switch(c[i]){
        case '1': n1+=1; break;
        case '2':n1+= 2; break;
        case '3':n1+=3; break;
        case '4':n1+=4; break;
        case '5':n1+=5; break;
        case '6':n1+=6; break;
        case '7':n1+=7; break;
        case '8': n1+=8; break;
        case '9': n1+=9; break;
        case '0': n1+=0; break;
        
    }
    
     if(c[i + 1] != '0' && c[i + 1] != '1' && c[i + 1] != '2' && c[i + 1] != '3' && c[i + 1] != '4' && c[i + 1] != '5' && c[i + 1] != '6' && c[i + 1] != '7' && c[i + 1] != '8' && c[i + 1] != '9') 
    v= 1;
    
    }
    
    else if(v==1){
        
       n2= n2 * 10;
        
    switch(c[i]){
        case '1': n2+=1; break;
        case '2':n2+= 2; break;
        case '3':n2+=3; break;
        case '4':n2+=4; break;
        case '5':n2+=5; break;
        case '6':n2+=6; break;
        case '7':n2+=7; break;
        case '8': n2+=8; break;
        case '9': n2+=9; break;
        case '0': n2+=0; break;
        
    }
    
     if(c[i + 1] != '0' && c[i + 1] != '1' && c[i + 1] != '2' && c[i + 1] != '3' && c[i + 1] != '4' && c[i + 1] != '5' && c[i + 1] != '6' && c[i + 1] != '7' && c[i + 1] != '8' && c[i + 1] != '9') 
    v= 2;
    
    }
    else if(v==2){
        
       n3= n3 * 10;
        
    switch(c[i]){
        case '1': n3+=1; break;
        case '2':n3+= 2; break;
        case '3':n3+=3; break;
        case '4':n3+=4; break;
        case '5':n3+=5; break;
        case '6':n3+=6; break;
        case '7':n3+=7; break;
        case '8': n3+=8; break;
        case '9': n3+=9; break;
        case '0': n3+=0; break;
        
    }
    
    
    
    }
}

  printf("%d\n" , n1+n2+n3);

  n1= 0;
  n2 = 0;
  n3 = 0;
  v= 0;
  }


  return 0;
  }







  
