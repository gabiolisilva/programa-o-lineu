#include <iostream>
#include <locale.h>
#include <ctime>
using namespace std;

int main()
{
    int Sorteado = 0;
    int Escolhido = 0;
    int i = 0;
    int replay = 0;
    int vitorias = 0;
    int derrotas = 0;
    int min_num = 1;
    int max_num = 50;

    setlocale(LC_ALL,"");
    system("color F1");


    do
    {
        i = 1;
        system("cls");

        cout << "                                    *******" << endl;
        cout << "                                    *                 *" << endl;
        cout << "                                    *      O JOGO     *" << endl;
        cout << "                                    *                 *" << endl;
        cout << "                                    *******" << endl;

        cout << "Bem-vindo ao JOGO!\n";
        cout << "\nEscolha o intervalo de n�meros para o jogo: ";
        cout << "\nN�mero m�nimo: ";
        cin >> min_num;
        cout << "N�mero m�ximo: ";
        cin >> max_num;

        cout << "Um n�mero entre " << min_num << " e " << max_num << " ser� sorteado em segredo, voc� ter� 7 chances para adivinhar o n�mero!!!" << endl;

        srand(time(NULL));
        Sorteado = rand() % (max_num - min_num + 1) + min_num;


        while (Sorteado != Escolhido and i < 8)
        {
            do
            {
                cout << "\nDigite um n�mero de " << min_num << " a " << max_num << ": ";
                cin >> Escolhido;

                if (Escolhido < min_num or Escolhido > max_num)
                {
                    cout << "N�mero inv�lido, tente novamente!" << endl;
                }
            }
            while(Escolhido < min_num or Escolhido > max_num);

            if (Sorteado > Escolhido)
            {
                cout << "Pensei num n�mero MAIOR!" << endl;
                int diff = Sorteado - Escolhido;
                if (diff <= 5)
                {
                    cout << "Voc� est� QUENTE!" << endl;
                }
                else if (diff <= 15)
                {
                    cout << "Voc� est� MORNO!" << endl;
                }
                else
                {
                    cout << "Voc� est� FRIO!" << endl;
                }
            }
            else if (Sorteado < Escolhido)
            {
                cout << "Pensei num n�mero MENOR!" << endl;
                int diff = Escolhido - Sorteado;
                if (diff <= 5)
                {
                    cout << "Voc� est� QUENTE!" << endl;
                }
                else if (diff <= 15)
                {
                    cout << "Voc� est� MORNO!" << endl;
                }
                else
                {
                    cout << "Voc� est� FRIO!" << endl;
                }
            }
            else // Sorteado == Escolhido
            {
                cout << "\nParab�ns, voc� acertou o n�mero!!! N�o trapaceou n�?..." << endl;
                vitorias++;
                if (i - 1 <= 3)
                {
                    cout << "\nUau! Voc� � um(a) verdadeiro(a) adivinho(a)!" << endl;
                }
                else if (i - 1 <= 5)
                {
                    cout << "\nMandou bem! Quase um(a) telepata!" << endl;
                }
                else
                {
                    cout << "\nConseguiu! A persist�ncia � a chave!" << endl;
                }
                cout << "\n*******\n";
                cout << "*    VITORIA!!!   *\n";
                cout << "*******\n";
            }

            i++;

            if (i == 8 and Sorteado != Escolhido)
            {
                cout << "\nSuas chances acabaram... Tente novamente :(" << endl;
                derrotas++;
                cout << "\nN�o foi dessa vez, mas n�o desista! A pr�tica leva � perfei��o!" << endl;
            }

        }

        cout << "\nVoc� tentou: " << i - 1 << " vezes!\n";

        cout << "\nO n�mero sorteado foi: " << Sorteado << endl;

        cout << "\nPlacar: Vit�rias = " << vitorias << ", Derrotas = " << derrotas << endl;


        cout << "\nDeseja jogar novamente? Digite (1) para sim e (2) para n�o! ";
        cin >> replay;
    }
    while(replay == 1);


    system("cls");
    cout << "Obrigado por jogar! Pressione qualquer tecla para fechar sua sess�o!" << endl;
}
