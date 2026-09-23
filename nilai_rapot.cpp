#include <iostream>

using namespace std;

int main() {
  
int mapel;
double nilai;
double total_nilai;


cout << "Masukkan jumlah mata pelajaran anda = ";
cin >> mapel;

for (int i = 1; i <= mapel; i++) {
 cout << "Masukkan nilai mata pelajaran ke-" << i << " = ";
cin >> nilai;
}

total_nilai = mapel * nilai;

cout << "Total nilai anda adalah = " << total_nilai << endl << "Rata-rata nilai anda adalah = " << total_nilai / mapel << endl;

if (nilai >= 90) {
    cout << "Nilai anda adalah A" << endl;
} else if (nilai >= 80) {
    cout << "Nilai anda adalah B" << endl;
} else if (nilai >= 70) {
    cout << "Nilai anda adalah C" << endl;
} else if (nilai >= 60) {
    cout << "Nilai anda adalah D" << endl;
} else {
    cout << "Nilai anda adalah E" << endl;
} 

    return 0;
}