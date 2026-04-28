#include <iostream>
using namespace std;

class layanglayang 
{
    private :
        int diagonalPertama , diagonalKedua , sisiPanjang , sisiPendek , hasilLuas , HasilKeliling;

        public :
             void luas()
             {
                hasilLuas = 0.5 * diagonalPertama * diagonalKedua ;
             }

            void keliling()
            {
                HasilKeliling = sisiPendek * sisiPanjang * sisiPendek * sisiPanjang ;
            }

            void input ()
            {
                cout << " Masukan Diagonal Pertama :  " ;
                cin >> diagonalPertama;
                cout << " Masukan Diagonal Kedua : " ;
                cin >> diagonalKedua;

                cout << " Masukan Sisi Panjang : " ;
                cin >> sisiPanjang;
                cout << " Masukan Sisi Pendek : " ;
                cin >> sisiPendek;
            }

            void output ()
            {
                cout << " Hasil Luas : " << hasilLuas << endl;

                cout << " Hasil Keliling : " << HasilKeliling << endl;
            }
            
        friend class BelahKetupat;
 };

 class BelahKetupat
 {
    private :
        int diagonalPertama , diagonalKedua ,sisi,hasilluas,hasilkeliling;

        public :

        void Luas ()
        {
            hasilluas = 0.5 * diagonalPertama * diagonalKedua;
        }

        void Keliling ()
        {
            hasilkeliling = 4 * sisi ;
        }

        void Input ()
        {
            cout << " Masukan Diagonal Pertama :" ;
            cin >> diagonalPertama;
            cout << " Masukan Diagonal Kedua : ";
            cin >> diagonalKedua;

            cout << " Masukan Panjang Sisi : ";
            cin >> sisi;
        }

        void Output ()
        {
            cout << " Hasil Luas = "<< hasilluas << endl;
            

            cout << " Hasil Keliling = " << hasilkeliling << endl;

        }

        friend class layanglayang;
 };

 int main ()
 {
    layanglayang layangan;
    BelahKetupat Ketupat;

    cout << "===============================" << endl;
    cout << " Masukan Variable LayangLayang " << endl;
    cout << "===============================" << endl;
    layangan.input();
    layangan.luas();
    layangan.keliling();
    layangan.output();

    cout << endl;

     cout << "===============================" << endl;
     cout << " Masukan Variable BelahKetupat " << endl;
     cout << "===============================" << endl;
    Ketupat.Input();
    Ketupat.Luas();
    Ketupat.Keliling();
    Ketupat.Output();
    
    cout << endl;
    
    return 0;

 }
