#include <iostream>
#include <time.h>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <locale.h>
using namespace std;

int main (){
	 int tentativas = 0;
	 srand(time(NULL));
	 int numeroSecreto = rand() % 100;
     bool naoAcertou = true; 
     double pontos = 1000.0;
     int numeroDeTentativas;
     
	     setlocale (LC_ALL, "portuguese");
		 cout<< "*************************************" << endl;
		 cout<< "*Bem-vindos ao jogo de adivinhação!**" << endl;
		 cout<< "*************************************" << endl;
		 cout<< "*VOCÊ INICIA O JOGO COM 1000 PONTOS!*" << endl;
		 cout<< "*************************************" << endl;
		 cout<< "***ESCOLHA O NÍVEL DE DIFICULDADE!***" << endl;
		 cout<< "  FÁCIL [F] | MÉDIO [M] DIFÍCIL [D]  " << endl;
		 char nivel;
		 cin >> nivel;
		 switch (nivel)
		 {
		 	case 'F' :
		 		numeroDeTentativas = 20;
		 		break;
		 	
		 	case 'M' :
		 		numeroDeTentativas = 10;
		 		break;
		 	
		 	case 'D' :
		 		numeroDeTentativas = 5;
		 		break;
		 }
		 
		 for (tentativas = 1; tentativas <= numeroDeTentativas ; tentativas++){
		 	int chute;
		 	 cout << "Tentativa " << tentativas << endl;
		 	 cout << "Chute um número de 1 a 100" << endl;
             cin >> chute;
             if(chute<=0)
			 {
			 	cout << "Você não pode chutar números negativos" <<endl;
			 	tentativas--; 
			 }
             
             double pontosPerdidos = abs(chute-numeroSecreto)/2.0;
             pontos = pontos - pontosPerdidos;
             bool acertou = chute == numeroSecreto;
             bool menor = chute < numeroSecreto;
		 	 if (acertou)
			  {
         	cout << "Parabéns! Você acertou o número secreto" << endl;
         	naoAcertou = false;
         	break;
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
     if (naoAcertou)
	 {
      cout << "Você perdeu, tente novamente!" << endl;	
	 }
	 else 
	 {
	 cout.precision(2);
     cout << fixed;
     cout << "Você acertou em " << tentativas <<  " tentativas, e sua pontuação foi " << pontos << " pontos!!"<<endl;
     }
}
