#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	/*
	float a = 2,
	      b = 0.1234567;
	
	int d = 15;
	cout << showpos << a << endl;
	setprecision(4);
	cout << noshowpos << a+b << endl;
	setprecision(10);
	cout << scientific << b << endl;
	cout << hex << d << endl;
	*/
	float a = 7,
	      b = 3,
	      x = b/a;
	
	
	cout << "output:" << setprecision(4) << setw(3) << " " << x << setw(3) << "T:" << setw(3) << " " << setprecision(3) << x << endl;
	cout << "output1:" << setprecision(4) << setw(3) << " " << x << setw(3) << "T:" << setw(3) << " " << setprecision(5) << x << endl;
	cout << "output2:" << setprecision(4) << setw(3) << " " << x << setw(3) << "T:" << setw(3) << " " << setprecision(7) << x << endl;
	return 0;
}
