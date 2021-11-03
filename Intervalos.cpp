#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;

int main(){
    int x;                                                       //Declara��o da vari�vel de entrada
    float g=0,e=0,o=0,r=0,ge=0,gg=0;                             //Declara��o dos contadores
    while(cin>>std::ws>>x){                                      //La�o de entrada enquanto "x" for inteiro
        gg++;                                                    //Contador da quantidade de entradas
        if (x >= 0 && x < 25) {                                  //Condicional que verifica se a vari�vel est� no intervalo
            g++;                                                 //Contador da quantidade de vari�veis no primeiro intervalo
        }else if(x>=25&&x<50){                                   //Condicional que verifica se a vari�vel est� no intervalo
            e++;                                                 //Contador da quantidade de vari�veis no segundo intervalo
        }else if(x>=50&&x<75){                                   //Condicional que verifica se a vari�vel est� no intervalo
            o++;                                                 //Contador da quantidade de vari�veis no terceiro intervalo
        }else if(x>=75&&x<100){                                  //Condicional que verifica se a vari�vel est� no intervalo
            r++;                                                 //Contador da quantidade de vari�veis no quarto intervalo
        }else{                                                   //Condicional que verifica se a vari�vel n�o est� em nenhum intervalo
            ge++;                                                //Contador da quantidade de vari�veis em nenhum intervalo
        }
    }

    std::cout<<setprecision(4)<<((g/gg)*100)<<std::endl;         //Impress�o da porcentagem de vari�veis no primeiro intervalo
    std::cout<<setprecision(4)<<((e/gg)*100)<<std::endl;         //Impress�o da porcentagem de vari�veis no segundo intervalo
    std::cout<<setprecision(4)<<((o/gg)*100)<<std::endl;         //Impress�o da porcentagem de vari�veis no terceiro intervalo
    std::cout<<setprecision(4)<<((r/gg)*100)<<std::endl;         //Impress�o da porcentagem de vari�veis no quarto intervalo
    std::cout<<setprecision(4)<<((ge/gg)*100)<<std::endl;        //Impress�o da porcentagem de vari�veis em nenhum intervalo

    return 0;
}