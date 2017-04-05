#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int x;
    int turno = 1;
    int f = 0;
    int p =0;
    int user = 0;
    srand(time(0));
    x = (1000+rand()%(10000-1000));
    int a = (x/1000);
    int b = (x-(a*1000))/100;
    int c = (x-(a*1000 + b*100))/10;
    int d = (x-(a*1000 + b*100 + c*10));
    int y[4] = {(a), (b), (c), (d)};

    cout << "Bienvenido a Punto y Fama" << endl;

    for(int i = 0; i <=10; i++)
    {
        cout << "Turno: " << turno << " Famas: " << f << " Puntos: " << p << endl;
        cout << "Introduzca el numero: ";
        cin >> user;
        int aa = user/1000;
        int bb = (user-(aa*1000))/100;
        int cc = (user-(aa*1000 + bb*100))/10;
        int dd = (user-(aa*1000 + bb*100 + cc*10));
        int userS[4] = {(aa), (bb), (cc), (dd)};

        for(int iterador = 0; iterador <= 3; iterador++)
        {
            if(userS[iterador] == y[iterador])
            {
                f++;
            }
            else if(userS[iterador] != y[iterador])
            {
                p++;
            }
        }

        if(f >= 4)
        {
            cout << "\nFelicidades, ha ganado el juego de Fama y Punto" << endl;
            system("exit");
            break;
        }
        if(p >= 4)
        {
            cout << "\nHa perdido el juego de Fama y Punto" << endl;
            system("exit");
            break;
        }

        turno++;
        system("CLS");

    }

}
