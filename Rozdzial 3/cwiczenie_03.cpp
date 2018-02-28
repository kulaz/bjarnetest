#include "std_lib_facilities.h"

int main()
{
	cout << "Podaj imie (i nacisnij klawisz Enter):\n";
	string first_name;
	cin >> first_name;
	cout << "Witaj, " << first_name << "!\n";
	cout << "Podaj imie osoby, do ktorej chcesz napisac:\n";
	cin >> first_name;
	cout << "Drogi " << first_name << ",\n"
			"	Co tam u ciebie? U mnie wszystko wporzadku."
			" Ucze sie programowac i robie niebotyczne postepy.\n";
	cout << "Podaj imie innego przyjaciela:\n";
	string friend_name;
	cin >> friend_name;
	cout << "Widziales sie ostatnio z " << friend_name << "?\n";
	cout << "Wprowadz litere 'm', jesli przyjaciel jest mezczyzna"
			" albo 'k', jesli jest kobieta:\n";
	char friend_sex = '0';
	cin >> friend_sex;
	if(friend_sex == 'm')
	{
		cout << "Jesli zobaczysz " << friend_name
		<< ", popros go, aby do mnie zadzwonil.\n";
	}
	else if(friend_sex == 'k')
	{
		cout << "Jesli zobaczysz " << friend_name
		<< ", popros ja, aby do mnie zadzwonila.\n";
	}
	cout << "Podaj wiek odbiorcy listu: \n";
	int age;
	cin >> age;
	if(age <= 0 || age >= 110)
	{
		cout << "Chyba zartujesz!\n";
	}
	else
	{
		cout << "Podobno miales urodziny i masz juz " << age << " lat.\n";
	}
	if(age==12)
	{
		cout << "W przyszlym roku bedziesz miec " << age+1 << " lat.\n";
	}
	else if (age == 17)
	{
		cout << "W przyszlym roku bedziesz mogl glosowac.\n";	
	}
	else if (age==70)
	{
		cout << "Zycze milego spedzanai czasu na emeryturze.\n";
	}
	cout << "Pozdrawiam, \n\nWojtek Balaban\n";
	
	return 0;
}
