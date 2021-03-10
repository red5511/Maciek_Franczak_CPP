#include <iostream>
#include <cstring>
#include <string>
using namespace std;

string nanipulacja(string a) {
	a = "Poczaketk " + a + " koniec";
	return a;
}

int main() {

	string var = "wiem ze nic nie wiem", var2 = "wiem ze nic nie wiem";
	var = nanipulacja(var);
	cout << var << endl;

	if (var == var2)cout << "rowne" << endl;
	else cout << "nierowne";


	return 0;
}