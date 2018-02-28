#include "std_lib_facilities.h"

int main()
{

	cout << "Podaj znak i liczby oddzielone spacj¹,"
			" na ktorych chcesz wykonac operacje:\n";
	string operation;
	double liczba1, liczba2;
	cin >> operation >> liczba1 >> liczba2;
	
	if(operation=="+" || operation=="plus")
	{
		cout << "Wynik dodawania: " << liczba1 + liczba2 << endl;
	}
	else if(operation=="-" || operation=="minus")
	{
		cout << "Wynik odejmowania: " << liczba1 - liczba2 << endl;
	}
	else if(operation=="*" || operation=="mno")
	{
		cout << "Wynik mnozenia: " << liczba1 * liczba2 << endl;
	}
	else if(operation=="/" || operation=="dziel")
	{
		cout << "Wynik dzielenia: " << liczba1 / liczba2 << endl;
	}
	else
	{
		cout << "Blad odczytu danych!\n";
	}
	

	return 0;
}
