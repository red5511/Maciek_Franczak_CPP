#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include "main.h"
#include <fstream>
#include <iomanip>
#include <string>
#include <math.h>
#include <string.h>




using namespace std;

struct Auto {
    char* model;
    float przebieg;
    int moc;
};


class Figura
{
public:
    virtual void Narysuj() = 0;
    virtual void Pole(float a, float b) {};
    virtual void Pole(float a) {};
    virtual void Obwod(float a) {};
    virtual void Obwod(float a, float b) {};
    virtual void Obwod(float a, float b, float c) {};

};
//------------------------------------------------------------------




//------------------------------------------------------------------
class Trojkat : public Figura
{
public:
    void Narysuj() {
        cout << "Przepis na narysowanie trojkata" << endl;
    }
    void Pole(float podstawa, float wysokosc) {
        std::cout << " POle to " << podstawa * wysokosc * 1 / 2 << std::endl;
    }
    void Obwod(float a, float b, float c) {
        std::cout << " Obwod to " << a + b + c << std::endl;
    }
};

//------------------------------------------------------------------
class Kwadrat : public Figura
{
public:
    void Narysuj() {
        cout << "Przepis na narysowanie kwadrata" << endl;
    }
    void Pole(float a) {
        std::cout << " POle to " << a * a << std::endl;
    }
    void Obwod(float a) {
        std::cout << " Obwod to " << a * 4 << std::endl;
    }
};

//------------------------------------------------------------------
class Prostokat : public Figura
{
public:
    void Narysuj() {
        cout << "Przepis na narysowanie prostokata" << endl;
    }
    void Pole(float podstawa, float b) {
        std::cout << " POle to " << podstawa * b << std::endl;
    }
    void Obwod(float a, float b) {
        std::cout << " Obwod to " << 2 * a + 2 * b << std::endl;
    }
};
class Kolo : public Figura
{
public:
    void Narysuj() {
        cout << "Przepis na narysowanie kola" << endl;
    }
    void Pole(float r) {
        std::cout << " POle to " << 3.14 * r * r << std::endl;
    }
    void Obwod(float r) {
        std::cout << " Obwod to " << 2 * r * 3.14 << std::endl;
    }
    void r_convid(float pole) {
        float buf = pole / 3.14;
        std::cout << " r_convid to " << sqrt(buf) << std::endl;

    }
};

class A {
public:
    int a, b, c;
    A() {}
    A(int zmienna1, int zmienna2);
    A(int zmienna1) {
        a = zmienna1;
    }
    ~A() {}
};

A::A(int zmienna1, int zmienna2) : a(zmienna1), b(zmienna2)
{}

union Values {
    int l1;
    float l2;
};

void Klasa::funkcja1() {//3.3
    int arr[] = { 10, 20, 30, 40, 50, 60, 70, 80 };
    int* p = arr;
    cout << "****************" << endl;
    cout << "zad 3.3" << endl;
    cout << "****************" << endl;


    cout << "p++ " << p++ << " p " << p << " *p " << *p << endl;
    cout << "++p " << ++p << " p " << p << " *p " << *p << endl;
    cout << "++*p " << ++ * p << " p " << p << " *p " << *p << endl;
    cout << "++(*p) " << ++(*p) << " p " << p << " *p " << *p << endl;
    cout << "++*(p) " << ++ * (p) << " p " << p << " *p " << *p << endl;

    cout << "*p++ " << *p++ << " p " << p << " *p " << *p << endl;
    cout << "(*p)++ " << (*p)++ << " p " << p << " *p " << *p << endl;
    cout << "*(p)++ " << *(p)++ << " p " << p << " *p " << *p << endl;
    cout << " *++p " << *++p << " p " << p << " *p " << *p << endl;
    cout << " *(++p) " << *(++p) << " p " << p << " *p " << *p << endl;
}

void Klasa::funkcja2() {
    cout << "****************" << endl;
    cout << "Zad 3.7" << endl;
    cout << "****************" << endl;

    int dziesietnie = 0, pow = 1, rem;
    long long bin;

    cout << "Wpisz liczbe w postaci binarnej : ";
    cin >> bin;

    while (bin > 0) {
        rem = bin % 10;
        bin /= 10;
        dziesietnie += rem * pow;
        pow *= 2;
    }

    cout << "Podana liczba w postaci dziesietnej to : " << dziesietnie << endl;
}

