#include <iostream>
using namespace std;

int main ()
{
   int kode;
   char ukuran;
   double jumlah,b1 = 10000, b2 = 8500, b3 = 17000, s1 = 4250, s2 = 4000, s3 = 14500, k1 = 2100, k2 = 2025, k3 = 8300;
    cout << "========================================================" << endl;
    cout << "|Kode Susu | Nama Produk   | Ukuran     | Harga        |" << endl;
    cout << "========================================================" << endl;
    cout << "|1         | Dancow        | B = Besar  | Rp 10.000,-  |" << endl;
    cout << "|          |               | S = Sedang | Rp 4.250,-   |" << endl;
    cout << "|          |               | K = Kecil  | Rp 2.100,-   |" << endl;
    cout << "========================================================" << endl;
    cout << "|2         | Indomilk      | B = Besar  | Rp 8.500,-   |" << endl;
    cout << "|          |               | S = Sedang | Rp 4.000,-   |" << endl;
    cout << "|          |               | K = Kecil  | Rp 2.025,-   |" << endl;
    cout << "========================================================" << endl;
    cout << "|3         | Sustacal      | B = Besar  | Rp 17.000,-  |" << endl;
    cout << "|          |               | S = Sedang | Rp 14.500,-  |" << endl;
    cout << "|          |               | K = Kecil  | Rp 8.300,-   |" << endl;
    cout << "========================================================" << endl;

    cout << "Masukan kode susu yang anda mau (1-3): ";
    cin >> kode;
    cout << "Masukan Jumlah Pembelian             : ";
    cin >> jumlah;
    cout << "Masukan ukuran yang anda mau (B,S,K) : ";
    cin >> ukuran;
    cout << endl;
    if (kode==1)
    cout << "Susu yang anda mau        : Dancow" << endl;
    else if (kode==2)
        cout << "Susu yang anda mau        : Indomilk" << endl;
    else if (kode==3)
        cout << "Susu yang anda mau        : Sustacal" << endl;
    else
        cout << "Kode yang anda masukan salah";

    cout << "Jumlah yang anda beli     : "<< jumlah << endl;

    if (ukuran=='b')
        cout << "Ukuran susu yang anda mau : Besar";
    else if (ukuran=='s')
        cout << "Ukuran susu yang anda mau : Sedang";
    else if (ukuran=='k')
        cout << "Ukuran susu yang anda mau : Kecil";
    else
        cout << "Ukuran yang anda pilih tidak tersedia";

    cout << endl;

    //Untuk Kode susu 1
    if (kode==1 && ukuran =='b')
        cout << "Total Harga               : Rp." << jumlah * b1 << endl;
    else if (kode==1 && ukuran =='s')
        cout << "Total Harga               : Rp." << jumlah * s1 << endl;
    else if (kode==1 && ukuran =='k')
        cout << "Total Harga               : Rp." << jumlah * k1 << endl;

    //Untuk Kode susu 2
    else if (kode==2 && ukuran =='b')
        cout << "Total Harga               : Rp." << jumlah * b2 << endl;
    else if (kode==2 && ukuran =='s')
        cout << "Total Harga               : Rp." << jumlah * s2 << endl;
    else if (kode==2 && ukuran =='k')
        cout << "Total Harga               : Rp." << jumlah * k2 << endl;

    //Untuk Kode susu 3
    else if (kode==3 && ukuran =='b')
        cout << "Total Harga               : Rp." << jumlah * b3 << endl;
    else if (kode==3 && ukuran =='s')
        cout << "Total Harga               : Rp." << jumlah * s3 << endl;
    else if (kode==3 && ukuran =='k')
        cout << "Total Harga               : Rp." << jumlah * k3 << endl;
    else
        cout << "Kode yang anda masukan salah";


return 0;
}


