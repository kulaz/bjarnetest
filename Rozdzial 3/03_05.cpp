#include "std_lib_facilities.h"

int main()
{

	cout << "Podaj dwie liczby calkowite odzielone spacja:\n";
	double val1, val2;
	cin >> val1 >> val2;
	double bigger = (val1>val2) ? val1 : val2;
	cout << "Wieksza liczba: " << bigger << endl;
	double smaller = (val1<val2) ? val1 : val2;
	cout << "Mniejsza liczba: " << smaller << endl;
	cout << "Suma: " << val1+val2 << endl;
	cout << "Roznica: " << bigger - smaller << endl;
	cout << "Iloczyn: " << val1*val2 << endl;
	cout << smaller << " stanowi "
		 << (smaller/bigger) * 100 
		 << "% z " << bigger << endl;

	return 0;
}
