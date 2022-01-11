// ConsoleApplication1.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>
using namespace std;
int main()
{
	int cislo;
	cout << "Zadaj zaporné cislo " << endl;
	cin >> cislo;
	if (cislo < 0) {
		while (cislo < 0) {
			cout << cislo << endl;
			++cislo;
		}
	}
	else {
		cout << "Nezadal si záporné číslo" << endl;
	}

		return 0;
	}