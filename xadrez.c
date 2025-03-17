#include<stdio.h>

    //recursivo cima
    void cima(int torre)
    {
        if(torre>0)
        {
            printf("cima\n",torre);
            cima(torre-1);
        }
    }

    //recursivo direta
    void direita(int torre)
    {
        if(torre>0)
        {
            printf("direita\n");
            direita(torre-1);
        }
    }

    //recursivo baixo
    void baixo(int torre)
    {
        if(torre>0)
        {
            printf("baixo\n");
            baixo(torre-1);
        }
    }

     //recursivo esquerda
     void esquerda(int torre)
     {
         if(torre>0)
         {
             printf("esquerda\n");
             esquerda(torre-1);
         }
     }

     //recursivo cima direita
     void cimadireita(int bispo)
     {
         if(bispo>0)
         {
             printf("cima direita\n");
             cimadireita(bispo-1);
         }
     }

     //recursivo baixo direita
     void baixodireita(int bispo)
     {
         if(bispo>0)
         {
             printf("baixo direita\n");
             baixodireita(bispo-1);
         }
     }

     //recursivo baixo esquerda
     void baixoesquerda(int bispo)
     {
         if(bispo>0)
         {
             printf("baixo esquerda\n");
             baixoesquerda(bispo-1);
         }
     }

     //recursivo cima esquerda
     void cimaesquerda(int bispo)
     {
         if(bispo>0)
         {
             printf("baixo esquerda\n");
             cimaesquerda(bispo-1);
         }
     }

     // recursivo em L- cima direita
     void cima2direita( int cavalo)
     {
            printf("cima\ncima\n");
            printf("direita\n");        
    }
        
     

     // recursivo em L- direita baixo
     void direita2baixo( int cavalo)
     {
        printf("direita\ndireita\n");
        printf("baixo\n");
    
    }
        

     // recursivo em L- baixo esquerda
     void baixo2esquerda( int cavalo)
     {
            printf("baixo\nbaixo\n");
            printf("esquerda\n"); 
     }

     // recursivo em L- esquerda cima
     void esquerda2cima( int cavalo)
     {
            printf("esquerda\nesquerda\n");
            printf("cima\n"); 
     }

int main(){

    //declarar variaveis
    int movimento;
    int opcoes;
    int escolha;

    //exibir opções
    printf("(1)torre\n(2)bispo\n(3)rainha\n(4)cavalo\n");
    scanf("%d",&opcoes);
    

    //opções
    switch(opcoes){

        //torre
    case 1:

        //opções da torre
        printf("(1)cima\n(2)direita\n(3)baixo\n(4)esquerda\n");

        //captura de dados
        scanf("%d", &escolha);

        //exibir torre para cima
        if(escolha==1)
        {
        printf("torre:\n");
        cima(movimento=5);
        }

        //exibir torre para direita
        else if(escolha==2)
        {
        printf("torre:\n");
        direita(movimento=5);
        }

        //exibir torre para direita
        else if(escolha==3)
        {
        printf("torre:\n");
        baixo(movimento=5);
        }

        //exibir torre para direita
        else if(escolha==4)
        {
        printf("torre:\n");
        esquerda(movimento=5);
        }
        else
        {
            printf("opção invalida\n");
        }

    //finalização
    break;

        //bispo
    case 2:

        //opções da bispo
        printf("(1)cima direita\n(2)baixo direita\n(3)baixo esquerda\n(4)cima esquerda\n");

        //captura de dados
        scanf("%d", &escolha);

        //exibir bispo para cima
        if(escolha==1)
        {
        printf("bispo:\n");
        cimadireita(movimento=5);
        }

        //exibir bispo para direita
        else if(escolha==2)
        {
        printf("bispo:\n");
        baixodireita(movimento=5);
        }

        //exibir bispo para direita
        else if(escolha==3)
        {
        printf("bispo:\n");
        baixoesquerda(movimento=5);
        }

        //exibir bispo para direita
        else if(escolha==4)
        {
        printf("bispo:\n");
        cimaesquerda(movimento=5);
        }
        else
        {
            printf("opção invalida\n");
        }
        

    //finalização
    break;

    case 3:

        //opções de rainha
        printf("(1)cima direita\n(2)baixo direita\n(3)baixo esquerda\n(4)cima esquerda\n(5)cima direita\n(6)baixo direita\n(7)baixo esquerda\n(8)cima esquerda\n");

        //captura de dados
        scanf("%d", &escolha);

        //exibir rainha para cima direita
        if(escolha==1)
        {
        printf("rainha:\n");
        cimadireita(movimento=5);
        }

        //exibir rainha para baixo e direita
        else if(escolha==2)
        {
        printf("rainha:\n");
        baixodireita(movimento=5);
        }

        //exibir rainha baixo esquerda
        else if(escolha==3)
        {
        printf("rainha:\n");
        baixoesquerda(movimento=5);
        }

        //exibir rainha cima esquerda
        else if(escolha==4)
        {
        printf("rainha:\n");
        cimaesquerda(movimento=5);
        }

        //exibir rainha para cima
        if(escolha==5)
        {
        printf("rainha:\n");
        cima(movimento=5);
        }

        //exibir rainha para direita
        else if(escolha==6)
        {
        printf("rainha:\n");
        direita(movimento=5);
        }

        //exibir rainha para baixo
        else if(escolha==7)
        {
        printf("rainha:\n");
        baixo(movimento=5);
        }

        //exibir rainha para esquerda
        else if(escolha==4)
        {
        printf("rainha:\n");
        esquerda(movimento=5);
        }

        else
        {
            printf("opção invalida\n");
        }

        break;

    case 4:

    //opções do cavalo
    printf("(1)L-cima direita\n(2)L-direita baixo\n(3)L-baixo esquerda\n(4)L-esquerda cima\n");

    //captura de dados
    scanf("%d", &escolha);

    //L-cima direita 
    if(escolha==1)
    {
    printf("cavalo:\n");
    cima2direita(movimento);
    }

    //L-direita baixo
    else if(escolha==2)
    {
    printf("cavalo:\n");
    direita2baixo(movimento);
    }

    //L-baixo esquerda
    else if(escolha==3)
    {
    printf("cavalo:\n");
    baixo2esquerda(movimento);
    }

    //L-esquerda cima
    else if(escolha==4)
    {
    printf("cavalo:\n");
    esquerda2cima(movimento);
    }

    //finalização
    break;
    

    default:
    printf("opcão invalida\n");
    }
   
    
    return 0;
}