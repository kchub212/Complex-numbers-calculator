#include "KomplexeZahl.hpp"
#include <cmath>
#include <iostream>

KomplexeZahl::KomplexeZahl()
{
    real = 0;
    imag = 0;
}

KomplexeZahl::KomplexeZahl(double r, double i):real(r),imag(i)
{
}

KomplexeZahl::~KomplexeZahl()
{
}


KomplexeZahl KomplexeZahl::operator+(const KomplexeZahl& k) const
{
    return KomplexeZahl(real + k.real, imag + k.imag);

}

KomplexeZahl KomplexeZahl::operator*(const KomplexeZahl& K) const
{
    return KomplexeZahl(real * K.real - imag * K.imag, real * K.imag + imag * K.real);
}

KomplexeZahl KomplexeZahl::operator*(double scalar) const
{

    return KomplexeZahl(scalar*real,scalar*imag);
}


void KomplexeZahl::Polarform()
{
    double beitrag = sqrt(real * real + imag * imag);
    double winkel = acos( real/beitrag);
    if (imag < 0)
    {
        std::cout << "Winkel=" << -1 * winkel <<"   "<< "Beitrag=" << beitrag << std::endl;
    }
    else
    {
        std::cout << "Winkel=" <<winkel <<"   "<< "Beitrag=" << beitrag << std::endl;

    }
     
}



std::ostream& operator<<(std::ostream& os, const KomplexeZahl& z)
{
    os << "(" << z.real << " " << z.imag << ")";
    return os;
}

std::istream& operator>>(std::istream& is, KomplexeZahl& z)
{
    try
    {
        char ch1, ch2, ch3;
        is >> ch1 >> z.real >> ch2 >> z.imag >> ch3;
        if (ch1 == '(' && ch2 == '+' && ch3 == ')')
        {
            return is;
        }
        else
        {
            throw"die Eingabe ist falsch";
        }
    }
    catch (const char* e)
    {
        std::cout << e << std::endl;
        exit(0);
    }
}


