# termasuk  < iostream >
menggunakan  namespace  std ;

int  pangkat ( int x, int y){
  jika (y == 0 ||y== 1 ){
    kembali x;
  } lain {
    return x* pangkat (x,y- 1 );
  }
}

int  utama (){
  int x, y;
 
  cout<< " TUGAS PROGRAM C++ MENGHITUNG PANGKAT DENGAN REKURSIF " <<endl;
  cout<< " ========================================== === " <<endl;
  cout<< " Masukkan nilai X = " ;
  cin>>x;
  cout<< " Masukkan nilai Y(Pangkat) = " ;
  cin>>y;
  
  int hasil = pangkat (x,y);
  cout<< " Hasil " <<x<< " dipangkatkan " <<y<< " = " <<hasil;
  
  kembali  0 ;
}
