  
#include <iostream>

using namespace std;

int main() {
	
	int dziesietnie = 0, pow = 1, rem;
	long long bin;

	cout << "Wpisz liczbe w postaci binarnej : ";
	cin >> bin;

	while(bin>0) {
		rem = bin%10;
		bin /= 10;
		dziesietnie += rem*pow;
		pow *= 2;
	}

	cout << "Podana liczba w postaci dziesietnej to : " << dziesietnie << endl;
	

	return 0;
}
