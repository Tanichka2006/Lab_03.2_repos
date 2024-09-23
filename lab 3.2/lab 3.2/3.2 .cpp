#include <iostream>  
#include <cmath>  
using namespace std;
int main()
{
	double x;
	double b;
	double c;
	double a;
	double F;
	cout << " a ="; cin >> a;
	cout << " b ="; cin >> b;
	cout << " c ="; cin >> c;
	cout << " x ="; cin >> x;
	//спосіб 1  
	if (x < 0 && b != 0)
		F = a * x * x - b * x * x;
	if (x > 0 && b == 0)
		F = x - a / x - c;
	if (!(x < 0 && b != 0) && !(x > 0 && b == 0))
		F = x + 5 / c * (x - 10);
	cout << endl;
	cout << "1) F = " << F << endl;
	//спосіб 2  
	if (x < 0 && b != 0)
		F = a * x * x - b * x * x;
	else if (x > 0 && b == 0)
		F = x - a / x - c;
	else F = x + 5 / c * (x - 10);
	cout << "2) F = " << F << endl;
	cin.get();
	return 0;
}