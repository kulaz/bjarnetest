#include "std_lib_facilities.h"

int main()
{

	cout << "Podaj nazwe liczby (wpisz q zeby skonczyc):\n";
	string liczba;
	while(cin>>liczba && liczba != "q")
	{
		if(liczba=="zero")
		{
			cout << "0\n";
		}
		else if(liczba=="jeden")
		{
			cout << "1\n";
		}
		else if(liczba=="dwa")
		{
			cout << "2\n";
		}
		else if(liczba=="trzy")
		{
			cout << "3\n";
		}
		else if(liczba=="cztery")
		{
			cout << "4\n";
		}
		else
		{
			cout << "Nie znam takiej liczby!\n";
		}
	}

	return 0;
}
