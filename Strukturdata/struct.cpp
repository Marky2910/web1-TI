#include <iostream>
using namespace std;
//MARK SIREGAR
//2281071

struct mahasiswa{
    char nama[60]; //member pertama dri struct mahasiswa
    int umur;
    float ipk;
    
};

mahasiswa datamahas(mahasiswa m1){
    cout<<"Masukkan data mahasiswa disini: \n";
    cout<<"Input nama mahasiswa: ";
    cin>>m1.nama;
    cout<<"Input umur mahasiswa: ";
    cin>>m1.umur;
    cout<<"Input ipk mahasiswa: ";
    cin>>m1.ipk;

    return m1;

}

void display(mahasiswa m1){
     cout<<"\n-----Informasi Mahasiswa------"<<endl;
    cout<<"Nama: "<<m1.nama<<endl;
    cout<<"Umur: "<<m1.umur<<endl;
    cout<<"IPK: "<<m1.ipk<<endl;

}
int main() { /*
    mahasiswa m1;
    cout<<"Masukkan data mahasiswa disini: \n";
    cout<<"Input nama mahasiswa: ";
    cin>>m1.nama;
    cout<<"Input umur mahasiswa: ";
    cin>>m1.umur;
    cout<<"Input ipk mahasiswa: ";
    cin>>m1.ipk;

    //menampilkan info yg di input
    cout<<"\n-----Informasi Mahasiswa------"<<endl;
    cout<<"Nama: "<<m1.nama<<endl;
    cout<<"Umur: "<<m1.umur<<endl;
    cout<<"IPK: "<<m1.ipk<<endl;
*/

    return 0;
}