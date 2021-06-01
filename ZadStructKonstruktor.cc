 #include <iostream>

struct A {
	int a, b, c;
        A(){}
        A(int zmienna1, int zmienna2);
	A(int zmienna1, int zmienna2, int zmienna3){
		a = zmienna1;
		b = zmienna2;
		c = zmienna3;
	}
	~A(){}
};

A::A(int zmienna1, int zmienna2) : a(zmienna1), b(zmienna2)
{}

int main(){

         A struc(9, 8);
         std::cout << struc.a << std::endl;
 	return 0;
 }
