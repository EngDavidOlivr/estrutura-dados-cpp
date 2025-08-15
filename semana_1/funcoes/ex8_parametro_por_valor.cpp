// ex8_parametro_por_valor.cpp
// Este exemplo demonstra o uso de parâmetros por valor em C++
// As variáveis a e b são passadas por valor, portanto, as alterações dentro da
// função não afetam as variáveis originais no main.

//#include <iostream> para incluir a biblioteca de entrada e saída padrão
#include <iostream>
using namespace std; // declaração do namespace padrão para evitar o uso de std:: antes de cada função

void troca_por_valor(int a, int b){ // função que troca os valores de a e b, mas não afeta as variáveis originais
        int temp;// variável temporária para armazenar o valor de a
        temp=a;
        a=b;// atribui o valor de b a a
        b=temp;
}
int main(){// função principal do programa
        // declaração de duas variáveis inteiras a e b
        int a=2, b=3;
        cout<<"Antes: a = "<<a<<" b = " << b<<endl;
        troca_por_valor(a,b);
        cout<<"Depois: a = "<<a<<" b = "<< b << endl;   
        return 0;// retorna 0 para indicar que o programa terminou com sucesso
}
// fim do programa
// A saída mostrará que os valores de a e b não mudaram após a chamada da função troca_por_valor,
// pois os parâmetros foram passados por valor, não por referência.