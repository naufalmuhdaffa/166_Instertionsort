#include <iostream>
using namespace std;
int arr[20];                // Membuat Array dengan panjang data 20
int n;                      // Membuat Variabel inputan n

void input() {                                                              // Procedure Input
    while (true)
    {
        cout << "Masukkan jumlah data array : ";                            // Membuat Inputan jumlah elemen Array
        cin >> n;                                                           // Memanggil Variabel inputan n

        if (n <= 20) {                                                      // Membuat kondisi n tidak lebih dari 20
            break;
        }
        else
        {
            cout << "\nArray yang anda masukkan maksimal 20 Elemen.\n";     // Menampilkan pesan jika data lebih dari 20
        }
    }
}

int main()
{
    
}