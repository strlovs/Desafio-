#include <stdio.h>

int main () {
    int num = 1337;
    int tentativas = 3;
    int opcao; 
    int chute;

    printf("MODO DEFESA: Protegendo o servidor...\n");
    printf("Um hacker est� tentando invadir o sistema. Voc� tem 3 tentativas.\n");
    printf("Dica: ele deixou um c�digo para tr�s: MTMzNw==\n");
    printf("\nEscolha uma op��o:\n");
    printf("1 - Interceptar e tentar capturar o c�digo\n");
    printf("2 - Analisar logs (dica)\n");
    printf("3 - Ignorar (ALTO RISCO)\n");
    printf("Op��o: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1: 
            while (tentativas > 0) {
                printf("\nDigite a senha: ");
                scanf("%d", &chute);

                if (chute == num) {
                    printf("Parab�ns, voc� conseguiu salvar o sistema!\n");
                    break;
                } else if (chute < num) {
                    printf("Seu chute foi menor que o n�mero secreto.\n");
                } else {
                    printf("Seu chute foi maior que o n�mero secreto.\n");
                }

                tentativas--;
                printf("Voc� ainda tem %d tentativa(s).\n", tentativas);

                if (tentativas == 0) {
                    printf("Voc� errou todas as tentativas. O n�mero correto era %d.\n", num);
                }
            }
            break;

        case 2:
            printf("\nVoc� escolheu acessar os logs...\n");
            printf("Analisando logs...\n");
            printf("DICA: MTMzNw== parece estar em base64...\n");
            printf("Decodificando... Resultado: 1337\n");
            printf("Talvez isso seja �til...\n");
            break;

        case 3:
            printf("\nVoc� escolheu ignorar o alerta...\n");
            printf("SISTEMA COMPROMETIDO. A invas�o foi bem-sucedida!\n");
            break;

        default:
            printf("Op��o inv�lida. O tempo acabou!\n");
            break;
    }

    return 0;
}



