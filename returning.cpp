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


int main() {

    cout << ref(1) << endl;
    cout << adres(1) << " " << *adres(1) << endl;
    cout << value(1) << endl;




    return 0;
}