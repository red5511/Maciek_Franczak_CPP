#include <iostream>
#include <cstring>

struct Auto {
	char* model;
	float przebieg;
	int moc;
};



int main() {
	Auto auto1;
	auto1.model = strndup("Nissan", 6);
	auto1.przebieg = 100000.55;
	auto1.moc = 222;


	std::cout << "Auto  " << auto1.model << ", przebieg " << auto1.przebieg << ", moc " << auto1.moc << std::endl;

	return 0;
}