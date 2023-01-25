# include  < iostream >  // file header standar input output operasi c++.
# include  < cstring >  // untuk fungsi fungsi dan pengoperasian string.
# include  < stdio.h >  // menampilkan dan mencetak karakter.

menggunakan  namespace  std ;  // kode untuk mengenali cin dan cout serta fungsi/kelas/filenya.

int pilih; // deklarasi var integer.
struct  node {   // node pendeklarasian dengan tipe data struct.
  char nama [ 50 ]; // deklarasi var nama dengan max 20 huruf.
  dalam usia; // deklarasi var integer.
  simpul *berikutnya = NULL ; // perintah membuat node dengan pointer.
}; // penutup fungsi .

simpul *kepala = NULL ; // menambahkan node dengan nilai NULL.
simpul *ekor = NULL ; // menambahkan node dengan nilai NULL.

void  insertdata (){ // fungsi untuk menambahkan data.
  simpul *baru; // simpul baru untuk memesan tempat dimemori.
  baru = simpul baru ; // alokasi node baru menjadi memori dinamis.
  cout<< " Masukkan nama : " ; // perintah teks untuk mencetak keluaran nama.
  cin>>baru -> nama; // perintah menerima data nama yang dipilih pada node baru.
  cout<< " Masukkan usia : " ; // perintah teks mencetak output usia.
  cin>>baru -> usia; // perintah menerima usia data yang dipilih pada node baru.

  if (kepala == NULL ){   // memberikan kondisi jika belum ada data/ kepala = NULL.
    kepala = baru ; // data yang pertama ditambahkan akan menjadi kepala.
    kepala -> selanjutnya = NULL ; // menghubungkan kode kepala ke akhir.
    ekor = kepala; // data kepala sama dengan menjadi ekor.
  } else  if (kepala -> usia > baru -> usia){ // kondisi untuk dapat menambah data didepan saat data usia .lama lebih besar dari data usia yang baru ditambahkan.
    baru -> selanjutnya = kepala; // menghubungkan kode baru kekepala.
    kepala = baru; // mengubah data kepala sama dengan data baru.
  } else  if (ekor -> usia < baru -> usia){ // kondisi untuk menambah data dibelakang saat data usia lama lebih kecil dari pemberian data baru.
    ekor -> selanjutnya =baru; // menghubungkan kode ekor ke kode baru.
    ekor = baru; // untuk memisahkan data kode ekor sama dengan yang baru.
    ekor -> selanjutnya = NULL ; // menghubungkan kode ekor ke NULL.
  } else { // memberikan kondisi saat ini sudah ada 3/lebih data .
    simpul *bantuan = kepala; // penambahan node help dengan pengalokasian kepala.
    while (kepala != NULL ){ // apabila kepala tidak sama dengan Null/tidak dalam posisi ekor.
      if (help -> next -> usia > baru -> usia){   // memberikan kondisi apabila kode help menghubungkan ke usia yang lebih besar dari data baru yang ditambahkan.
        baru -> selanjutnya = bantuan -> selanjutnya; // menghubungkan kode baru kekode help.
        bantuan -> berikutnya = baru; // menghubungkan kode bantuan ke kode baru.
        istirahat ; // memberhentikan perintah.
      } else { // bila kondisi kepala sama dengan NULL/akhir.
        bantuan = bantuan -> berikutnya; // kode bantuan untuk pembantu ke pointer selanjutnya.
      } // Penutup else pada while.
    } // Penutup jika pada while.
  } // Tutup else pada void insertdata.
} // Penutup voidinsertdata.

