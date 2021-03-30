#include <iostream>
using namespace std;

int main()
{
  int arr[] = {0, 1, 2,3, 4};
  int i = 0;

  for(i;i<5;i++)
  {
    cout << i[arr] << endl;
  }

  // syntax jest poprawny, poniewaz overload operatora dziala w dwie strony, tak jak a + b, i b + a jest poprawne

  return 0;
}
