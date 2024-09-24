#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double a; // вхідний параметр
	double b; // вхідний параметр
	double c; // вхідний параметр
	double F; // результат обчислення виразу
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	32;
		cout << "x = "; cin >> x;
	if (x+10 < 0 && b != 0)
		F = a*x*x-c*x+b;
	else
		if (x > 0 && b == 0)
			F = (x - a) / (x - c);
		else
			F = -x / a-c ;
	cout << "2) F = " << F << endl;
	cin.get();
	return 0;
}