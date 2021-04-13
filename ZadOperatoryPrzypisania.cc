#include <iostream>

using namespace std;

void funkcja1() {
	int var1 = 2;
	int var2 = 2;

	cout << var2*++var1 * 2 << endl;

}

void funkcja2() {
	int var1 = 2;

	var1 *= 10;
	var1 /= 2;

	cout << var1 << endl;
}


int main() {
	
	cout << "Funkcja 1:" << endl;
	funkcja1();
	cout << "Funkcja 2:" << endl;
	funkcja2();

	return 0;
}
