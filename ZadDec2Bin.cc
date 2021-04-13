#include <iostream>

using namespace std;

int main() {
	
	int dziesietnie, rem, i = 1, st = 1;

	long long bin = 0;

	cout << "Podaj liczbe : ";
	cin >> dziesietnie;

	while(dziesietnie>0) {
		rem = dziesietnie%2;
		dziesietnie /= 2;
		bin += rem*i;
		i *= 10;
	}

	cout << "Podana liczba w postaci binarnej to : " << bin << endl;
	  
	return 0;	
}
