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
	if(x % 2)
	{
		return true;
	}
	else
	{
		return false;
	}

	/*
		Liczba 6 : 0110
		& to operacja 'and'
		0110 & 1 otrzymujemy 0
	*/
}

bool c(int x)
{
	return (x&1) ? false : true;

}

int main()
{

	int var;

	cout << "Wpisz liczbe" << endl;
	cin >> var;

	if(a(var))
	{
		cout << "Parzysta" << endl;
	}
	else
	{
		cout << "Nieparzysta" << endl;
	}

	return 0;
}
