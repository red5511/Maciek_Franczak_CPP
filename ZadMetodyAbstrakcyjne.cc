#include <iostream>
using namespace std;


//------------------------------------------------------------------
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
        std::cout << " POle to " << a*a << std::endl;
    }
    void Obwod(float a) {
        std::cout << " Obwod to " << a * 4<< std::endl;
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
        std::cout << " Obwod to " << 2*a + 2*b << std::endl;
    }
};



//------------------------------------------------------------------
int main()
{
    //Kwadrat* objKwadrat = new Kwadrat();
    Figura *objKwadrat = new Kwadrat();
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


   // Kwadrat fig;    //ERROR
    //fig.Narysuj();
    //Figura *fig = new Figura();    //ERROR
}
