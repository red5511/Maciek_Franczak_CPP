#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	float liczba = 1.1234567;
  int liczba2 = 10;
	cout << "Orginalna liczba " << liczba << endl;
  cout << "setprecision(5)" << setprecision(5) << liczba << endl;

  cout << "scientific " << scientific << liczba << endl;
  cout << "oct " << oct << liczba2 << endl;

	return 0;
}
