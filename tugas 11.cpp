# termasuk  < iostream >
menggunakan  namespace  std ;

int  utama (){
  int a, *c;
  cout<< " Masukan Bilangan = " ;
  cin>>a;

  c= &a;

  cout<< *c<< "  " ;
  (*c)++;
  cout<< *c<< "  " ;
  (*c)--;
  cout<< *c<< "  " ;
  getchar ();
}
