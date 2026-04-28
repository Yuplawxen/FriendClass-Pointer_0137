#include <iostream>
using namespace std;

class mahasiswa {
    public :
        int nim;
        void showNim(){
            cout << " No Induk = " << nim << endl;
        }
};

int main () {
    mahasiswa mhs{1}; // objek mhs
    mhs.showNim(); // Member Acces Opeator 

    mahasiswa &refmhs = mhs; //Point Reference refMhs
    refmhs.nim = 2; // Member Acces Operator 
    mhs.showNim();

    mahasiswa *pMhs = &mhs; //Pointer Dereference pMhs
    pMhs -> nim = 3; // arrow operator
    pMhs -> showNim();
    return 0;
}