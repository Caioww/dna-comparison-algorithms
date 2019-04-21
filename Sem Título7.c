#include <stdio.h>

#define LINHAS  3
#define COLUNAS 2

int main(int argc,char *argv[])
{
  int i;
  int j;  
  int nr;
  int nw;
  int erro;
  FILE* binW;
  FILE* txtW;
  FILE* binR;
  FILE* txtR;

  int lidaB[LINHAS][COLUNAS];
  int lidaTxt[LINHAS][COLUNAS];
  int escrita[LINHAS][COLUNAS] = {{1,2},{3,4},{5,6}};

  txtRW = fopen("C:\Users\Caio\caio.txt","wb");
  if( binW )
  {
    nw = fwrite(escrita,sizeof(int),LINHAS * COLUNAS,binW);
    if( nw != LINHAS * COLUNAS )
    {
      printf("A escrita do arquivo binario falhou\n");
    }
    else
    {
      printf("A escrita do arquivo binario funcionou");
    }
    fclose(binW);
  }
  else
  {
    printf("Erro ao abrir o arquivo binário para escrita");
  }

  txtR = fopen("C:\Users\Caio\caio.txt","rb");
  if( binR )
  {
    nr = fread(lidaB,sizeof(int),LINHAS * COLUNAS,binR);
    if( nr != LINHAS * COLUNAS )
    {
      printf("A escrita do arquivo binario falhou\n");
    }
    else
    {
      printf("A escrita do arquivo binario funcionou");
    }
    fclose(binR);
  }
  else
  {
    printf("Erro ao abrir o arquivo binário para leitura");
  }


  txtR = fopen("C:\Users\Caio\caio.txt","wt"); 
  if( txtW )
  {
    for(i = 0; i < LINHAS; i++)
    {
      for(j = 0; j < COLUNAS; j++)
      {
        fprintf(txtW,"%4d ",escrita[i][j]);
      }
      fprintf(txtW,"\n");
    }
    fclose(txtW);
  }
  else
  {
    printf("Erro ao abrir o arquivo texto para escrita");
  }

  txtR = fopen("C:\Users\Caio\caio.txt","rt"); 
  if( txtR )
  {
    erro = 0;
    for(i = 0; i < LINHAS; i++)
    {
      for(j = 0; j < COLUNAS; j++)
      {
        if( !fscanf(txtR,"%d",&lidaTxt[i][j]) )
        {
          erro = 1;
          printf("Erro a o ler a entrada (%d,%d) da matriz\n",i,j);
          break;
        }
      }

      if( erro )
        break;
    }
    fclose(txtW);
  }
  else
  {
    printf("Erro ao abrir o arquivo texto para leitura");
  }

  return 0;
}
