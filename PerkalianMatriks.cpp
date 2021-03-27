#include <iostream>

using namespace std;


int main() {
    int matriks1[3][3], matriks2[3][3], hasil[3][3];
    int i, j, k, m, n, p, q, jumlah = 0;

    cout<<"=================================== \n";
    cout<<"======== Matriks Perkalian ======== \n";
    cout<<"=================================== \n";
    cout<<"\n"<<endl;

    cout<<"1. Masukkan jumlah BARIS matrik 1 maks(3) : ";
    cin>>m;
    cout<<"2. Masukkan jumlah KOLOM matrik 1 maks(3) : ";
    cin>>n;

    cout<<"3. Masukkan jumlah BARIS matrik 2 maks(3) : ";
    cin>>p;
    cout<<"4. Masukkan jumlah KOLOM matrik 2 maks(3) : ";
    cin>>q;

    if(m > 3 || n > 3 || p > 3 || q > 3){
        cout<<"!!! KOLOM atau BARIS maksimal 3 !!!";
    } else if(n != p){
        cout << "Matriks tidak dapat dikalikan satu sama lain.\n";
        } else {
            cout << "Masukkan elemen matriks pertama: \n";
            for(i = 0; i < m; i++){
                for(j = 0; j < n; j++){
                    cin >> matriks1[i][j];
                }
            }
            cout << "Masukkan elemen matriks kedua: \n";
            for(i = 0; i < p; i++){
                for(j = 0; j < q; j++){
                    cin >> matriks2[i][j];
                }
            }
            for(i = 0; i < m; i++){
                for(j = 0; j < q; j++){
                    for(k = 0; k < p; k++){
                        jumlah = jumlah + matriks1[i][k] * matriks2[k][j];
                    }
                    hasil[i][j] = jumlah;
                    jumlah = 0;
                }
            }
            cout << "Hasil perkalian matriks: \n";
            for(i = 0; i < m; i++){
                for(j = 0; j < n; j++){
                    cout << hasil[i][j] << "\t";
                }
                cout << endl;
            }
        }



    return 0;
}