void  deldata (){ // fungsi untuk menghapus data.
  if (kepala == NULL ){ // kondisi apabila kode kepala bernilai NULL/tidak ada data.
    cout<< " DATA KOSONG!!! " <<endl; // perintah cetak data teks kosong.
    getchar (); // nilai kembali ke 0.
  } else { // apabila kondisi kode kepala memiliki nilai.
    char menghapus[ 50 ]; // pendaklarasian var char dengan max 50 karakter untuk digunakan menghapus data.
    cout<< " Masukkan nama yang akan dihapus : " ;  // output perintah nama yang akan dihapus.
    cin>>hapus; // perintah untuk menerima penghapus data yang diisi nama untuk dihapus.

    simpul *bantuan=kepala; // node pointer help yang akan berada dikepala.
    if ( strcmp (help -> nama, erase) == 0 ){ // untuk membandingkan string dengan string yang lainnya untuk menghapus depan apabila nama yang diinput didepan berada.
      kepala = tolong -> selanjutnya;
    } else { // kondisi apabila nama yang diinput berada dibelakang..
      while (help != NULL ){ // jika help tidak sama dengan NULL/nama yang dimasukkan berada dibelakang
        if (( strcmp (help -> next -> nama, erase)== 0 )&&(help-> next -> nama ,ekor -> nama )== 0 ){   // memberikan kondisi untuk menghapus belakang.
          bantuan -> selanjutnya = NULL ;
          ekor = tolong;
          istirahat ; // memberhentikan perintah.
        } else  if ( strcmp (help -> next -> nama,hapus)== 0 ){ // syarat strcmp membandingkan string dengan string untuk menghapus nilai tengah.
          bantuan -> selanjutnya = bantuan -> berikutnya -> berikutnya;
          istirahat ; // memberhentikan perintah.
        } lain {
          bantuan = bantuan -> selanjutnya ;
        } // Penutup else pada while.
      } // penutup sementara.
    } // Penutup else pada else.
  } // Penutup lain fungsi deldata.
} // Penutup fungsi deldata.

void  tampil (){ // memberikan fungsi tampil untuk menampilkan.
  simpul *tampilan; // menambahkan tampilan pointer node untuk menampilkan tumpukan data.
  disp = kepala; // pengarahan kode disp menjadi kepala.
  while (disp != NULL ){ // kondisi apabila kode disp tidak sama dengan NULL.
    cout<< " Nama \t : " <<disp-> nama<<endl; // pencetakan kalimat dengan memberikan nilai pada disp nama.
    cout<< " Usia \t : " <<disp -> usia << " \n " <<endl; // pencetakan kalimat pemberian nilai pada usia tertentu.
    disp = disp -> next ; // menghubungkan disp ke antar kode selanjutnya.
  } // penutup sementara.
} // penutup fungsu tampil.

int  main (){ // fungsi utama untuk dikompilasi terlebih dahulu.
  do { // perintah eksekusi terlebih dahulu.
    sistem ( " bersih " ); // untuk membersihkan tampilan layar.
    cout<< " \n 1. Tambah data " <<endl; // mencetak kalimat.
    cout<< " 2.Hapus data " <<endl; // mencetak kalimat.
    cout<< " 3.Tampilkan data " <<endl; // mencetak kalimat.
    cout<< " 4. Selesai " <<endl; // mencetak kalimat.
    cout<< " Masukkan pilihan anda = " ; // mencetak kalimat.
    cin>>pilih; // Perintah menginput data pada var pilih untuk diarahkan ke fungsi-fungsi.
    cout<<endl; // pengaturan pindah baris/spasi.
    if (pilih == 1 ){ // kondisi apabila input yang dipilih adalah 1.
      sisipkandata (); // dihubungkan ke fungsi insertdata.
    } else  if (pilih == 2 ){ // kondisi apabila input pilih selain 1 atau sama dengan 2.
      deldata (); // dihubungkan ke fungsi deldata..
    } else  if (pilih == 3 ){ // kondisi apabila input pilih selain 2 atau sama dengan 3
      tampil (); // dihubungkan ke fungsi tampil .
      istirahat ;
      getchar (); // nilai kembali ke 0.
    } else { // jika kondisi input pilih selain 1,2,3 atau sama dengan 4.
      istirahat ; // memberhentikan perintah.
    } // Penutup lain pada do.
  } // penutup lakukan.
    while (pilih != 4 ); // kondisi apabila input pilih tidak sama dengan 4 atau angka lain.
    kembali  0 ; // beri tahu mengembalikan kode telah selesai dieksekusi dengan exit code 0.
} // Penutup fungsi utama
