#include <iostream>
#include <time.h>
#include <cmath>
#include <locale.h>
using namespace std;

int main (){
	     setlocale (LC_ALL, "portuguese");
		 cout<< "************************************" << endl;
		 cout<< "*Bem-vindos ao jogo de adivinhação!*" << endl;
		 cout<< "************************************" << endl;
		 
		 cout << "VOCÊ INICIA O JOGO COM 1000 PONTOS" << endl;
		 
     int numerosecreto = 42;
     int tentativas = 0;
     bool naoAcertou = true; 
     
     double pontos = 1000.0;
    
		 while (naoAcertou)
		 {
		 	 tentativas++;
		 	 int chute;
		 	 cout << "Tentativa " << tentativas << endl;
		 	 cout << "Chute um número de 1 a 100" << endl;
             cin >> chute;
             
             double pontosPerdidos = abs(chute-numerosecreto)/2.0;
             pontos = pontos - pontosPerdidos;
             
             cout << "O valor do seu chute é: " << chute << endl;
             bool acertou = chute == numerosecreto;
             bool menor = chute < numerosecreto;
		 	 if (acertou)
			  {
         	cout << "Parabéns! Você acertou o número secreto" << endl;
         	naoAcertou = false;
		 	}
			 else if(menor)
		 	{
		 	cout << "Você errou, o seu chute foi menor que o número secreto!" << endl;
		 	}
		 	else
		 	{
		 	cout << "Você errou, o seu chute foi maior que o número secreto!" << endl;
		 	}
		 }
     
     cout << "FIM DE JOGO!!" <<endl;
     cout.precision(2);
     cout << fixed;
     cout << "Você acertou em " << tentativas <<  " tentativas, e sua pontuação foi " << pontos << " pontos!!"<<endl;
     
}
