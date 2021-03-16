#include <iostream>

using namespace std;

extern "C" void function1(int a, int b)
{
    cout << "Suma: " << a + b << endl;
}

extern "C" void function2(int a, int b)
{
    cout << "Roznica: " << a - b << endl;
}

void function3(int a, int b)
{
    cout << "Iloraz: " << a / b << endl;
}

void function4(int a, int b)
{
    if (a == b)
    {
        cout << "a jest równe b" << endl;
    }
}

void function5(int a, int b)
{
    if (a > b)
    {
        cout << "a jest wieksze niż b" << endl;
    }
    else {
        cout << "a nie jest wieksze niż b" << endl;

    }
}

int main(int argc, char** argv)
{
    cout << "hello" << endl;

    int var1 = 2;

    for (int i = 0; i < argc; i++)
    {
        string arg = (string)argv[i];
        if (arg == "a")
        {
            function1(var1, var1);
        }
        else if (arg == "b")
        {
            function2(var1, var1);
        }
        else if (arg == "c")
        {
            function3(var1, var1);
        }
        else if (arg == "d")
        {
            function4(var1, var1);
        }
        else if (arg == "e")
        {
            function5(var1, var1);
        }
    }

    return 0;
}
