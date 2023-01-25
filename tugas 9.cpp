#include <iostream>
using namespace std;

int kali(int a, int b){
  int hasil;
  hasil = a*b;
  return hasil;
}
int tambah(int a, int b){
  int hasil;
  hasil = a+b;
  return hasil;
}
int kurang(int a, int b){
  int hasil;
  hasil = a-b;
  return hasil;
}
int bagi (int a, int b){
  int hasil;
  hasil = a/b;
  return hasil;
}


int main(){
  int hasil, a, b;
  cout << "Masukan nilai a : ";
  cin >> a;
  cout << "masukan nilai b : ";
  cin >> b;

  hasil = kali(a,b);
  cout << "hasil perkalian = "<< hasil<< endl;
  hasil = tambah(a,b);
  cout << "hasil penjumlahan = "<< hasil<< endl;
  hasil = bagi(a,b);
  cout << "hasil pembagian = "<< hasil<< endl;
  hasil = kurang(a,b);
  cout << "hasil pengurangan = "<< hasil<< endl;
  getchar();
}
