#include <iostream>

using namespace std;

int main() {
	cout << "Print w c++" << endl;
	printf("Print w c\n");

	int a = 7;

	cout << "Print liczby w c++ : " << a << endl;
	printf("Print liczby w c : %d\n", a);

	int x, y;

	cout << "Input c++: " << endl;
	cin >> x;

	cout << "Input c: " << endl;
	scanf("%d", &y);
}
