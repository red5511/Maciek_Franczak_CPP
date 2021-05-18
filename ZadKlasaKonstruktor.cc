#include <iostream>


class A {
	public:
		int a, b, c;
		A() {}
		A(int zmienna1, int zmienna2);
		A(int zmienna1) {
			a = zmienna1;
		}
		~A(){}
};

A::A(int zmienna1, int zmienna2) : a(zmienna1), b(zmienna2)
{}

int main() {
	A klasa(1, 2);
	std::cout << klasa.a << std::endl;
	return 0;
}
