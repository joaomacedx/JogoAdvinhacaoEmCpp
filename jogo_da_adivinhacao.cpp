#include <iostream>
#include <time.h>
#include <cmath>
using namespace std;

int main (){
		 cout<< "************************************" << endl;
		 cout<< "*Bem-vindos ao jogo de adivinhacao!*" << endl;
		 cout<< "************************************" << endl;
		 
		 cout << "!VOCE INICIA O JOGO COM 1000 PONTOS!" << endl;
		 
     int numerosecreto = 42;
     int tentativas = 0;
     bool naoAcertou = true; 
     
     double pontos = 1000.0;
    
		 while (naoAcertou)
		 {
		 	 tentativas++;
		 	 int chute;
		 	 cout << "Tentativa " << tentativas << endl;
		 	 cout << "Chute um numero de 1 a 100" << endl;
             cin >> chute;
             
             double pontosPerdidos = abs(chute-numerosecreto)/2.0;
             pontos = pontos - pontosPerdidos;
             
             cout << "O valor do seu chute e: " << chute << endl;
             bool acertou = chute == numerosecreto;
             bool menor = chute < numerosecreto;
		 	 if (acertou)
			  {
         	cout << "Parabens! Voce acertou o numero secreto" << endl;
         	naoAcertou = false;
		 	}
			 else if(menor)
		 	{
		 	cout << "Voce errou, o seu chute foi menor que o numero secreto!" << endl;
		 	}
		 	else
		 	{
		 	cout << "Voce errou, o seu chute foi maior que o numero secreto!" << endl;
		 	}
		 }
     
     cout << "FIM DE JOGO!!" <<endl;
     cout << "Voce acertou em " << tentativas <<  " tentativas, e sua pontuacao foi " << pontos << " pontos!!"<<endl;
     
}