void Klasa::funkcja3() {
    cout << "****************" << endl;
    cout << "Zad 4.2" << endl;
    cout << "****************" << endl;

    cout << "Print w c++" << endl;
    printf("Print w c\n");

    int a = 7;

    cout << "Print liczby w c++ : " << a << endl;
    printf("Print liczby w c : %d\n", a);

    int x, y;

    cout << "Input c++: " << endl;
    cin >> x;

    cout << "Input c: " << endl;
    scanf("%d", &y);
}
void Klasa::funkcja4() {
    cout << "****************" << endl;
    cout << "Zad 4.1" << endl;
    cout << "****************" << endl;

    ofstream sfile("plik.txt");
    sfile << "Zapisuje do pliku" << endl;
    sfile.close();


    string text;
    ifstream rfile("plik.txt");

    while (getline(rfile, text)) {
        cout << text << endl;
    }

    cerr << "CERR" << endl;

    rfile.close();
}
void Klasa::funkcja5() {
    cout << "****************" << endl;
    cout << "Zad 3.7" << endl;
    cout << "****************" << endl;

    int dziesietnie, rem, i = 1, st = 1;

    long long bin = 0;

    cout << "Podaj liczbe dziesietna : ";
    cin >> dziesietnie;

    while (dziesietnie > 0) {
        rem = dziesietnie % 2;
        dziesietnie /= 2;
        bin += rem * i;
        i *= 10;
    }

    cout << "Podana liczba w postaci binarnej to : " << bin << endl;

}
void Klasa::funkcja6() {
    cout << "****************" << endl;
    cout << "Zad 3.2" << endl;
    cout << "****************" << endl;

    int arr[] = { 0, 1, 2,3, 4 };
    int i = 0;

    for (i; i < 5; i++)
    {
        cout << i[arr] << endl;
    }
}
void Klasa::funkcja7() {
    cout << "****************" << endl;
    cout << "Zad 4.0" << endl;
    cout << "****************" << endl;

    float a = 7,
    b = 3,
    x = b / a;


    cout << "output:" << setprecision(4) << setw(3) << " " << x << setw(3) << "T:" << setw(3) << " " << setprecision(3) << x << endl;
    cout << "output1:" << setprecision(4) << setw(3) << " " << x << setw(3) << "T:" << setw(3) << " " << setprecision(5) << x << endl;
    cout << "output2:" << setprecision(4) << setw(3) << " " << x << setw(3) << "T:" << setw(3) << " " << setprecision(7) << x << endl;
}
void Klasa::funkcja1a() {
    cout << "****************" << endl;
    cout << "Zad 3.5" << endl;
    cout << "****************" << endl;
    int var1 = 2;
    int var2 = 2;

    cout << var2 * ++var1 * 2 << endl;

}


void Klasa::funkcja2a() {
    cout << "****************" << endl;
    cout << "Zad 3.5" << endl;
    cout << "****************" << endl;
    int var1 = 2;

    var1 *= 10;
    var1 /= 2;

    cout << var1 << endl;
}

bool Klasa::funkcja8(int x) {
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
bool Klasa::funkcja9(int x) {
    if (x % 2)
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
bool Klasa::funkcja10(int x) {
    return (x & 1) ? false : true;
}
void Klasa::funkcja11() {
    cout << "****************" << endl;
    cout << "Zad 4.4" << endl;
    cout << "****************" << endl;

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
        wynik = Klasa::funkcja8(x);
        break;
    case 'b':
        wynik = Klasa::funkcja9(x);
        break;
    case 'c':
        wynik = Klasa::funkcja10(x);
        break;
    }

    if (wynik)
    {
        cout << "Parzysta" << endl;
    }
    else
    {
        cout << "Nieparzysta" << endl;
    }
}

int Klasa::funkcja12() {
    cout << "****************" << endl;
    cout << "Zad 4.5" << endl;
    cout << "****************" << endl;

    int i = 0;

    while (i < 5)
    {
        cout << ++i << endl;
        if (i == 3) {
            return i;
        }
    }
    return i;
}

void  Klasa::funkcja13() {
    int i = 0;
    do {
        cout << i++ << endl;
        if (i == 3) {
            break;
        }
    } while (i < 5);
}
void Klasa::funkcja14() {
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            continue;
        }
        cout << i << endl;
    }
}
void Klasa::funkcja15() {
    cout << "****************" << endl;
    cout << "Zad 3.6" << endl;
    cout << "****************" << endl;
    int x = 1, y = 2, z = 3;
    int result[] = { 4, 4, 4, 4 };

    result[0] *= -++x * x-- + -y-- % ++z;
    cout << "0. " << result[0] << endl;
    result[1] *= -(++x) * (x--) + -(y--) % (++z);
    cout << "1. " << result[1] << endl;
    result[2] *= (-(++x)) * (x--) + (-(y--)) % (++z);
    cout << "2. " << result[2] << endl;
    result[3] *= ((-(++x)) * (x--)) + ((-(y--)) % (++z));
    cout << "3. " << result[3] << endl;
}
void Klasa::funkcja16() {
    cout << "****************" << endl;
    cout << "Zad 5.3" << endl;
    cout << "****************" << endl;
    Values val;
    val.l1 = 1;
    std::cout << val.l1 << std::endl;
    val.l2 = 3;
    std::cout << val.l2 << std::endl;
    std::cout << val.l1 << std::endl;
    
}
void Klasa::funkcja17() {
    cout << "Podaj ktora funkcja: [a|b]" << endl;
    char choice;
    cin >> choice;
    switch (choice)
    {
    case 'a':
        Klasa::funA();
        break;
    case 'b':
        Klasa::funB();
        break;
    }
}
void Klasa::funA() {
    cout << "Funkcja A" << endl;

}
void Klasa::funB() {
    cout << "Funkcja B" << endl;

}
void Klasa::funkcja18() {//2.1
    cout << "****************" << endl;
    cout << "Zad 2.1" << endl;
    cout << "****************" << endl;
    cout << Klasa::ref(1) << endl;
    cout << Klasa::adres(1) << " " << *Klasa::adres(1) << endl;
    cout << Klasa::value(1) << endl;
    cout << Klasa::tab() << endl;
}
int& Klasa::ref(int x)
{
    int value = x + 1;
    return value;
}


