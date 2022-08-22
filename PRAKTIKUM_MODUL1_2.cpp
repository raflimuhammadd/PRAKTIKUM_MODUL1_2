#include <iostream>
using namespace std;

int main() {
    int input, G;
    string bulan;

    cout << "PROGRAM INPUTAN BULAN SESUAI ANGKA" << endl;
    cout << "===================================" << endl;

    cout << "Masukkan Angka : ";
    cin >> input;

    switch (input) {
        case 1:
            bulan = "Januari";
            cout <<"Angka Inputan Adalah Bulan : " << bulan << endl;
            break;
        case 2:
            bulan = "Februari";
            cout <<"Angka Inputan Adalah Bulan : " << bulan << endl;
            break;
        case 3:
            bulan = "Maret";
            cout <<"Angka Inputan Adalah Bulan : " << bulan << endl;
            break;
        case 4:
            bulan = "April";
            cout <<"Angka Inputan Adalah Bulan : " << bulan << endl;
            break;
        case 5:
            bulan = "Mei";
            cout <<"Angka Inputan Adalah Bulan : " << bulan << endl;
            break;
        case 6:
            bulan = "Juni";
            cout <<"Angka Inputan Adalah Bulan : " << bulan << endl;
            break;
        case 7:
            bulan = "Juli";
            cout <<"Angka Inputan Adalah Bulan : " << bulan << endl;
            break;
        case 8:
            bulan = "Agustus";
            cout <<"Angka Inputan Adalah Bulan : " << bulan << endl;
            break;
        case 9:
            bulan = "September";
            cout <<"Angka Inputan Adalah Bulan : " << bulan << endl;
            break;
        case 10:
            bulan = "Oktober";
            cout <<"Angka Inputan Adalah Bulan : " << bulan << endl;
            break;
        case 11:
            bulan = "November";
            cout <<"Angka Inputan Adalah Bulan : " << bulan << endl;
            break;
        case 12:
            bulan = "Desember";
            cout <<"Angka Inputan Adalah Bulan : " << bulan << endl;
            break;
        default:
            bulan = "Bulan Tidak Ada";
            cout <<"Maaf Anda Salah Memasukkan Angka : " << bulan << endl;
            break;
    }
}