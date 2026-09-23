#include <iostream>

using namespace std;

int main() {
   char operasi;
    double angka1, angka2, hasil;

    cout << "=== KALKULATOR SEDERHANA ===" << endl;
    
    // 1. Input angka pertama
    cout << "Masukkan angka pertama: ";
    cin >> angka1;
    
    // 2. Input operator mat2ematika
    cout << "Masukkan operator (+, -, *, /): ";
    cin >> operasi;
    
    // 3. Input angka kedua
    cout << "Masukkan angka kedua: ";
    cin >> angka2;

    // 4. Proses perhitungan berdasarkan operator
    switch (operasi) {
        case '+':
            hasil = angka1 + angka2;
            cout << "Hasil: " << angka1 << " + " << angka2 << " = " << hasil << endl;
            break;
            
        case '-':
        
            hasil = angka1 - angka2;
            cout << "Hasil: " << angka1 << " - " << angka2 << " = " << hasil << endl;
            break;
            
        case '*':
            hasil = angka1 * angka2;
            cout << "Hasil: " << angka1 << " * " << angka2 << " = " << hasil << endl;
            break;
            
        case '/':
            // Validasi agar tidak terjadi pembagian dengan angka nol
            if (angka2 != 0) {
                hasil = angka1 / angka2;
                cout << "Hasil: " << angka1 << " / " << angka2 << " = " << hasil << endl;
            } else {
                cout << "Error: Pembagian dengan nol tidak diperbolehkan!" << endl;
            }
            break;
            
        default:
            cout << "Error: Operator tidak valid!" << endl;
            break;
    }

    return 0;
}
