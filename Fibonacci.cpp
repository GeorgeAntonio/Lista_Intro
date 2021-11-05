#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

std::vector<int> fib_below_n(unsigned int n) {              //Declara��o da fun��o
    std::vector<int> v;                                     //Declara��o do vetor vazio
    int test = 0;                                           //Declara��o da vari�vel de teste
    for (int i = 0; i < n; i++) {                           //La�o de preenchimento do vetor
        if (i == 0 || i == 1) {                             //Condicional que verifica se est� nas primeiras duas posi��es do vetor
            v.push_back(1);                                 //Preenchimento do vetor
        }else {                                             //Condicional que verifica se o contador est� a partir da terceira posi��o do vetor
            test = v[v.size() - 1] + v[v.size() - 2];       //Preenchimento da vari�vel test com a soma dos valores das posi��es anteriores a atual do contador
            if (test < n) {                                 //Condicional que verifica se a vari�vel test ainda � menor do que o valor de entrada
                v.push_back(test);                          //Preenchimento do vetor com o valor da vari�vel test
            }else {                                         //Condicional que verifica se a vari�vel test � maior ou igual ao valor de entrada
                break;                                      //Quebra do la�o
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
