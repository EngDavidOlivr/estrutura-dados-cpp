//iostream é a biblioteca padrão de entrada e saída 
#include <iostream>

//std é o namespace padrão da biblioteca C++
using namespace std;

//função principal do programa
int main() {

  int number;
  int valores[10];
  int sum = 0;
  
  //for para repetir a leitura dos números inteiros 10 vezes
  for (int count = 0; count < 10; count++) {
  
    cout << "Insira um novo número: " << endl;
    cin >> number;
    
    sum += number;
    valores[count] = number;

  }  
//fim do for 
//calcula a média e a variância dos números lidos
  float average  = (float)sum/10.0;
  float variance = 0.0;
  //for para calcular a variância
  for (int count = 0; count < 10; count++) {
    int   value  = valores[count];
    float term   = (float)value - average;
    variance    += term*term;
  }
  //fim do for 
  variance = variance /10;//calcula a variância
//imprime o resultado da média e da variância
  cout << "A média da série é: "     << average << endl;
  cout << "A variância da série é: " << variance << endl;
 
  return 0;
}
