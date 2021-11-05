#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

std::vector<int> fib_below_n(unsigned int n) {              //Declaração da função
    std::vector<int> v;                                     //Declaração do vetor vazio
    int test = 0;                                           //Declaração da variável de teste
    for (int i = 0; i < n; i++) {                           //Laço de preenchimento do vetor
        if (i == 0 || i == 1) {                             //Condicional que verifica se está nas primeiras duas posições do vetor
            v.push_back(1);                                 //Preenchimento do vetor
        }else {                                             //Condicional que verifica se o contador está a partir da terceira posição do vetor
            test = v[v.size() - 1] + v[v.size() - 2];       //Preenchimento da variável test com a soma dos valores das posições anteriores a atual do contador
            if (test < n) {                                 //Condicional que verifica se a variável test ainda é menor do que o valor de entrada
                v.push_back(test);                          //Preenchimento do vetor com o valor da variável test
            }else {                                         //Condicional que verifica se a variável test é maior ou igual ao valor de entrada
                break;                                      //Quebra do laço
            }
        }
    }
    return v;                                               //Retorna o vetor preenchido
}

int main(){
    int n;
    std::vector<int> v;  
    std::cin >> n;
    v = fib_below_n(n);
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << "\n";
    }
    return 0;
}
