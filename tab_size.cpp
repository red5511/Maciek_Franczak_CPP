#include <iostream>
using namespace std;

void tab(int a[]) {
    for (int i = 0; i <= (sizeof(&a) / sizeof(a[0]) ); i++) {
        cout << a[i] << endl;
    }
}

int main() {
    int a[3] = { 1,2,3 };
    tab(a);

    return 0;
}