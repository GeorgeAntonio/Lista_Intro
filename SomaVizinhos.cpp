#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int m,n,t,c;                        //Declaração das variáveis
    while(std::cin>>std::ws>>m>>n){     //Recebimento das entradas, enquanto forem inteiros
        if(n>=0){                       //Condicional que verifica se o valor de partida é positivo ou nulo
            for(c=m,t=0;c<n+m;c++){     //Laço de repetição enquanto o contador for menor do que a soma das entradas
                t+=c;                   //Somatorio do contador em um total
            }
        }else{                          //Condicional que verifica se o valor de partida é negativo
            for(c=m,t= 0;c>n+m;c--){    //Laço de repetição enquanto o contador for maior do que a soma das entradas
                t-=(c*-1);              //Decrementador do contador em um total para numeros negativos
            }
        }
        std::cout<<t<<std::endl;        //Impressão do resultado
    }
}