#include <iostream>
#include <string>
#include <cmath>
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
            int hasil = bilsatu + bildua;
            cout << "hasilnya adalah : " << hasil << endl;
        }
        else if(pilihan == 1){
            long long bilsatu,bildua;
            cout << "Masukkan Bilangan pertama : ";
            cin >> bilsatu;
            cout << "Masukkan Bilangan Kedua : ";
            cin >> bildua;
            int hasil = bilsatu - bildua;
            cout << "hasilnya adalah : " << hasil << endl;
        }
        else if(pilihan == 2){
            long long bilsatu,bildua;
            cout << "Masukkan Bilangan pertama : ";
            cin >> bilsatu;
            cout << "Masukkan Bilangan Kedua : ";
            cin >> bildua;
            int hasil = bilsatu * bildua;
            cout << "hasilnya adalah : " << hasil << endl;
        }
        else if(pilihan == 3){
            long long bilsatu,bildua;
            cout << "Masukkan Bilangan pertama : ";
            cin >> bilsatu;
            cout << "Masukkan Bilangan Kedua : ";
            cin >> bildua;
            int hasil = bilsatu / bildua;
            (bilsatu == 0 && bildua == 0)?cout << "Tidak Terdefinisi\n":cout << "hasilnya adalah : " << hasil << endl;
        }
        else{
            long long bilsatu,bildua;
            cout << "Masukkan Bilangan pertama (basis): ";
            cin >> bilsatu;
            cout << "Masukkan Bilangan Kedua  : ";
            cin >> bildua;
            int hasil = pow(bilsatu,bildua);
            (bilsatu == 0 && bildua == 0)?cout << "Tidak Terdefinisi\n":cout << "hasilnya adalah : " << hasil << endl;
        }
        cout << "Apakah masih ingin menggunakan kembali kalkulator? (y/n) : \n";
        char opsi;cin >> opsi;
        (opsi == 'y')?ulang = true:ulang = false;
    }
    cout << "Terimakasih Telah menggunakan kalkulatornya, created by : Mangrove7 100% created by c/c++ code";
    
    return 0;
}