#include <iostream>

using namespace std;

int main()
{
    // deklarasi variabel
    int baris, kolom;
    char jawab_back, ulangi;

// input matriks pertama
awal:
    system("cls");
    cout << "========================================" << endl;
    cout << "                 MATRIKS              " << endl;
    cout << "========================================" << endl;
    cout << "Masukkan jumlah baris : ";
    cin >> baris;
    cout << "masukkan jumlah kolom : ";
    cin >> kolom;

    // inisialisasi variable matriks
    int matriksA[baris][kolom], matriksB[baris][kolom], matriksC[baris][kolom];
    int opsi; // variabel untuk opsi

    // jika baris tidak sesuai dengan kolom
    if (baris != kolom)
    {
        cout << "========================================" << endl;
        cout << "          MATRIKS TIDAK SESUAI!       " << endl;
        cout << "========================================" << endl;
    }
    else
    {

        // input nilai ke matriksA
        system("cls");
        cout << "========================================" << endl;
        cout << "   MASUKKAN ELEMEN MATRIKS PERTAMA : " << endl;
        cout << "========================================" << endl;
        for (int i = 0; i < baris; i++)
        {
            for (int j = 0; j < kolom; j++)
            {
                cout << "Matriks [" << i << "][" << j << "] : ";
                cin >> matriksA[i][j];
            }
        }
        // input nilai ke matriksB
        cout << "========================================" << endl;
        cout << "     MASUKKAN ELEMEN MATRIKS KEDUA : " << endl;
        cout << "========================================" << endl;
        for (int i = 0; i < baris; i++)
        {
            for (int j = 0; j < kolom; j++)
            {
                cout << "MatriksB [" << i << "][" << j << "] : ";
                cin >> matriksB[i][j];
            }
        }

    // menu opsi
    ulangi:
        system("cls");
        cout << "========================================" << endl;
        cout << "                   OPSI                 " << endl;
        cout << "========================================" << endl;
        cout << "1.Penjumlahan" << endl;
        cout << "2.Perkalian  " << endl;
        cout << "========================================" << endl;
        cout << "Pilih opsi : ";
        cin >> opsi;

        // program penjumlahan matriks
        system("cls");
        if (opsi == 1)
        {
            cout << "========================================" << endl;
            cout << "           PENJUMLAHAN MATRIKS          " << endl;
            cout << "========================================" << endl;
            for (int i = 0; i < baris; i++)
            {
                for (int j = 0; j < kolom; j++)
                {
                    matriksC[i][j] = matriksA[i][j] + matriksB[i][j];
                    cout << "[" << i << "] | [" << j << "] | hasil : " << matriksC[i][j] << " " << " | ";
                }
                cout << endl;
            }
        }
        // program perkalian matriks
        else if (opsi == 2)
        {
            cout << "=================================================" << endl;
            cout << "                PENJUMLAHAN MATRIKS          " << endl;
            cout << "=================================================" << endl;
            for (int i = 0; i < baris; i++)
            {
                for (int j = 0; j < kolom; j++)
                {
                    matriksC[i][j] = matriksA[i][j] * matriksB[i][j];
                    cout << "[" << i << "] | [" << j << "] | hasil : " << matriksC[i][j] << " " << " | ";
                }
                cout << endl;
            }
        }
        // logika ketika input salah
        else
        {
        pertanyaan:
            system("cls");
            cout << "========================================" << endl;
            cout << "       Opsi salah ulangi lagi (y/t)     " << endl;
            cin >> ulangi;
            cout << "========================================" << endl;
            if (ulangi == 'y' || ulangi == 'Y')
            {
                goto ulangi;
            }
            if (ulangi == 't' || ulangi == 'T')
            {
                goto berhenti;
                exit(0);
            }
            else
            {
                goto pertanyaan;
            }
        }
    }

    // program pengulangan jika ada yang salah / mau selesai
    cout << "========================================" << endl;
    cout << "      ULANGI PROGRAM INI LAGI (Y/T) ? " << endl;
    cout << "Jawab : ";
    cin >> jawab_back;
    cout << "========================================" << endl;

    if (jawab_back == 'y' || jawab_back == 'Y')
    {
        goto awal;
    }
    else if (jawab_back == 't' || jawab_back == 'T')
    {
        goto berhenti;
    }
    else
    {
        goto pertanyaan;
    }

berhenti:
    cout << "TERIMAKASIH" << endl;
    exit(0);
}
