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
        cout << "\nEscolha o intervalo de números para o jogo: ";
        cout << "\nNúmero mínimo: ";
        cin >> min_num;
        cout << "Número máximo: ";
        cin >> max_num;

        cout << "Um número entre " << min_num << " e " << max_num << " será sorteado em segredo, você terá 7 chances para adivinhar o número!!!" << endl;

        srand(time(NULL));
        Sorteado = rand() % (max_num - min_num + 1) + min_num;


        while (Sorteado != Escolhido and i < 8)
        {
            do
            {
                cout << "\nDigite um número de " << min_num << " a " << max_num << ": ";
                cin >> Escolhido;

                if (Escolhido < min_num or Escolhido > max_num)
                {
                    cout << "Número inválido, tente novamente!" << endl;
                }
            }
            while(Escolhido < min_num or Escolhido > max_num);

            if (Sorteado > Escolhido)
            {
                cout << "Pensei num número MAIOR!" << endl;
                int diff = Sorteado - Escolhido;
                if (diff <= 5)
                {
                    cout << "Você está QUENTE!" << endl;
                }
                else if (diff <= 15)
                {
                    cout << "Você está MORNO!" << endl;
                }
                else
                {
                    cout << "Você está FRIO!" << endl;
                }
            }
            else if (Sorteado < Escolhido)
            {
                cout << "Pensei num número MENOR!" << endl;
                int diff = Escolhido - Sorteado;
                if (diff <= 5)
                {
                    cout << "Você está QUENTE!" << endl;
                }
                else if (diff <= 15)
                {
                    cout << "Você está MORNO!" << endl;
                }
                else
                {
                    cout << "Você está FRIO!" << endl;
                }
            }
            else // Sorteado == Escolhido
            {
                cout << "\nParabéns, você acertou o número!!! Não trapaceou né?..." << endl;
                vitorias++;
                if (i - 1 <= 3)
                {
                    cout << "\nUau! Você é um(a) verdadeiro(a) adivinho(a)!" << endl;
                }
                else if (i - 1 <= 5)
                {
                    cout << "\nMandou bem! Quase um(a) telepata!" << endl;
                }
                else
                {
                    cout << "\nConseguiu! A persistência é a chave!" << endl;
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
                cout << "\nNão foi dessa vez, mas não desista! A prática leva à perfeição!" << endl;
            }

        }

        cout << "\nVocê tentou: " << i - 1 << " vezes!\n";

        cout << "\nO número sorteado foi: " << Sorteado << endl;

        cout << "\nPlacar: Vitórias = " << vitorias << ", Derrotas = " << derrotas << endl;


        cout << "\nDeseja jogar novamente? Digite (1) para sim e (2) para não! ";
        cin >> replay;
    }
    while(replay == 1);


    system("cls");
    cout << "Obrigado por jogar! Pressione qualquer tecla para fechar sua sessão!" << endl;
}
