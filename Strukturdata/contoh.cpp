#include <iostream>
using namespace std;

int main() {
    int contoh[4] = {8, 2, 1, 6};
    int *ptrcontoh;

    cout << "Menampilkan alamat elemen array menggunakan array dan operator referensi : " << endl;
    for (int i = 0; i < 4; i++) {
        cout << "&contoh[" << i << "] = " << &contoh[i] << endl;
    }

    cout << "Menampilkan alamat elemen array menggunakan pointer: " << endl;
    ptrcontoh = contoh;
    for (int i = 0; i < 4; i++) {
        cout << "pointer + " << i << " = " << ptrcontoh + i << endl; // Corrected this line
    }

    cout << "Menampilkan nilai dari setiap elemen pada array contoh: " << endl;
    cout << "Akses berdasarkan indeks array : " << contoh[0] << endl;
    cout << "Akses menggunakan pointer : " << *ptrcontoh << endl;
    ptrcontoh = &contoh[0];
    cout << "Akses menggunakan pointer untuk elemen ke-dua dalam array: " << (*(ptrcontoh + 1)) << endl; // Corrected this line

    return 0;
}
