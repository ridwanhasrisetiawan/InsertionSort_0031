#include <iostream>
using namespace std;

int arr[20];
int n;

void input()
{
    while (true)
    {
        cout << "Masukkan Jumlah Data pada Array : ";
        cin >> n;

        if (n <= 20)
        {
            break;
        }
        else
        {
            cout << "\nArray yang anda masukkan maksimal 20 Elemen.\n";
        }
    }
    cout << endl; 
    cout << "======================" << endl;
    cout << "Masukkan Element Array" << endl;
    cout << "======================" << endl;
}