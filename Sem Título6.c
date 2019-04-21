#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#define M 5
#define N 4
/*Grava uma matriz 5x4 em um arquivo, cujos dados são fornecidos pelo usuário*/
int main()
{
	char nome[16];
	float a[M][N];    
	int i,j,descritor,result;
	
	printf("Introduza os elementos da matriz A %d x %d\n", M, N ); 
	for(i=0;i<M;i++ )
	{
        for(j=0;j<N;j++)
		{
			printf("a[%d][%d]: ",i,j);
			scanf("%f",&a[i][j]);
		}
	}
	
	printf("Digite um nome para o arquivo: ");
	scanf("%s",nome);
	
	descritor = open(nome,O_WRONLY|O_CREAT,0777);
	
	if(descritor == -1)
	{
	printf("Problemas na abertura do arquivo!\n");
	return 1;
	}
	printf("Gravando matriz no arquivo %s\n",nome);
	result = write(descritor,a,sizeof(float)*5*4);
	
	if(result == -1)
	{
		printf("Problemas na gravacao de dados!\n");
		return 2;
	}
	else
	{
		printf("Foram gravados %d byte\n",result);
	}
	close(descritor);
		
	 
	return 0;
}
