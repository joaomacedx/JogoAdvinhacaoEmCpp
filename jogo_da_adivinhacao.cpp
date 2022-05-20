#include <iostream>
#include <time.h>
#include <cmath>
#include <locale.h>
using namespace std;

int main (){
	     setlocale (LC_ALL, "portuguese");
		 cout<< "************************************" << endl;
		 cout<< "*Bem-vindos ao jogo de adivinha��o!*" << endl;
		 cout<< "************************************" << endl;
		 
		 cout << "VOC� INICIA O JOGO COM 1000 PONTOS" << endl;
		 
     int numerosecreto = 42;
     int tentativas = 0;
     bool naoAcertou = true; 
     
     double pontos = 1000.0;
    
		 while (naoAcertou)
		 {
		 	 tentativas++;
		 	 int chute;
		 	 cout << "Tentativa " << tentativas << endl;
		 	 cout << "Chute um n�mero de 1 a 100" << endl;
             cin >> chute;
             
             double pontosPerdidos = abs(chute-numerosecreto)/2.0;
             pontos = pontos - pontosPerdidos;
             
             cout << "O valor do seu chute �: " << chute << endl;
             bool acertou = chute == numerosecreto;
             bool menor = chute < numerosecreto;
		 	 if (acertou)
			  {
         	cout << "Parab�ns! Voc� acertou o n�mero secreto" << endl;
         	naoAcertou = false;
		 	}
			 else if(menor)
		 	{
		 	cout << "Voc� errou, o seu chute foi menor que o n�mero secreto!" << endl;
		 	}
		 	else
		 	{
		 	cout << "Voc� errou, o seu chute foi maior que o n�mero secreto!" << endl;
		 	}
		 }
     
     cout << "FIM DE JOGO!!" <<endl;
     cout.precision(2);
     cout << fixed;
     cout << "Voc� acertou em " << tentativas <<  " tentativas, e sua pontua��o foi " << pontos << " pontos!!"<<endl;
     
}
