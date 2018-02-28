#include "std_lib_facilities.h"

int main()
{

	cout << "Podaj liczbe calkowita (podaj liczbe 0 zeby skonczyc):\n";
	int liczba;
	while(cin>>liczba && liczba != 0)
	{
		if(liczba%2==0)
		{
			cout << "Liczba " << liczba << " jest parzysta.\n";
		}
		else
		{
			cout << "Liczba " << liczba << " nie jest parzysta.\n";

		}
	}

	return 0;
}
