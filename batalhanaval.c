#include<stdio.h>
#define horizonte 10//quantidade de linhas que vão está na horizontal.
#define vertical 10//quantidade de linhas que vão está na vertical.
#define agua 0//numero exibido para representar a agua.
int main(){

   //declarar váriavel
    int indece;//coluna
    int indece_2;//linha
    int coluna_horizontal[10]=
   {
      1,2,3,4,5,6,7,8,9,10
   };
      //MATRIZ DO TABULEIRO
  int tabuleiro[horizonte][vertical];

  //estrutura de repetição para dar os valores para o tabuleiro
  for(indece=0;indece<horizonte;indece++)
  {
    for(indece_2=0;indece_2<vertical;indece_2++)
    {
        tabuleiro[indece][indece_2]=agua;
    };
  };

  //naviu na horizontal
    for(indece=3;indece>=0;indece--)
    {
      tabuleiro[0][indece]=3;
    };

    //naviu na vertical
    for(indece=3;indece>=0;indece--)
    {
      tabuleiro[indece][5]=3;
    };

    //naviu na diagonal da esquerda para direita
    for(indece=2;indece<5;indece++)
    {
      tabuleiro[indece][indece]=3;
    };

    //naviu na diagonal da direita para esquerda
    for(indece=0,indece_2=9;indece>=3,indece_2>=7;indece++,indece_2--)
    {
      tabuleiro[indece][indece_2]=3;
    };

    //naviu na diagonal da direita para esquerda uma casa a baixo
    for(indece=1,indece_2=9;indece>=3,indece_2>=7;indece++,indece_2--)
    {
      tabuleiro[indece][indece_2]=3;
    };


    //ataques especiais

    //triangulo
             //primeira linha
    for(indece=6;indece<7;indece++)
   {
      for(indece_2=2;indece_2<3;indece_2++){
         
        if(tabuleiro[indece][indece_2]==3)
        {
         tabuleiro[indece][indece_2]=5;//valor dado para áreas afetadas
        }
        else
        {
          tabuleiro[indece][indece_2]=1;//valor dado se o ataque não afetou nada
        }

             //segunda linha
         for(indece=7;indece<8;indece++)
         {
            for(indece_2=1;indece_2<4;indece_2++){
               
              if(tabuleiro[indece][indece_2]==3)
              {
               tabuleiro[indece][indece_2]=5;//valor dado para áreas afetadas
              }
              else
              {
                tabuleiro[indece][indece_2]=1;//valor dado se o ataque não afetou nada
              }
    
            }
         }
      }
   }
          //teceira linha
   for(indece=8;indece<9;indece++)
   {
    for(indece_2=0;indece_2<5;indece_2++)
    {
      if(tabuleiro[indece][indece_2]==3)
        {
         tabuleiro[indece][indece_2]=5;//valor dado para áreas afetadas
        }
        else
        {
          tabuleiro[indece][indece_2]=1;//valor dado se o ataque não afetou nada
        }
    }
   }

   //cruz
             //primeira linha
    for(indece=6;indece<7;indece++)
   {
      for(indece_2=7;indece_2<8;indece_2++){
         
        if(tabuleiro[indece][indece_2]==3)
        {
         tabuleiro[indece][indece_2]=5;//valor dado para áreas afetadas
        }
        else
        {
          tabuleiro[indece][indece_2]=1;//valor dado se o ataque não afetou nada
        }

             //segunda linha
         for(indece=7;indece<8;indece++)
         {
            for(indece_2=5;indece_2<10;indece_2++){
               
              if(tabuleiro[indece][indece_2]==3)
              {
               tabuleiro[indece][indece_2]=5;//valor dado para áreas afetadas
              }
              else
              {
                tabuleiro[indece][indece_2]=1;//valor dado se o ataque não afetou nada
              }
    
            }
         }
      }
   }
          //teceira linha
   for(indece=8;indece<9;indece++)
   {
    for(indece_2=7;indece_2<8;indece_2++)
    {
      if(tabuleiro[indece][indece_2]==3)
        {
         tabuleiro[indece][indece_2]=5;//valor dado para áreas afetadas
        }
        else
        {
          tabuleiro[indece][indece_2]=1;//valor dado se o ataque não afetou nada
        }
    }
   }

   //octaedro
          //primeira linha
   for(indece=3;indece<4;indece++)
   {
      for(indece_2=7;indece_2<8;indece_2++){
        if(tabuleiro[indece][indece_2]==3)
        {
         tabuleiro[indece][indece_2]=5;//valor dado para áreas afetadas
        }
        else
        {
          tabuleiro[indece][indece_2]=1;//valor dado se o ataque não afetou nada
        }

             //segunda linha
         for(indece=4;indece<5;indece++)
         {
            for(indece_2=6;indece_2<9;indece_2++){
               
              if(tabuleiro[indece][indece_2]==3)
              {
               tabuleiro[indece][indece_2]=5;//valor dado para áreas afetadas
              }
              else
              {
                tabuleiro[indece][indece_2]=1;//valor dado se o ataque não afetou nada
              }
    
            }
         }
      }
   }
          //teceira linha
   for(indece=5;indece<6;indece++)
   {
    for(indece_2=7;indece_2<8;indece_2++)
    {
      if(tabuleiro[indece][indece_2]==3)
        {
         tabuleiro[indece][indece_2]=5;//valor dado para áreas afetadas
        }
        else
        {
          tabuleiro[indece][indece_2]=1;//valor dado se o ataque não afetou nada
        }
    }
   }

     
                //EXIBIR TABULEIRO
    printf("********BATANLHA NAVAL********\n");

    //exibir linha horizontal
    printf("   A B C D E F G H I J\n");

    //exibir linha vertical e matriz
    for(indece=0;indece<=9;indece++)
    {
      //linha horizontal
      printf("%d  ",coluna_horizontal[indece]);

      //exibir matriz
      printf("%d %d %d %d %d %d %d %d %d %d",tabuleiro[indece][0],tabuleiro[indece][1],tabuleiro[indece][2],tabuleiro[indece][3],
      tabuleiro[indece][4],tabuleiro[indece][5],tabuleiro[indece][6],tabuleiro[indece][7],tabuleiro[indece][8],tabuleiro[indece][9]);
      printf("\n");
    }
    
    return 0;
}