int* Klasa::adres(int x)
{
    int value = x + 1;
    return &value;
}

int  Klasa::value(int x)
{
    int value = x + 1;
    return value;
}

int* Klasa::tab() {
    static int a[3] = { 1,2,3 };
    return a;
}
void Klasa::funkcja19() {
    cout << "****************" << endl;
    cout << "Zad 5.4" << endl;
    cout << "****************" << endl;

    A klasa(1, 2);
    std::cout << klasa.a << std::endl;
}
void Klasa::funkcja20() {
    cout << "****************" << endl;
    cout << "Zad 5.6" << endl;
    cout << "****************" << endl;

    Figura* objKwadrat = new Kwadrat();
    objKwadrat->Narysuj();
    objKwadrat->Pole(3);
    objKwadrat->Obwod(3);

    Figura* objTrojkat = new Trojkat();
    objTrojkat->Narysuj();
    objTrojkat->Pole(3, 3);
    objTrojkat->Obwod(3, 3, 3);


    Figura* objProstokat = new Prostokat();
    objProstokat->Narysuj();
    objProstokat->Pole(3, 3);
    objProstokat->Obwod(3, 3);

    //Figura* objKolo = new Kolo(); nie dziala dla r_convid
    Kolo* objKolo = new Kolo();
    objKolo->Narysuj();
    objKolo->Pole(3);
    objKolo->Obwod(3);
    objKolo->r_convid(28.26);
}
void Klasa::funkcja21() {
    cout << "****************" << endl;
    cout << "Zad 5.2" << endl;
    cout << "****************" << endl;

    Auto auto1;
    auto1.model = strdup("Nissan");
    auto1.przebieg = 100000.55;
    auto1.moc = 222;


    std::cout << "Auto  " << auto1.model << ", przebieg " << auto1.przebieg << ", moc " << auto1.moc << std::endl;
}

int main() {
    std::cout << "Witam" << std::endl;
    char zad, podpunkt;
    Klasa klasa = Klasa();
    while (true) {
        std::cout << "Podaj numer zadania" << std::endl;
        cin >> zad;

        std::cout << "Podaj podpunkt zadania" << std::endl;
        cin >> podpunkt;

        std::cout << zad << std::endl;

        switch (zad) {
            case '2':
                if (podpunkt == '1') klasa.funkcja18();
                else std::cout << "Cos poszlo nie tak" << std::endl;

                break;
            case '3':
                if (podpunkt == '2') klasa.funkcja6();
                else if (podpunkt == '3') klasa.funkcja1();
                else if (podpunkt == '5') {
                    klasa.funkcja1a();
                    klasa.funkcja2a();
                }
                else if (podpunkt == '6') klasa.funkcja15();
                else if (podpunkt == '7') { 
                    klasa.funkcja2();
                    klasa.funkcja5();
                }
                else std::cout << "Cos poszlo nie tak" << std::endl;

                break;
            case '4':
                if (podpunkt == '0') klasa.funkcja7();
                else if (podpunkt == '1') klasa.funkcja4();
                else if (podpunkt == '2') klasa.funkcja3();
                else if (podpunkt == '4') klasa.funkcja11();
                else if (podpunkt == '5') {
                    klasa.funkcja12();
                    klasa.funkcja13();
                    klasa.funkcja14();
                }
                else std::cout << "Cos poszlo nie tak" << std::endl;
                break;
            case '5':
                if (podpunkt == '3')klasa.funkcja16();
                else if (podpunkt == '2')klasa.funkcja21();
                else if (podpunkt == '4')klasa.funkcja19();
                else if (podpunkt == '6')klasa.funkcja20();
                
                    
                else std::cout << "Cos poszlo nie tak" << std::endl;

                break;

        }
    }
	return 0;
}
