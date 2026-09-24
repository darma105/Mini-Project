#include <iostream>
#include <vector>

using namespace std;

// 1. Membungkus data Laptop ke dalam Class (OOP)
class Laptop {
private:
    string nama;
    int harga;
    int jumlahBeli;

public:

    // Constructor untuk inisialisasi awal
    Laptop(string nama, int harga) {
        this->nama = nama;
        this->harga = harga;
        this->jumlahBeli = 0; // Inisialisasi jumlah beli awal
    }

    
    // Getter
    string getNama() const { 
        return nama; 
    }
    int getHarga() const { 
        return harga; 
    }
    int getJumlahBeli() const { 
        return jumlahBeli; 
    }
    int getSubtotal() const { 
        return harga * jumlahBeli;
    }


    // setter
    void tambahJumlah(int qty) {
        this->jumlahBeli += qty;
    }
};


int main() {
    // 2. Mengelompokkan Laptop ke dalam Vector (Daftar Produk)
    vector<Laptop> daftarLaptop = {
        Laptop("ASUS VIVOBOOK 15 X1502ZA-BQ111W", 5000000),
        Laptop("ROG STRIX G15 G513IH-HN004W", 15000000),
        Laptop("HP ELITEBOOK 840 G3", 10000000)
    };

    string keputusan;
    
    cout << "====== SELAMAT DATANG DI ADIT COMPUTER ======\n\n";

    // 3. Perulangan Transaksi (While Loop)
    do {
        // Tampilkan Menu
        for (int i = 0; i < daftarLaptop.size(); i++) {
            cout << i + 1 << ". " << daftarLaptop[i].getNama() 
                 << " === Rp" << daftarLaptop[i].getHarga() << endl;
        }

        int pilihan, qty;
        cout << "\nMasukkan nomor laptop yang ingin dibeli: ";
        cin >> pilihan;

        // Validasi Pilihan
        if (pilihan >= 1 && pilihan <= daftarLaptop.size()) {
            cout << "Jumlah laptop yang ingin dibeli: ";
            cin >> qty;
            
            // Tambahkan kuantitas ke objek laptop yang dipilih
            daftarLaptop[pilihan - 1].tambahJumlah(qty);
        } else {
            cout << "Nomor laptop tidak valid!\n";
        }

        cout << "Apakah anda ingin membeli laptop lain ? (ya/tidak): ";
        cin >> keputusan;
        cout << "--------------------------------------------------------\n";

    } while (keputusan == "ya" || keputusan == "Ya");

    // 4. Perhitungan Total & Diskon
    int totalUnit = 0;
    double totalHarga = 0;

    for (int i = 0; i < daftarLaptop.size(); i++) {
        totalUnit += daftarLaptop[i].getJumlahBeli();
        totalHarga += daftarLaptop[i].getSubtotal();
    }

    double diskon = 0;
    if (totalHarga > 50000000) {
        diskon = totalHarga * 0.10; // Diskon 10%
    } else if (totalHarga > 0) {
        diskon = totalHarga * 0.05; // Diskon 5%
    }

    double totalAkhir = totalHarga - diskon;

    // 5. Cetak Struk (Cukup 1 kali tanpa duplikasi kode)
    cout << "\n====================================================================\n";
    cout << "                         ADIT COMPUTER                              \n";
    cout << "                    Taman Pondok Jati An-09                         \n";
    cout << "====================================================================\n";
    cout << "                         CASH RECEIPT                               \n";
    cout << "====================================================================\n";
    cout << "Deskripsi\t\t\tJumlah\t\tSubtotal\n";
    cout << "--------------------------------------------------------------------\n";

    for (int i = 0; i < daftarLaptop.size(); i++) {
        if (daftarLaptop[i].getJumlahBeli() > 0) {
            cout << daftarLaptop[i].getNama() << "\t"
                 << daftarLaptop[i].getJumlahBeli() << "\t\tRp"
                 << daftarLaptop[i].getSubtotal() << endl;
        }
    }

    cout << "====================================================================\n";
    cout << "Total Unit  : " << totalUnit << " Unit\n";
    cout << "Total Awal  : Rp" << totalHarga << endl;
    cout << "Diskon      : Rp" << diskon << endl;
    cout << "Total Akhir : Rp" << totalAkhir << endl;
    cout << "====================================================================\n";
    cout << "         Terima kasih telah berbelanja di toko kami!                \n";

    return 0;
}