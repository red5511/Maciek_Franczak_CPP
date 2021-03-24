#include <iostream>
using namespace std;

int main() {
    int arr[] = { 10, 20, 30, 40, 50, 60, 70, 80 };
    int *p = arr;

    cout << "zad 3.3" << endl;
    cout << "p++ " << p++ << " p " << p << " *p " << *p << endl;
    cout << "++p " << ++p << " p " << p << " *p " << *p << endl;
    cout << "++*p " << ++*p << " p " << p << " *p " << *p << endl;
    cout << "++(*p) " << ++(*p) << " p " << p << " *p " << *p << endl;
    cout << "++*(p) " << ++*(p) << " p " << p << " *p " << *p << endl;

    cout << "*p++ " << *p++ << " p " << p << " *p " << *p << endl;
    cout << "(*p)++ " << (*p)++ << " p " << p << " *p " << *p << endl;
    cout << "*(p)++ " << *(p)++ << " p " << p << " *p " << *p << endl;
    cout << " *++p " << *++p << " p " << p << " *p " << *p << endl;
    cout << " *(++p) " << *(++p) << " p " << p << " *p " << *p << endl;





    return 0;
}