#include <iostream>
using namespace std;

namespace namespa {
	int x = 1;

	void fun() {
		cout << "hello world";
	}
}
using namespace namespa;

int main() {

	int a = 3;
	int var;
	var = namespa::x + a;
	cout << var << endl;
	namespa::fun();


	return 0;
}