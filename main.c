#include <stdio.h>

void PrevisaoDeQueimada (float valorTemperatura, int valorUmidade);

int main () {

    float valorTemperatura;
    int valorUmidade;

    printf("Entre com valor da temperatura registrada: ");
    scanf("%f", &valorTemperatura);

    printf("Classifique a umidade relativa do ar (1 = Baixa /  2 = Alta): ");
    scanf("%d", &valorUmidade);

    PrevisaoDeQueimada(valorTemperatura, valorUmidade);

    return 0;
}

void PrevisaoDeQueimada(float valorTemperatura, int valorUmidade) {
    if(valorTemperatura > 40.0 && (valorUmidade == 1 || valorUmidade == 2)) {
        printf("Probabilidade alta de queimada!");
    }
    else if ((valorTemperatura > 15.0 && valorTemperatura <= 40) && (valorUmidade == 1 || valorUmidade == 2)) {
        printf("Probilidade media de queimada!");
    }
    else if(valorTemperatura <= 15.0 && (valorUmidade == 1 || valorUmidade == 2 )) {
        printf("Probalidade baixa de queimada!");
    }
}