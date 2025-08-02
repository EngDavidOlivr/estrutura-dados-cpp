//include para entrada e saida de dados no console
#include <iostream>

//definir variaveis ex: int, float, double
int num1, num2, resultado;

//definir a função principal do programa
//toda a execução do programa começa aqui
int main() {
    //std::cout é usado para imprimir no console
    //std::cin é usado para ler a entrada do usuário
    std::cout << "Digite o primeiro numero: ";
    std::cin >> num1;
    std::cout << "Digite o segundo numero: ";
    std::cin >> num2;

    resultado = num1 + num2;
    std::cout << "Soma: " << resultado << std::endl;//endline adiciona uma nova linha

    resultado = num1 - num2;
    std::cout << "Subtracao: " << resultado << std::endl;

    resultado = num1 * num2;
    std::cout << "Multiplicacao: " << resultado << std::endl;

    return 0;//retorna 0 para indicar que o programa terminou corretamente
}