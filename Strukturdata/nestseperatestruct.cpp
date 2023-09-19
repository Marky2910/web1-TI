#include <iostream>
using namespace std;
//MARK SIREGAR
//2281071


int main() {
  int c; //variabel yg menyimpan satu nilai integer
  int *pc; //dekalrasi pointer

  c = 5; //assign nilai 5 ke variabel c
  //contoh penggunaan dari operator referensi (&) dan deferensi (*) (mengambil nilai) 

  cout << "Alamat dari variabel c (&c) adalah " <<&c<<endl; //mengambil alamat dari c
  cout << "Nilai dari variabel c adalah " <<c<<endl;

  pc = &c; //alamat dari var c disimpan di pointer pc
  cout << "Alamat yang berada di variabel pointer pc = "<<pc<<endl;
  cout << "Nilai yang disimpan di alamat "<<pc<<" adalah "<<*pc<<endl;

  *pc = 7; //mengubah nilai yang berada di alamat yang ditunjuk oleh pointer pc
  c = 11;

  cout << "Alamat yang berada di variabel pointer pc"<<pc<<endl;
  cout << "Nilai yang disimpan di alamat "<<pc<<" adalah "<<*pc<<endl;
  cout << "Nilai dari variabel c saat ini adalah " << c << endl;

  pc = nullptr;

  return 0;
}