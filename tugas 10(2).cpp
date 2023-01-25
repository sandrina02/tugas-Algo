/* ---------------------- */
/* Penggunaan Call By Reference */
/* Program Tambah Nilai */
/* ------------------ */
# termasuk  < iostream >
menggunakan  namespace  std ;

batal  tambah ( int *c, int *d);

int  utama (){
  int a= 4 , b= 6 ;
  cout<< " Nilai sebelum pemanggilan fungsi " ;
  cout<< " \n a = " <<a<< " b = " <<b<<endl;
  tambah (&a, &b);
  cout<< " \n Nilai setelah pemanggilan fungsi " ;
  cout<< " \n a = " <<a<< " b = " <<b;
  getchar ();
}
batal  tambah ( int *c, int *d){
  *c+= 7 ;
  *d+= 5 ;
  cout<< " \n Nilai diakhir fungsi tambah() " ;
  cout<< " \n c = " <<*c<< " d = " <<*d<<endl;
}
