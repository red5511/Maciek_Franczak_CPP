#include <iostream>
#include <fstream>

using namespace std;

int main() {
	ofstream sfile("plik.txt");
	sfile << "Zapisuje do pliku" << endl;
	sfile.close();


	string text;
	ifstream rfile("plik.txt");

	while(getline(rfile, text)) {
		cout << text << endl;
	}
	
	cerr << "CERR" << endl;

	rfile.close();
}
