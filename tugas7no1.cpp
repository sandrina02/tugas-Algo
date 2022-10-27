#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  int i;
char nama[5][20];
int nilai1[5];
int nilai2[5];
int hasil[5];

for(i=1;i<=2;i++){
cout<<"Data Ke - "<<i<<endl;
cout<<"Nama Siswa : ";
cin >> nama[i];
  cout<<"Nilai MidTest : " ; 
  cin>>nilai1[i];
  cout<<"Nilai Final : "; 
  cin>>nilai2[i];
}
  for(i=1;i<=2;i++){
  