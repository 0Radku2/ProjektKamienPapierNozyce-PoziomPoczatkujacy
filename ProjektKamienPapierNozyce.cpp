#include <iostream>
#include <cstdlib>
#include <ctime>

#define KAMIEN 1
#define PAPIER 2
#define NOZYCE 3

using namespace std;

int main()
{
    srand((unsigned int) time(NULL));

    int RzutGracza = 0;
    int RzutKomputera = 0;
    bool remis = false;

    do
    {
        cout << "Wybierz swoj wybor: " << endl;
        cout << "1 = Kamien" << endl;
        cout << "2 = Papier" << endl;
        cout << "3 = Nozyce" << endl;
        cout << "Wybor: ";
        cin >> RzutGracza;
        cout << endl;

        RzutKomputera = (rand() % 3) + 1;

        if (RzutKomputera == KAMIEN)
        {
            cout << "Komputer wylosowal kamien\n";
        }
        else if (RzutKomputera == PAPIER)
        {
            cout << "Komputer wylosowal papier\n";
        }
        else if (RzutKomputera == NOZYCE)
        {
            cout << "Komputer wylosowal nozyce\n";
        }

        remis = false;

        if (RzutGracza == RzutKomputera)
        {
            remis = true;
            cout << "Remis! Zagraj jeszcze raz\n";
        }
        else if (RzutGracza == KAMIEN && RzutKomputera == NOZYCE)
        {
            cout << "Kamien pokonuje nozyce, wygrywasz!\n";
        }
        else if (RzutGracza == KAMIEN && RzutKomputera == PAPIER)
        {
            cout << "Przeciwny papier bije Twoj kamien, przegrywasz!\n";
        }
        else if (RzutGracza == PAPIER && RzutKomputera == KAMIEN)
        {
            cout << "Twoj papier bije przeciwny kamien, wygrywasz!\n";
        }
        else if (RzutGracza == PAPIER && RzutKomputera == NOZYCE)
        {
            cout << "Nozyce przeciwnika przecinaja Twoj papier, przegrywasz!\n";
        }
        else if (RzutGracza == NOZYCE && RzutKomputera == PAPIER)
        {
            cout << "Twoje nozyce przecinaja papier, wygrywasz!\n";
        }


    } while (remis == true);
    
    return 0;
}