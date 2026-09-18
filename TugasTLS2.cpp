#include <iostream>
using namespace std;

int hitung_panjang(char teks[]) {
    int panjang = 0;
    while (teks[panjang] != '\0') {
        panjang++;
    }
    return panjang;
}

int main() {
    char pesan_asli[100];
    char pesan_sandi[100];
    
    cout << "Masukkan pesan asli (huruf kapital): ";
    cin >> pesan_asli;

    int panjang_teks = hitung_panjang(pesan_asli);

    pesan_sandi[0] = pesan_asli[0];

    for (int i = 1; i < panjang_teks; i++) {
        
        int nilai_sekarang = pesan_asli[i] - 'A' + 1;
        int nilai_sebelumnya = pesan_asli[i - 1] - 'A' + 1;
        
        int jumlah_nilai = nilai_sekarang + nilai_sebelumnya;
        
        int nilai_akhir = (jumlah_nilai - 1) % 26 + 1;
        
        pesan_sandi[i] = nilai_akhir - 1 + 'A';
    }
    
    pesan_sandi[panjang_teks] = '\0';
    
    cout << "Pesan sandi: " << pesan_sandi << endl;
    
    return 0;
}