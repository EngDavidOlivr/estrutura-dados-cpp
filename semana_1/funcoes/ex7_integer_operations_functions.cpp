//esse programa realiza operações matemáticas básicas entre dois números inteiros por meio de funções
//as operações são: soma, subtração, multiplicação, divisão inteira, divisão real
//e resto da divisão
#include <iostream>
//declaração da função de soma
int sum(int number1, int number2){
  return number1 + number2;// retorna a soma dos dois números
}

int sub(int number1, int number2){//declaração da função de subtração
  return number1 - number2;// retorna a subtração dos dois números
}

int mul(int number1, int number2){//declaração da função de multiplicação
  return number1 * number2;// retorna a multiplicação dos dois números
}

int idiv(int number1, int number2){//declaração da função de divisão inteira
  return number1 / number2;// retorna a divisão inteira dos dois números
}

float fdiv(int number1, int number2){//declaração da função de divisão real
  return (float)number1 / (float)number2;// retorna a divisão real dos dois números
}

int res(int number1, int number2){//declaração da função de resto da divisão
  return number1 % number2;// retorna o resto da divisão dos dois números
}

int main() {// função principal do programa 
  int number1;// declaração da variável para o primeiro número
  int number2;// declaração da variável para o segundo número

  std::cout << "Digite o primeiro número: ";// solicita ao usuário o primeiro número
  std::cin >> number1;// lê o primeiro número digitado pelo usuário

  std::cout << "Digite o segundo número: ";// solicita ao usuário o segundo número
  std::cin >> number2;// lê o segundo número digitado pelo usuário

  std::cout << "Soma:            " << sum(number1, number2)  << std::endl;// exibe o resultado da soma
  std::cout << "Subtração:       " << sub(number1, number2)  << std::endl;// exibe o resultado da subtração
  std::cout << "Multiplicação:   " << mul(number1, number2)  << std::endl;// exibe o resultado da multiplicação
  std::cout << "Divisão Inteira: " << idiv(number1, number2)  << std::endl;// exibe o resultado da divisão inteira
  std::cout << "Divisão Real:    " << fdiv(number1, number2) << std::endl;// exibe o resultado da divisão real
  std::cout << "Resto:           " << res(number1, number2)  << std::endl;// exibe o resultado do resto da divisão

  return 0;
}
