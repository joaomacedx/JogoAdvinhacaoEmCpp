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
		 cout<< "*Bem-vindos ao jogo de adivinha��o!**" << endl;
		 cout<< "*************************************" << endl;
		 cout<< "*VOC� INICIA O JOGO COM 1000 PONTOS!*" << endl;
		 cout<< "*************************************" << endl;
		 cout<< "***ESCOLHA O N�VEL DE DIFICULDADE!***" << endl;
		 cout<< "  F�CIL [F] | M�DIO [M] DIF�CIL [D]  " << endl;
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
		 	 cout << "Chute um n�mero de 1 a 100" << endl;
             cin >> chute;
             if(chute<=0)
			 {
			 	cout << "Voc� n�o pode chutar n�meros negativos" <<endl;
			 	tentativas--; 
			 }
             
             double pontosPerdidos = abs(chute-numeroSecreto)/2.0;
             pontos = pontos - pontosPerdidos;
             bool acertou = chute == numeroSecreto;
             bool menor = chute < numeroSecreto;
		 	 if (acertou)
			  {
         	cout << "Parab�ns! Voc� acertou o n�mero secreto" << endl;
         	naoAcertou = false;
         	break;
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
     if (naoAcertou)
	 {
      cout << "Voc� perdeu, tente novamente!" << endl;	
	 }
	 else 
	 {
	 cout.precision(2);
     cout << fixed;
     cout << "Voc� acertou em " << tentativas <<  " tentativas, e sua pontua��o foi " << pontos << " pontos!!"<<endl;
     }
}
