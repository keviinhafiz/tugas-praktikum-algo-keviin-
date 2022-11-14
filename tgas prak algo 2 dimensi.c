#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
char pilihanMerk,*merkElektronik,beliLgi;
int ttlBayar,Kembalian,jmlPembelian,hargaProduk,totalHarga;
atas:
 cout<<"\tProgram Penjualan Alat Elektronik"<<endl;
 cout<<"Pilihan Alat Elektronik"<<endl;
 cout<<"1. Kipas Angin"<<endl;
 cout<<"2. AC"<<endl;
 cout<<"3. Remote"<<endl;
 cout<<"4. Solder"<<endl;
 cout<<"5. Multimeter"<<endl;
 cout<<"6. Colokan Lubang 3"<<endl;
 cout<<"Tentukan Barang Elektronik Yang Ingin Dibeli  : ";cin>>pilihanMerk;
 cout<<"Jumlah Pembelian Barang Elektronik : ";cin>>jmlPembelian;

  if(pilihanMerk=='1'){merkElektronik="Kipas";
  hargaProduk=230000;}
  else if(pilihanMerk=='2'){merkElektronik="AC";
  hargaProduk=1200000;}
  else if(pilihanMerk=='3'){merkElektronik="Remote";
  hargaProduk=4000;}
  else if(pilihanMerk=='4'){merkElektronik="Solder";
  hargaProduk=87000;}
  else if(pilihanMerk=='5'){merkElektronik="Multimeter";
  hargaProduk=94000;}
  else if(pilihanMerk=='6'){merkElektronik="Colokan Lubang 3";
  hargaProduk=4500;}
  else
  {
   cout<<"Maaf Merek Tidak Tersedia Ditoko Elektronik Kami"<<endl;
   cout<<"Pilihlah kembali";getch();
   cout<<endl;
  }
 totalHarga=hargaProduk*jmlPembelian;
 cout<<"Jenis Barang Elektronik   : "<<merkElektronik<<endl;
 cout<<"Harga Satuan Perbarang    : Rp. "<<hargaProduk<<endl;
 cout<<"Jumlah Pembelian          : "<<jmlPembelian<<endl;
 cout<<"Total Harga    : Rp. "<<totalHarga<<endl;
 cout<<"==========================================="<<endl;
 cout<<"Total Bayar    : Rp. ";
 cin>>ttlBayar;
 Kembalian=ttlBayar-totalHarga;
 cout<<"Kembalian Duit     : Rp. "<<Kembalian<<endl<<endl;
 cout<<"==========================================="<<endl;
 cout<<"Beli kembali produk? [Y/T] : ";cin>>beliLgi;
 cout<<endl;
  if(beliLgi=='Y'||beliLgi=='y')
  {goto atas;}
  else{
   cout<<"Terima Kasih Atas Pembelian Produk Elektronik Kami";
   cout<<endl;
  }
getch();
}
