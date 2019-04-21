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

  int i,j; 
  ofstream arquivoE;
  arquivoE.open("arquivo.txt",ios_base::in);
  if(!arquivoE){
  	arquivoE.open("arquivo.txt", ios::app);
  }else{
  
  
	  char letras[] = {'a','t','c','g'};

    srand(time(NULL));
  
 
  char **nomes; 
  nomes =(char**) malloc(sizeof(char*)*100); 

  for (i = 0; i < 100; i++){ 
       nomes[i] = (char*) malloc(100 * sizeof(char)); 

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
