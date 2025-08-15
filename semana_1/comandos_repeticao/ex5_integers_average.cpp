//iostream é a biblioteca padrão de entrada e saída
#include <iostream>

//std é o namespace padrão da biblioteca C++ 
using namespace std;

//função principal do programa
int main() {
  int count;
  int number;
  int sum;
  do {//do while para repetir a leitura dos números inteiros enquanto o número for diferente de 0
     if (count == 0) {
       sum = 0;
       count = 0;
     }
    cout << "Insira um novo número: " << endl;
    cin >> number;
    
    sum += number;
    count++;
  }  while (number != 0);

  float average = (float)sum/(float)(count-1);//calcula a média dos números lidos, desconsiderando o 0
  cout << "A média da série é: " << average << endl;//imprime o resultado da média
 
  return 0;//indica que o programa terminou corretamente
}
//fim do programa