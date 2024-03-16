#include <stdio.h>

void PrevisaoDeQueimada (float velocidadeVento, float valorTemperatura, int valorUmidade);

int main () {

    float velocidadeVento, valorTemperatura;
    int valorUmidade;

    printf("Entre com valor da temperatura registrada: ");
    scanf("%f", &valorTemperatura);
    printf("Entre com o valor da velocidade registrada dos ventos: ");
    scanf("%f", &velocidadeVento);
    printf("Classifique a umidade relativ (1 = Baixa / 2 = Moderada / 3 = Alta): ");
    scanf("%d", &valorUmidade);

    PrevisaoDeQueimada(velocidadeVento, valorTemperatura, valorUmidade);

    return 0;
}

void PrevisaoDeQueimada(float velocidadeVento, float valorTemperatura, int valorUmidade) {
    if(valorTemperatura > 30.0 && valorUmidade == 1 && velocidadeVento > 35.0) {
        printf("Probabilidade alta de queimada!");
    }
    else if ((valorTemperatura > 15.0 && valorTemperatura < 30) && valorUmidade == 2 &&velocidadeVento <= 18.0) {
        printf("Probilidade media de queimada!");
    }
    else if(valorTemperatura < 15.0 && valorUmidade == 3 && velocidadeVento <= 18.0) {
        printf("Probalidade baixa de queimada!");
    }
}