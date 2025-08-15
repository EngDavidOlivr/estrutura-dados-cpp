//iostream é a biblioteca padrão de entrada e saída
#include <iostream>

//std é o namespace padrão da biblioteca C++
using namespace std;

//função principal do programa
int main() {
  int total;
//for para repetir a soma dos números pares de 2 a 20
  for (int number = 2; number <= 20; number += 2)
    total += number;

  cout << "A soma da série é" << total << endl;//imprime o resultado da soma
 
  return 0;
}
//fim do programa