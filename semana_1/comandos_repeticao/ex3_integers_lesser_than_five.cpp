//iostream para entrada e saída de dados
#include <iostream>

// namespace padrão para evitar o uso de std:: antes de cada objeto
using namespace std;

//função principal do programa
// Este programa solicita ao usuário que insira 10 números inteiros e conta quantos são menores que 5.
// Ele utiliza um loop while para coletar os números e uma variável contador para controlar o número de entradas.
// No final, exibe a quantidade de números menores que 5.
// O programa é escrito em C++ e segue o padrão C++17.
int main() {
  int number1;// Variável para armazenar o número inserido pelo usuário
  int counter = 0;// Contador para controlar o número de entradas
  int amount  = 0;// Variável para contar quantos números são menores que 5
  
  while (counter < 10) {// Loop para solicitar 10 números ao usuário
    // Solicita ao usuário que insira um número
    // O número do contador é exibido para o usuário
    // Exemplo: "Digite um número (1)", "Digite um número (2)",
    // até "Digite um número (10)"
  
    cout << "Digite um número (" << counter << ")" << endl;
    std::cin >> number1;

    if (number1 < 5) {// Se o número inserido for menor que 5, incrementa a variável amount
      amount++;
    }
    counter++;
  }

  cout << "Quantidade de Números Menores que 5: [" << amount <<  "]" << endl;// Exibe a quantidade de números menores que 5
 
  return 0;
}
//fim do programa
// Este programa é um exemplo simples de como usar loops e condicionais em C++ para processar entradas do usuário.
// Ele demonstra o uso de variáveis, loops while e condicionais if para contar e exibir informações baseadas nas entradas do usuário.
// O programa é útil para entender como manipular dados de entrada e realizar operações condicionais em C++.
// Além disso, é um bom exercício para praticar a lógica de programação e o controle de fluxo em C++.