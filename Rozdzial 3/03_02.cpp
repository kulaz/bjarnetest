#include "std_lib_facilities.h"

int main()
{
	cout << "Witaj, bede zamienial mile na kilometry.\n";
	cout << "Podaj liczbe mil do zamiany"
			" (podaj wartosc mniejsza lub rowna 0 zeby zakonczyc):\n";
	double mile = 0;
	while(cin >> mile && mile > 0)
	{
		cout << mile << " w milach wynosi "
			<< mile * 1.609 << " w kilometrach.\n";
	}
	
	cout << "Do zobaczenia!\n";
		
	
	return 0;
}
