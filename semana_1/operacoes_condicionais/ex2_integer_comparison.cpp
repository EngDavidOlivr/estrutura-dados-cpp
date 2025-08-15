//iostream para entrada e saída de dados
#include <iostream>

// namespace padrão para evitar o uso de std:: antes de cada objeto
using std::cout;

//função principal do programa
int main() {
  int number1;
  int number2;
// Solicita ao usuário que insira dois números inteiros
  cout << "Digite o primeiro número: ";
  std::cin >> number1;
  cout << "Digite o segundo número: ";
  std::cin >> number2;
// Realiza comparações entre os dois números e exibe os resultados
  if (number1 == number2)
    cout << number1 << " ==  " <<  number2 << std::endl;
  if (number1 != number2)
    cout << number1 << " !=  " <<  number2 << std::endl;
  if (number1 < number2)
    cout << number1 << " <  " <<  number2 << std::endl;
  if (number1 > number2)
    cout << number1 << " >  " <<  number2 << std::endl;

  if (number1 <= number2)
    cout << number1 << " <=  " <<  number2 << std::endl;;
  if (number1 >= number2)
    cout << number1 << " >=  " <<  number2 << std::endl;;

  return 0;
}
