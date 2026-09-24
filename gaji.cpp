#include <iostream>

using namespace std;

int main() {

    char golongan;
    int jam_lembur;
    int gaji_pokok;
    int bonus_lembur;
    int gaji_akhir;

    cout << "Masukkan golongan kerja anda = ";
    cin >> golongan;

    if (golongan == 'A') {
        gaji_pokok = 5000000;
    }
    else if (golongan == 'B') {
        gaji_pokok = 6000000;
    }

    else if (golongan == 'C') {
        gaji_pokok = 7000000;
    }
    else {    
        cout << "Golongan yang anda masukkan salah!";
    }

    cout << "Masukkan jam lembur anda = ";
    cin >> jam_lembur;

if (jam_lembur == 1){
    bonus_lembur = 0.5 * gaji_pokok;
}else if (jam_lembur == 2){
        bonus_lembur = 1 * gaji_pokok;
}else if (jam_lembur == 3){
        bonus_lembur = 1.5 * gaji_pokok;
}else{ 
        cout << "Jam lembur yang anda masukkan salah!";
    }    

gaji_akhir = gaji_pokok + bonus_lembur;

cout << "Gaji akhir anda adalah = " << gaji_akhir;


return 0;
}