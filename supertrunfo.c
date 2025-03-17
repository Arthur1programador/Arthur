#include<stdio.h>
int main(){
    //exbir banner
    printf("+++++++++++++++++++++++++++++++++++++SUPER TRUNFO+++++++++++++++++++++++++++++++++++++++++++++++\n");

    //exibir frase
    printf("vamos lá\n");

    //CIDADE A
    printf("CIDADE A\n");
      // QUAL O DD
    printf("qual o DD:\n");
    int DD;
    scanf("%d", &DD);

      //QUAL A CIDADE
    printf("qual a cidade?\n");
    char cidade [20];
    scanf("%s",cidade);
    
      //QUAL O ESTADO
    printf("qual o estado:\n");
    char estado [20];
    scanf("%s",estado);

      //QUAL A POPILAÇÃO
    printf("qual a população:\n");
    float populacao;
    scanf("%f", &populacao);

      //qual o km
    printf("qual o tamanho em km:\n");
    float km;
    scanf("%f", &km);

      //qual o pib
    printf("qual o PIB:\n");
    float pib;
    scanf("%f", &pib);

     //pontos turisticos
    printf("pontos turisticos:\n");
    int pontosTuristicos;
    scanf("%d", &pontosTuristicos);

     //pib per capita
    double pibPerCapita;
    pibPerCapita=pib/populacao;

     //qual a densidade populacional
    float desnsidadePopulacional;
    desnsidadePopulacional=populacao/km;

     //super trunfo
    double supersoma,super,semisuper;
    float densidadepor1000;
    supersoma=(double)(populacao+km+pib+pibPerCapita+(pontosTuristicos*1000));
    densidadepor1000=desnsidadePopulacional*1000;
    semisuper=supersoma/densidadepor1000;
    super=semisuper/10000;

     //exibir os dados da cidadeA
    printf("======================%s=======================\n",cidade);
    printf("DD:%d\n",DD);
    printf("estado:%s\n",cidade);
    printf("estado:%s\n",estado);
    printf("população:%.0f\n",populacao);
    printf("km:%.0f\n",km);
    printf("PIB:%.2f\n",pib);
    printf("pontos turisticos:%d\n",pontosTuristicos);
    printf("pib per capita:%.2f\n",pibPerCapita);
    printf("densidade populacional:%.2f\n",desnsidadePopulacional);
    printf("super:%.2f\n",super);

        //exbir banner
    printf("-----------CIDADE B--------------------------------\n");
    
        //exibir frase
    printf("vamos lá\n");
    
        
          // QUAL O DD
    printf("qual o DD:\n");
    int DD_B;
    scanf("%d", &DD_B);
    
          //QUAL A CIDADE
    printf("qual a cidade?\n");
    char cidade_B [20];
    scanf("%s",cidade_B);
        
          //QUAL O ESTADO
    printf("qual o estado:\n");
    char estado_B [20];
    scanf("%s",estado_B);
    
          //QUAL A POPILAÇÃO
    printf("qual a população:\n");
    float populacao_B;
    scanf("%f", &populacao_B);
    
          //qual o km
    printf("qual o tamanho em km:\n");
    float km_B;
    scanf("%f", &km_B);
    
          //qual o pib
    printf("qual o PIB:\n");
    float pib_B;
    scanf("%f", &pib_B);
    
         //pontos turisticos
    printf("pontos turisticos:\n");
    int pontosTuristicos_B;
    scanf("%d", &pontosTuristicos_B);
    
         //pib per capita
        double pibPerCapita_B;
        pibPerCapita_B=pib_B/populacao_B;
    
         //qual a densidade populacional
        float desnsidadePopulacional_B;
        desnsidadePopulacional_B=populacao_B/km_B;
    
         //super trunfo
        double supersoma_B,super_B,semisuperB;
        float densidadepor1000_B;
        supersoma_B=(double)(populacao_B+km_B+pib_B+pibPerCapita_B+(pontosTuristicos_B*1000));
        densidadepor1000_B=desnsidadePopulacional_B*1000;
        semisuperB=supersoma_B/densidadepor1000_B;
        super_B=semisuperB/10000;
        
    
         //exibir os dados da cidadeA
    printf("======================%s=======================\n",cidade_B);
    printf("DD:%d\n",DD_B);
    printf("estado:%s\n",cidade_B);
    printf("estado:%s\n",estado_B);
    printf("população:%.0f\n",populacao_B);
    printf("km:%.0f\n",km_B);
    printf("PIB:%.2f\n",pib);
    printf("pontos turisticos:%d\n",pontosTuristicos_B);
    printf("pib per capita:%.2f\n",pibPerCapita_B);
    printf("densidade populacional:%.2f\n",desnsidadePopulacional_B);
    printf("super:%.2f\n",super_B);


    printf("====================ECOLHA=====================\n");
    printf("escolha qual atributo você quer comparar:\n");
    printf("1-população.\n");
    printf("2-km\n");
    printf("3-cidade\n");
    printf("4-pib.\n");
    printf("5-ponto turisticos\n");
    printf("6-pib per capita\n7-densidade populacional\n8-super\n");
    int opcao;
    printf("qual a opção:\n");
    scanf("%d", &opcao);


    //comparação de atributos
    switch(opcao){
    case 1:
      if(populacao>populacao_B){
        //int pontodepopulacaoA;    //populacao=2
        //pontodepopulacaoA=2;
        printf("POPULAÇÃO:%s\n",cidade);
      }
      else if(populacao<populacao_B){
        //int pontodepopulacaoB;
        //pontodepopulacaoB=2;
        printf("POPULAÇÃO:%s\n",cidade_B);
      }
      else{
        printf("deu empate\n");
      }
    break;
    case 2:
      if(km>km_B){
        //int pontokmA;             //km=2
        //pontokmA=2;
        printf("KM:%s\n",cidade);
      }
    
      else if(km<km_B){
        //int pontodekmB;
        //pontodekmB=2;
        printf("KM:%s\n",cidade_B);
    }
    else{
        printf("deu empate\n");
    }
    break;
    case 3:
      if(pib>pib_B){                //pib=1
        //int pontopibA;
        //pontopibA=1;
        printf("PIB:%s\n",cidade);
      }
      else if(pib<pib_B){
        //int pontodepibB;
        //pontodepibB=1;
        printf("PIB:%s\n",cidade_B);
      }
      else{
        printf("deu empate\n");
    }
    break;
    case 4:
      if(pontosTuristicos>pontosTuristicos_B){  //pontos turisticos=1
        //int pontoptA;
        //pontoptA=1;
        printf("PONTO TURISTICOS:%s\n",cidade);
      }
      else if(pontosTuristicos<pontosTuristicos_B){
        //int pontoptB;
        //pontoptB=1;
        printf("PONTO TURISTICOS:%s\n",cidade_B);
      }
      else{
        printf("deu empate\n");
    }
    break;
    case 5:
      if(pibPerCapita>pibPerCapita_B){         //pib per capita=2
        //int pontopccA;
        //pontopccA=2;
        printf("PIB PER CAPITA:%s\n",cidade);
      }
      else if(pibPerCapita<pibPerCapita_B){
        //int pontopccB;
        //pontopccB=2;
        printf("PIB PER CAPITA:%s\n",cidade_B);
      }
      else{
        printf("deu empate\n");
    }
    break;
    case 6:
      if(desnsidadePopulacional<desnsidadePopulacional_B){    //desidade pupulacao=2
        //int pontodpA;
        //pontodpA=2;
        printf("DENSIDADE POPULACIONAL:%s\n",cidade);
      }
      else if(desnsidadePopulacional>desnsidadePopulacional_B){
        //int pontodpB;
        //pontodpB=2;
        printf("DENSIDADE POPULACIONAL:%s\n",cidade_B);
      }
      else{
        printf("deu empate\n");
    }
    break;
    case 7:
      if(super>super_B){                                      //super =3
        //int pontosuperA;
        //pontosuperA=3;
        printf("SUPER:%s\n",cidade);
      }
      else if(super<super_B){
        //int pontodesuperB;
        //pontodesuperB=3;
        printf("SUPER:%s\n",cidade_B);
      }
      else{
        printf("deu empate\n");
    }
    break;
    default:
      printf("opção inexistente.\n");
      }
    

return 0;
 
}