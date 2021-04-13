#include <iostream>

using namespace std;

int a()
{
	int i = 0;

	while(i < 5)
	{
		cout << ++i << endl;
		if (i == 3){
      return i;
    }
	}
  return i;
}

void b()
{
	int i = 0;
	do {
		cout << i++ << endl;
    if (i == 3){
      break;
    }
	} while (i < 5);

}

void c(){
	for(int i = 0;i<10;i++){
		if(i%2==0){
			continue;
		}
		cout << i << endl;
	}
}


int main()
{
	a();
	b();
	c();
	return 0;
}
