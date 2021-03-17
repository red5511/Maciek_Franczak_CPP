#include <iostream>
using namespace std;

int& ref(int x)
{
    int value = x + 1;
    return value;
} 


int* adres(int x)
{
    int value = x + 1;
    return &value;
}

int value(int x)
{
    int value = x + 1;
    return value;
}

int* tab() {
    static int a[3] = { 1,2,3 };
    return a;
}


int main() {

    cout << ref(1) << endl;
    cout << adres(1) << " " << *adres(1) << endl;
    cout << value(1) << endl;
    cout << tab() << endl;




    return 0;
}