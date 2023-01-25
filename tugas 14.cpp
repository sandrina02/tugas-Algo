# sertakan < iostream >  // tajuk file standar operasi c++.
# define  maxstack  7  // mendefinisian nilai tetap untuk max data array yang akan dipakai stack.
menggunakan  namespace  std ;  // digunakan untuk mengenali kode cin dan cout dalam fungsi/kelas/filenya juga agar tidak menggunakan fungsi std pada fungsi utama.

struct  STACK { // pendeklarasian fungsi global Stack.
 int s[ 7 ]; // variabel array dengan nilai sebanyak 7 kolom indeks.
 int atas; // variabel untuk menambahkan data ke tumpukan ruang kosong selanjutnya.
}; // Penutup dari deklarasi fungsi stack.
struct  STACK st; // pendeklarasian bahwa var st merupakan tumpukan objek/

void  push ( int data){ // fungsi push yang akan digunakan difungsi utama.
 if ( st.top ==maxstack){ // memberikan kondisi apabila nilai st.top sama dengan 7.
cout<< " data penuh " <<endl; // output untuk kondisi if push.
} else { // memberikan kondisi else apabila nilai st.top tidak sama dengan maxstack.
st. atas = st. atas + 1 ; // memberi nilai st.top akan ditambah 1 sampai mencapai maxstack.
st. s [st. atas ] = data; // memasukan var array s yang berisi nilai st.top
cout<< " data ditambahkan " <<endl; // output untuk kondisi else push.
} // penutup lainnya.
} // Penutup fungsi push.

void  pop (){ // pendeklarasian fungsi pop.
 if ( st.top ==- 1 ){ // memberikan kondisi if apabila nilai st.top berada pada indeks ke 0.
cout<< " data kosong " <<endl; // output untuk kondisi if pop.
} else { // memberikan kondisi else apabila nilai if salah.
st. atas = st. atas - 1 ; // menghubungkan nilai st.top nilai yang akan dikurangi 1.
cout<< " data dihapus " <<endl; // output untuk kondisi lain pop.
  } // penutup lainnya.
} // Penutup fungsi pop.

void  show (){ // fungsi pendeklarasian show untuk ditampilkan pada fungsi utama.
 if ( st.top ==- 1 ){ // memberikan kondisi if apabila nilai st.top berada pada indeks ke 0.
cout<< " data kosong, tidak ada yang bisa ditampilkan " ; // keluaran untuk kondisi if
} else { // memberikan kondisi jika kondisi if tidak sesuai.
  for ( int x= 0 ;x <= st.top ;x++){ // perulangan yang digunakan apabila kondisi merupakan else.
    cout<<st. s [x]<< " => " ; // output apabila benar dan bertambah sesuai syarat.
  } // penutup untuk.
   cout<<endl;
  } // penutup lainnya.
} // Pertunjukan penutup fungsi.

int  main (){ // pendeklarasian fungsi utama untuk compiler mengkompilasi dan ditampilkan dilayar.
st. atas = - 1 ; // memberikan fungsi untuk memastikan nilai berada diposisi indeks ke 0.
 dorong ( 1 ); // panggil fungsi push dengan memberikan nilai 1.
 dorong ( 2 ); // panggil fungsi push dengan memberikan nilai 2.
 dorong ( 3 ); // panggil fungsi push dengan memberikan nilai 3.
 dorong ( 4 ); // panggil fungsi push dengan memberikan nilai 4.
 dorong ( 5 ); // panggil fungsi push dengan memberikan nilai 5.
 dorong ( 6 ); // panggil fungsi push dengan memberikan nilai 6.
 dorong ( 7 ); // panggil fungsi push dengan memberikan nilai 7.
 pop (); // panggil fungsi pop untuk dicetak sesuai dengan kondisi pada fungsi pop.
 tampilkan (); // panggil fungsi show untuk dicetak sesuai kondisi.
} // Penutup fungsi int program utama c++.
