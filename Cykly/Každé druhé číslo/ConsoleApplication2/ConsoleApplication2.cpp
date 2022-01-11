// ConsoleApplication2.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>
using namespace std;
int main()

{ 
	int x;
	int y;
	cout << "zadaj x" << endl;
	cin >> x;
	cout << "zadaj y" << endl;
	cin >> y;
	while (x <= y) {
		cout << x << endl;
	x++;
	++x;
}
	return 0;
}