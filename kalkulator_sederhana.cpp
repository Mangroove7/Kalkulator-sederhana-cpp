#include <iostream>
#include <string>
#include <cmath>
#include <stdlib.h>
using namespace std;
int main(){

    
    
    bool ulang = true;
    while (ulang){
        cout << "------------------KALKULATOR SEDERHANA-----------------\n";
    cout << "Silahkan Pilih Operasi Aritmatika : \n";
    cout << " [0] Pertambahan\n [1] Pengurangan\n [2] Perkalian\n [3] Pembagian\n [4] Perpangkatan\n";
    cout << "-------------------------------------------------------\n";
    int pilihan;cin >> pilihan;
        if (pilihan == 0){
            long long bilsatu,bildua;
            cout << "Masukkan Bilangan pertama : ";
            cin >> bilsatu;
            cout << "Masukkan Bilangan Kedua : ";
            cin >> bildua;
            long long hasil = bilsatu + bildua;
            cout << "hasilnya adalah : " << hasil << endl;
        }
        else if(pilihan == 1){
            long long bilsatu,bildua;
            cout << "Masukkan Bilangan pertama : ";
            cin >> bilsatu;
            cout << "Masukkan Bilangan Kedua : ";
            cin >> bildua;
            long long hasil = bilsatu - bildua;
            cout << "hasilnya adalah : " << hasil << endl;
        }
        else if(pilihan == 2){
            long long bilsatu,bildua;
            cout << "Masukkan Bilangan pertama : ";
            cin >> bilsatu;
            cout << "Masukkan Bilangan Kedua : ";
            cin >> bildua;
            long long hasil = bilsatu * bildua;
            cout << "hasilnya adalah : " << hasil << endl;
        }
        else if(pilihan == 3){
            long long bilsatu,bildua;
            cout << "Masukkan Bilangan pertama : ";
            cin >> bilsatu;
            cout << "Masukkan Bilangan Kedua : ";
            cin >> bildua;
            long long hasil = bilsatu / bildua;
            (bilsatu == 0 && bildua == 0)?cout << "Tidak Terdefinisi\n":cout << "hasilnya adalah : " << hasil << endl;
        }
        else{
            long long bilsatu,bildua;
            cout << "Masukkan Bilangan pertama (basis): ";
            cin >> bilsatu;
            cout << "Masukkan Bilangan Kedua  : ";
            cin >> bildua;
            // menggunakan fungsi pow/pangkat dari cmath
            long long hasil = pow(bilsatu,bildua);
            (bilsatu == 0 && bildua == 0)?cout << "Tidak Terdefinisi\n":cout << "hasilnya adalah : " << hasil << endl;
        }
        // konfirmasi pada user jika y maka ulangi jika tidak berhenti.
        cout << "Apakah masih ingin menggunakan kembali kalkulator? (y/n) : \n";
        char opsi;cin >> opsi;
        if(opsi == 'y'){
            ulang = true;
            system("CLS");
            // ganti "CLS" dengan "clear" jika kamu user linuk anjay mabar kalau user jendela biarin aja :) ex : system("clear");
        }else{
        ulang = false;
        }
    }
    cout << "Terimakasih Telah menggunakan kalkulatornya, created by : Mangrove7 100% created by c/c++ code";
    return 0;
}
