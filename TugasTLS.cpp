#include <iostream>
using namespace std;

int main() {
    int n, k;
    
    cout << "Masukkan jumlah astronot (N): ";
    cin >> n;
    cout << "Masukkan nilai K awal: ";
    cin >> k;

    int* astronot = new int[n];
    for (int i = 0; i < n; i++) {
        astronot[i] = i + 1;
    }

    int sisa_astronot = n;
    int indeks = 0;

    cout << "Urutan eliminasi: ";
    
    while (sisa_astronot > 1) {
    
        indeks = (indeks + k - 1) % sisa_astronot;
        
        int tereliminasi = astronot[indeks];
        cout << tereliminasi << " ";

        
        if (tereliminasi % 2 == 0) {
            k += 2;
        } else {
            k -= 1;
        }
        
        if (k < 2) {
            k = 2;
        }

        for (int i = indeks; i < sisa_astronot - 1; i++) {
            astronot[i] = astronot[i + 1];
        }
        
        sisa_astronot--;
    }

    cout << "\nAstronot terakhir yang bertahan: " << astronot[0] << endl;

    delete[] astronot;
    
    return 0;
}