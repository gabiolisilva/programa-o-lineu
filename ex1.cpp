#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <ctime> // srand precisa da biblioteca ctime
using namespace std;

int main()
{
    int sorteado;
    int escolhido;

    setlocale(LC_ALL,"");
    system("color F1");

    // Evita que o n�mero sorteado seja sempre o mesmo a cada execu��o
    srand(time(NULL));

    // Gera um n�mero aleat�rio entre 1 e 100
    sorteado = rand() % 30 + 1;
    while(sorteado!= escolhido)
    {
       // cout << "O n�mero sorteado foi: " << sorteado;
        cout <<"\nDigite um numero de 1 a 30:" ;
        cin>> escolhido;

        if (sorteado > escolhido)
        {
            cout << "pensei em um numero maior"<< endl;
        }

        else if (sorteado < escolhido)
        {

            cout<<"pensei em um numero menor" << endl;
        }
        else
        {
            cout << "PARABENS !!!! VOCE � UM VIDENTE" << endl;
        }
    }


}



