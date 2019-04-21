#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <cstdio>
#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstdlib>
#include <time.h>

using namespace std;


int main() {

  int i,j; //Variáveis Auxiliares
	  char letras[] = {'a','t','c','g'};

    srand(time(NULL));
  
 
  char **nomes; //Observe que é um ponteiro para um ponteiro
  nomes =(char**) malloc(sizeof(char*)*40); //Aqui você aloca 10 ponteiros de char, ou seja, 10 strings **vazias**, ainda **não alocadas**.

  for (i = 0; i < 40; i++){ //Percorre as linhas do Vetor de Ponteiros
       nomes[i] = (char*) malloc(50 * sizeof(char)); //Aloca um Vetor de Inteiros para cada posição do Vetor de Ponteiros

      

  }

  for(i=0;i<40;i++){
    for(j=0;j<50;j++){
      int x = rand() % 4;
      nomes[i][j] = letras[x];
    }
  }

  for(i=0;i<40;i++){
    for(j=0;j<50;j++){
      cout<<nomes[i][j]<<"|";
    }
    cout<<endl;
  }

  
}
