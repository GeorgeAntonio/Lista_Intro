#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
	int c= 0,num,i=0;							//Declaração das variáveis
	while(i<5){									//Laço que determina a quantidade de entradas
		std::cin>>num;							//Entradas das variáveis
		if(num<0){								//Condicional que verifica se a variável é negativa
			c++;								//Contador de quantas entradas eram negativas
		}
		i++;									//Contador de entradas
	}
	std::cout<<c<<std::endl;	    //Impressão do total de entradas com valor negativo
}