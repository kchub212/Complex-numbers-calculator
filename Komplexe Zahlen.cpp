

#include <iostream>
#include "KomplexeZahl.hpp"
#include"KomplexND.hpp"
#include<cmath>
using namespace std;
int main()
{

    int auswahl;
    cout << "Waelen Sie ? (1 fuer die Operationen zwischen KomplexeZahlen [+,*,Skalar,winkel und Beitrag] , 2 fuer Addition zwischen zwei Vektoren von N komplexen Zahlen): ";
    cin >> auswahl;

    if (auswahl == 1)
    {

        KomplexeZahl z1, z2;
        double scalar;

        cout << "Geben Sie die erste komplexe Zahl ein, in diese form (real+imag) : ";
        cin >> z1;
        cout << "Geben Sie die zweite komplexe Zahl ein, in diese form (real+imag): ";
        cin >> z2;
        cout << "Geben Sie einen Skalarwert ein: ";
        cin >> scalar;

        cout << "Die erste komplexe Zahl ist: " << z1 << endl;
        cout << "Die zweite komplexe Zahl ist: " << z2 << endl;
        cout << "Der Skalarwert ist: " << scalar << endl;
        cout << "Die Summe der komplexen Zahlen ist: " << z1 + z2 << endl;
        cout << "Das Produkt der komplexen Zahlen ist: " << z1 * z2 << endl;
        cout << "Die Polarform der ersten komplexen Zahl ist: " << endl;
        z1.Polarform();
        cout << "Die Polarform der zweiten komplexen Zahl ist: " << endl;
        z2.Polarform();
        int wahl;
        cout << "Welche komplexe Zahl moechten Sie mit dem Skalar multiplizieren? (1 fuer die erste, 2 fuer die zweite): ";
        cin >> wahl;

        if (wahl == 1) {
            cout << "Das Ergebnis der Multiplikation der ersten komplexen Zahl mit dem Skalar ist: " << z1 * scalar << endl;
        }
        else if (wahl == 2) {
            cout << "Das Ergebnis der Multiplikation der zweiten komplexen Zahl mit dem Skalar ist: " << z2 * scalar << endl;
        }
        else {
            cout << "Ungueltige Wahl!" << endl;
        }

        return 0;
    }

    else if (auswahl == 2)
    {   
        int n;
        cout << "Geben Sie die Groesse des Vektors ein: ";
        cin >> n;
        KomplexND v1(n);
        KomplexND v2(n);
        cout << "Geben Sie die ersten " << n << " komplexen Zahlen ein: ";
        v1.Mvector();
        cout << "Geben Sie die zweiten " << n << " komplexen Zahlen ein: ";
        v2.Mvector();
        KomplexND erg = v1 + v2;
        std::cout << "Das Ergebnis der Addition ist: " << endl;
        for (int i = 0; i < n; ++i) {
            std::cout << erg.at(i) << " ";
        }
        cout << endl;
    }
    else {
        cout << "Ungueltige Wahl!" << endl;
    }
}


	





