#pragma once
#include <ostream>
class KomplexeZahl
{
private :
	double  real;
	double  imag;
public :
	KomplexeZahl();
	KomplexeZahl(double r, double i);
	~KomplexeZahl();
	KomplexeZahl operator+(const KomplexeZahl& K) const;
	KomplexeZahl operator*(const KomplexeZahl& K) const;
	KomplexeZahl operator*(double scalar) const;
	void Polarform();
	friend std::ostream& operator<<(std::ostream& os, const KomplexeZahl& z);
	friend std::istream& operator>>(std::istream& is, KomplexeZahl& z);
	
};

