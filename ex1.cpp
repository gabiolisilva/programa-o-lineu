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

    // Evita que o número sorteado seja sempre o mesmo a cada execução
    srand(time(NULL));

    // Gera um número aleatório entre 1 e 100
    sorteado = rand() % 30 + 1;
    while(sorteado!= escolhido)
    {
       // cout << "O número sorteado foi: " << sorteado;
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
            cout << "PARABENS !!!! VOCE É UM VIDENTE" << endl;
        }
    }


}



