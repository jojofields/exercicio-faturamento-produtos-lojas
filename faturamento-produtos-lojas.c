#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<string.h>
#define P 3
#define L 3
#define TAMNOME 30

int main(){
    setlocale(LC_ALL,"Portuguese");
    char produtos[P][TAMNOME];
    int codigo[P];
    float preco[P];
    int vendas[P][L];
    float aux_fat[P];
    int i, j, indice, aux_cod, aux_vend, aux_soma;
    float media, faturamento_loja, faturamento_produto, faturamento_total;
    char aux[TAMNOME];
    for(i=0;i<P;i++){

        printf("Entre com o nome do produto: ");
        gets(produtos[i]);

        printf("Entre com o código do produto: ");
        scanf(" %d", &codigo[i]);

        printf("Entre o preço do produto: ");
        scanf(" %f", &preco[i]);

        for(j=0;j<L;j++){
            printf("Entre a quantidade de vendas da loja %d: ", j+1);
            scanf(" %d", &vendas[i][j]);
        }
        getchar();
        printf("\n");
    }

    //strcmp (<string_1>,<string_2>);

    indice=-1;
    do{
        printf("Informe o nome do produto para localiza-lo: ");
        gets(aux);
        for(i=0;i<P;i++){
            if(strcmp(aux,produtos[i]) == 0){
                indice=i;
                i=P;
            }
        }
        if(indice==-1){
            printf("\n***Nome do produto inválido***\n\n");
        }
    }while(indice==-1);
    printf("Código: %d Preço: R$ %.2f", codigo[indice],preco[indice]);

    indice=-1;
    do{
        printf("\n\nInforme o código do produto: ");
        scanf(" %d", &aux_cod);
        for(i=0;i<P;i++){
            if(aux_cod==codigo[i]){
                indice=i;
                i=P;
            }
        }
        if(indice==-1){
            printf("\n***Código de produto inválido!***\n\n");
        }
    }while(indice==-1);

    aux_vend=0;
    for(i=0;i<L;i++){
        aux_vend=aux_vend+vendas[indice][i];
    }
    printf("%s: Foram vendidas %d unidades", produtos[indice], aux_vend);

    printf("\n\n");
    printf("Médias de unidades vendidas de cada produto por loja:\n");
    for(i=0;i<P;i++){
        aux_soma=0;
        for(j=0;j<L;j++){
            aux_soma=aux_soma+vendas[i][j];
        }
        media=(float)aux_soma/L;
        printf("%s\tCódigo: %d\tPreço: %.2f\tMédia: %.2f\n", produtos[i],codigo[i],preco[i], media);
    }

    printf("\n\n");
    printf("Faturamento total de cada loja:\n");
    for(i=0;i<L;i++){
        faturamento_loja=0;
        for(j=0;j<P;j++){
            faturamento_loja=faturamento_loja+(preco[j]*vendas[j][i]);
        }
        printf("Loja %d: R$ %.2f\n", i+1, faturamento_loja);
    }

    printf("\n\n");
    faturamento_total=0;
    for(i=0;i<P;i++){
        faturamento_produto=0;
        for(j=0;j<L;j++){
            faturamento_produto=faturamento_produto+preco[i]*vendas[i][j];
        }
        aux_fat[i]=faturamento_produto;
        if(faturamento_produto>faturamento_total){
            faturamento_total=faturamento_produto;
        }
    }
    printf("Produto(os) que gerou(geraram) o maior faturamento:\n");
    for(i=0;i<P;i++){
        if(faturamento_total==aux_fat[i]){
            printf("%s\tCódigo: %d\tFaturamento: %.2f\n", produtos[i],codigo[i], aux_fat[i]);
        }
    }

    printf("\n\n\n");
    return 0;
}
