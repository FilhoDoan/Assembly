#include <stdio.h>

int main() {

int valorpromocao, aumentoDiaria,diaChegada,pagamento, diarias, CalculoPagamento; 

scanf("%d %d %d", &valorpromocao,&aumentoDiaria,&diaChegada);
   
    if(diaChegada >= 1 && diaChegada < 31){
        CalculoPagamento = valorpromocao + (diaChegada - 1)*aumentoDiaria;
        diarias = 31 - diaChegada;
        pagamento = (diarias+1)*CalculoPagamento;
        printf("%d", pagamento);
    }else{
        printf("Data invalida");
    } 
    



}