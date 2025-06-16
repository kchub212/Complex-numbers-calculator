#include "KomplexND.hpp"

KomplexND::KomplexND(int l):N(l),v(l)
{
}

int KomplexND::size()
{
	return N;
}

KomplexeZahl& KomplexND::at(int i)
{
	try
	{
		if (i<N)
		{
			return v.at(i);
		}
		else
		{
			throw"das index ist groesser als die maechtigkeit von dem vector";
		}

	}
	catch (const char* e)
	{
		std::cout << e << std::endl;
	}
}

KomplexND KomplexND::operator+(KomplexND& v1)
{
	try
	{
		if (N==v1.N)
		{
			KomplexND result(N);
			for (size_t i = 0; i < N; ++i)
			{
				result.v[i] = v[i] + v1.v[i];
			}
			return result;
		}
		else
		{
			throw"Beide Vectoren haben unterschiedliche Laenge";
		}
	}
	catch (const char* e)
	{
		std::cout << e << std::endl;
		exit(0);

	}
}

void KomplexND::Mvector()
{
	KomplexeZahl x;
	for (int i = 0; i < size(); ++i)
	{
		std::cin >> x;
		at(i) = x;
	}
}

