#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
	int c= 0,num,i=0;							//Declara��o das vari�veis
	while(i<5){									//La�o que determina a quantidade de entradas
		std::cin>>num;							//Entradas das vari�veis
		if(num<0){								//Condicional que verifica se a vari�vel � negativa
			c++;								//Contador de quantas entradas eram negativas
		}
		i++;									//Contador de entradas
	}
	std::cout<<c<<std::endl;	    //Impress�o do total de entradas com valor negativo
}