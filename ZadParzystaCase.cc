  
#include <iostream>

using namespace std;

bool a(int x)
{
       /*
        Liczba 5 w binarce to 0111, uzywajac AND logicznego  5 & 1, sprawdzamy czy na ostatnim bicie mamy jedynke, jesli mamy 1 to liczba zawsze jest nieparzysta,
        jesli jest tam 0 to liczba zawsze jest parzysta 
    */
    if (x & 1)
    {
        cout << "nieparzyste" << endl;
        return false;
    }
    else
    {
        cout << "parzyste" << endl;
        return true;
    }
}

bool b(int x)
{
	if(x & 1)
	{
		return false;
	}
	else
	{
		return true;
	}
}

bool c(int x)
{
	return (x&1) ? false : true;

}

int main()
{

	int x;
	char funkcja;
	bool wynik;

	cout << "Podaj liczbe" << endl;
	cin >> x;

	cout << "Ktora funkcje wybierasz? a/b/c" << endl;
	cin >> funkcja;

	switch (funkcja)
	{
		case 'a':
			wynik = a(x);
			break;
		case 'b':
			wynik = b(x);
			break;
		case 'c':
			wynik = c(x);
			break;
	}

	if(wynik)
	{
		cout << "Parzysta" << endl;
	}
	else
	{
		cout << "Nieparzysta" << endl;
	}

	return 0;
}
