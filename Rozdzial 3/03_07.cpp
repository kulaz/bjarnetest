#include "std_lib_facilities.h"

int main()
{

	cout << "Podaj trzy imiona odzielone spacja:\n";
	string val1, val2, val3;
	cin >> val1 >> val2 >> val3;
	string smallest = val1;
	string biggest = val1;
	
	smallest = smallest < val2 ? smallest : val2;
	smallest = smallest < val3 ? smallest : val3;
	
	biggest = biggest > val2 ? biggest : val2;
	biggest = biggest > val3 ? biggest : val3;
	
	string medium = smallest;
	if(val1 != smallest && val1 != biggest)
		medium = val1;
	if(val2 != smallest && val2 != biggest)
		medium = val2;
	if(val3 != smallest && val3 != biggest)
		medium = val3;
		
	if(val1 == biggest && val2 == biggest)
		medium = biggest;
	if(val2 == biggest && val3 == biggest)
		medium = biggest;
	if(val1 == biggest && val3 == biggest)
		medium = biggest;
		
	cout << smallest << ", " << medium << ", " << biggest << ".\n";




	return 0;
}
