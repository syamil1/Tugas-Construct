#include<iostream>

using namespace std;

int main() {
    // bensin 40km / liter && harga 10000 perliter
    int tempat[10], jum;
    float hasil, jarak = 0 ,harga;

    cout << "Hari Ini Alice Pergi Ke Berapa Tempat? : ";
    cin >> jum;

    for (int i = 1; i <= jum; i++) {
        cout << "Masukan Jarak Perjalanan Dari Rumah Alice Ke Tempat " << i << " (Dalam Bentuk KiloMeter)= ";
        cin >> tempat[i];
        jarak += tempat[i];
    }

    hasil = jarak / 40;
    harga = hasil * 10000;

    cout << endl; 
    cout << "Alice Menggunakan Bensin Sebanyak : " << hasil << ".L" << endl;
    cout << "Total Biaya Yang Alice Keluarkan : " << harga;

}



