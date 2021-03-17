#include <iostream>
using namespace std;

void wskaznik(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;
    a = 1;
    b = 2;

    int* wska = &a;
    int* wskb = &b;

    cout << "Przed \n" << "A = " << a << "\nB = " << b;

    wskaznik(wska, wskb);

    cout << "\nPo \nA = " << a << "\nB = " << b;

    return 0;
}