#include <iostream>
#include <conio.h>
using namespace std;
void bilangan ()
{
    double a,b,hasil1,hasil2,hasil3,hasil4;
    cout<<"OPERASI BILANGAN, TAMBAH KURANG BAGI DAN KALI"<<endl;
    cout<<"============================================="<<endl;
    cout<<"Masukkan Bilangan Pertama     = "; cin>>a;
    cout<<"Masukkan Bilangan Kedua       = "; cin>>b;
    cout<<endl;

    //penjumlahan
    hasil1=a+b;
    cout<<"Hasil Penjumlahan Bilangannya = "<<hasil1;
    cout<<endl;

    //pengurangan
    hasil2=a-b;
    cout<<"Hasil Pengurangan Bilangannya = "<<hasil2;
    cout<<endl;

    //pembagian
    hasil3=a/b;
    cout<<"Hasil Pembagian Bilangannya   = "<<hasil3;
    cout<<endl;

    //perkalian
    hasil4=a*b;
    cout<<"Hasil Perkalian Bilangannya   = "<<hasil4;
    cout<<endl;
}

int main ()
{
    bilangan();
    getch ();
    return 0;
}
