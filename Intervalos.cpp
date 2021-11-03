#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;

int main(){
    int x;                                                       //Declaração da variável de entrada
    float g=0,e=0,o=0,r=0,ge=0,gg=0;                             //Declaração dos contadores
    while(cin>>std::ws>>x){                                      //Laço de entrada enquanto "x" for inteiro
        gg++;                                                    //Contador da quantidade de entradas
        if (x >= 0 && x < 25) {                                  //Condicional que verifica se a variável está no intervalo
            g++;                                                 //Contador da quantidade de variáveis no primeiro intervalo
        }else if(x>=25&&x<50){                                   //Condicional que verifica se a variável está no intervalo
            e++;                                                 //Contador da quantidade de variáveis no segundo intervalo
        }else if(x>=50&&x<75){                                   //Condicional que verifica se a variável está no intervalo
            o++;                                                 //Contador da quantidade de variáveis no terceiro intervalo
        }else if(x>=75&&x<100){                                  //Condicional que verifica se a variável está no intervalo
            r++;                                                 //Contador da quantidade de variáveis no quarto intervalo
        }else{                                                   //Condicional que verifica se a variável não está em nenhum intervalo
            ge++;                                                //Contador da quantidade de variáveis em nenhum intervalo
        }
    }

    std::cout<<setprecision(4)<<((g/gg)*100)<<std::endl;         //Impressão da porcentagem de variáveis no primeiro intervalo
    std::cout<<setprecision(4)<<((e/gg)*100)<<std::endl;         //Impressão da porcentagem de variáveis no segundo intervalo
    std::cout<<setprecision(4)<<((o/gg)*100)<<std::endl;         //Impressão da porcentagem de variáveis no terceiro intervalo
    std::cout<<setprecision(4)<<((r/gg)*100)<<std::endl;         //Impressão da porcentagem de variáveis no quarto intervalo
    std::cout<<setprecision(4)<<((ge/gg)*100)<<std::endl;        //Impressão da porcentagem de variáveis em nenhum intervalo

    return 0;
}