#include <iostream>
using namespace std;
int main() {
  double x, y, a, b, phi;

  phi = 3.14;

  cout << "masukan nilai jari-jari tabung: " << endl;
  cin >> x;
   cout << "masukan nilai tinggi tabung: " <<endl;
  cin >> y;

  a = phi*x*x;
  b = x*y;

  cout << "hasil luas tabung : " << a << endl;
  cout << "hasil volume tabung : " << b;

  getchar();
}