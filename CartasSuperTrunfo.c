#include <stdio.h> //#include inclui a biblioteca padrão de entrada e saída, necessária para usar a função printf.

int main(){ // int main() é onde o programa começa a execução. Toda aplicação em C começa pela função main.

//VARIAVEIS

int carta = '1,2'; 
char estado = 'T,B';
char codigo [28] = "T01" "B02";
char cidade [28] = "tocantins" "bahia";
int populacao = '150098, 184750';
float area = '1400.08, 68304';
float pib = '427.00, 628.08' ;
int numero = '42, 72';


printf("Carta: \n"); // printf; imprime a mensagem  na tela. O \n adiciona uma nova linha ao final da mensagem.
scanf(" %d", &carta); // scanf é usada para ler dados do usuário, que são então armazenados em variáveis.

printf("Estado: \n");
scanf(" %c", &estado);

printf("Codigo: \n");
scanf("%s", &codigo);

printf("Nome da cidade: \n");
scanf("%s", &cidade);

printf("População: \n");
scanf(" %d", &populacao);

printf("Área:  \n");
scanf(" %f", &area);

printf("PIB: \n");
scanf(" %f", &pib);

printf("Numero de Pontos Turísticos: \n");
scanf(" %d", &numero);

printf("Carta: %d\n Estado: %c\n Código: %s\n Nome da Cidade: %s\n População: %d\n", carta, estado, codigo, cidade, populacao);
printf("Área: %.2f km²\n PIB: %.3f bilhoes de reais\n Número de Pontos Turísticos: %d\n", area, pib, numero);

return 0; // return 0; indica que o programa terminou com sucesso.

}
