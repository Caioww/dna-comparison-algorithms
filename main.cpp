#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <cstdio>
#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstdlib>
#include <time.h>
#include <fstream>

using namespace std;


int main() {

  int i,j; //Variáveis Auxiliares
  ofstream arquivoE;
  arquivoE.open("arquivo.txt",ios_base::in);
  if(!arquivoE){
  	arquivoE.open("arquivo.txt", ios::app);
  }else{
  
  
	  char letras[] = {'a','t','c','g'};

    srand(time(NULL));
  
 
  char **nomes; //Observe que é um ponteiro para um ponteiro
  nomes =(char**) malloc(sizeof(char*)*100); //Aqui você aloca 10 ponteiros de char, ou seja, 10 strings **vazias**, ainda **não alocadas**.

  for (i = 0; i < 100; i++){ //Percorre as linhas do Vetor de Ponteiros
       nomes[i] = (char*) malloc(100 * sizeof(char)); //Aloca um Vetor de Inteiros para cada posição do Vetor de Ponteiros

  }

  for(i=0;i<100;i++){
    for(j=0;j<100;j++){
      int x = rand() % 4;
      nomes[i][j] = letras[x];
      arquivoE << nomes[i][j]<<"|";
    }
    arquivoE<< endl;
  }
  }
  arquivoE.close();
  
  ifstream arquivoS;
  string linha;
  arquivoS.open("arquivo.txt");
  if(arquivoS.is_open()){
  	while(getline(arquivoS,linha)){
  		cout<<linha<<endl;
  		
	  }
	  arquivoS.close();
  	
  	
  }else{
  	cout<<"Não foi possivel abrir o arquivo"<<endl;
  }

  
}
