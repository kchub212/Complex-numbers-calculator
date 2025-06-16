#pragma once
#include"KomplexeZahl.hpp"
#include<vector>
#include<iostream>
class KomplexND
{
private:
	int N;
	std::vector<KomplexeZahl> v;
public:
	KomplexND(int l);
	int size();
	KomplexeZahl& at(int i);
	KomplexND operator+(KomplexND& v);
	void Mvector();
	
};

