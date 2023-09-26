#include <iostream>
using namespace std;

int main(){
    int *pointerInt; //deklarasi variabel pointer

    float *pointerFloat;

    //alokasi memori dinamis
    pointerInt = new int;
    pointerFloat = new float;

    cout<<"Alamat yang saat ini disimpan oleh pointerInt = "<<pointerInt<<endl;
    cout<<"Alamat yang saat ini disimpan oleh pointerFloat = "<<pointerFloat<<endl;
    cout<<"Nilai saat ini yang disimpan oleh pointerInt = "<<*pointerInt<<endl;
    cout<<"Nilai saat ini yang disimpan oleh pointerFloat = "<<*pointerFloat<<endl;

    *pointerInt = 57;
    *pointerFloat = 34;

    cout<<"Setelah assign nilai ke variabel pointer: "<<endl;
    cout<<"Nilai saat ini yang disimpan oleh pointerInt = "<<*pointerInt<<endl;
    cout<<"Nilai saat ini yang disimpan oleh pointerFloat = "<<*pointerFloat<<endl;

    //dealokasi memori
    //menghapus nilai yg disimpan di alamat yg ditunjuk oleh pointerInt dan pointerFloat
    delete pointerInt; //pointerInt = NULL
    delete pointerFloat; //pointerFloat = NULL

    return 0;
}