#include <iostream>
#include <time.h>
using namespace std;

int main (){
		 cout<< "************************************" << endl;
		 cout<< "*Bem-vindos ao jogo de adivinhacao!*" << endl;
		 cout<< "************************************" << endl;
		 
		 
     int numerosecreto = 42;
     int tentativas = 0;
     // int chute;
         //cout << "Chute um numero de 1 a 100" << endl;
         //cin >> chute;
         //cout << "O valor do seu chute e: " << chute << endl;
         
         //bool acertou = chute == numerosecreto;
         //bool menor = chute < numerosecreto;
         // if (acertou){
         // 	cout << "Parabens! Voce acertou o numero secreto" << endl;
		 // }
		 // else if(menor){
		 // 	cout << "Voce errou, o seu chute foi menor que o numero secreto!" << endl;
		 // }
		 //else{
		 //	cout << "Voce errou, o seu chute foi maior que o numero secreto!" << endl;
		 //}
		 bool naoAcertou = true; 
		 while (naoAcertou)
		 {
		 	 tentativas++;
		 	 int chute;
		 	 cout << "Tentativa " << tentativas << endl;
		 	 cout << "Chute um numero de 1 a 100" << endl;
             cin >> chute;
             cout << "O valor do seu chute e: " << chute << endl;
             bool acertou = chute == numerosecreto;
             bool menor = chute < numerosecreto;
		 	 if (acertou)
			  {
         	cout << "Parabens! Voce acertou o numero secreto" << endl;
         	naoAcertou = false;
         	//break;
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
     cout << "Voce acertou em " << tentativas <<  " tentativas" <<endl;
}
