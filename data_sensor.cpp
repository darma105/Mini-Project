

#include <iostream>
#include <vector>

using namespace std;

int main (){


int Program;    
float Suhu;
float Tekanan;


vector<float> DataSuhu;
vector<float> DataTekanan;


do{

cout << "============= PROGRAM =============" << endl;
cout << "1. Input Data Suhu Baru" << endl;
cout << "2. Input Data Tekanan Baru" << endl;
cout << "3. Lihat Data Suhu" << endl;
cout << "4. Lihat Data Tekanan" << endl;
cout << "5. Keluar" << endl;
cout << "========== PILIH PROGRAM ==========" << endl;
cin >> Program;

if (Program == 1){
    cout << "SUHU : ";
    cin >> Suhu;
    DataSuhu.push_back(Suhu);
    cout << endl << endl << endl;
}    
else if (Program == 2){
    cout << "TEKANAN : ";
    cin >> Tekanan;
    DataTekanan.push_back(Tekanan);
    cout << endl << endl << endl;
}
else if (Program == 3){
    cout << endl << endl;
    cout << "DATA SUHU TERBARU :" << endl;
    for (int i = 0; i < DataSuhu.size(); i++){
    cout << "Data ke - " << i + 1 << " = " << DataSuhu[i] << endl;
    }
    cout << endl;
}
else if (Program == 4){
    cout << endl << endl;
    cout << "DATA TEKANAN TERBARU :" << endl;
    for (int i = 0; i < DataTekanan.size(); i++){
    cout << "Data ke - " << i + 1 << " = " << DataTekanan[i] << endl;
    }
    cout << endl;
}
else if (Program == 5){
    break;
}
else {
    cout << endl << endl << endl << "========== SILAHKAN MEMILIH OPSI ==========" << endl << endl;
}
} while (Program != 5 );



    return 0;

}