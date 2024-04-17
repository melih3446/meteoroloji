#include<limits>
#include <iostream>
using namespace std;


int main()
{
    char cikis;
    string secim;
    int enDusukgun;
    int  günbilgisi = 10, ortalamaSicaklik, toplamSicaklik=0,enDusuk;
    int günsicakliklari;
    while (1) {
        cout << "programi sonlandirmak icin 'x'e basin devam etmek icin herhangi bir tusa basin:";
        cin >> cikis;
        if (cikis == 'x')
        {
            return 0;
        }
        else
        {

        }
        cout << "hangi ay icin sicaklik bilgisi girilecegini secin(ornk => ocak , subat):\n";
        cin >> secim;
        enDusuk = numeric_limits<int>::max(); //en büyük int değeriyle başlatıyoruz
        for (char& c : secim)
        {
            c = tolower(c);             // kullanıcı girişini küçük harflere döndürür
        }
        
        
        if (secim == "ocak") {
            cout << "ocak ayinin sicaklik degerlerini giriniz: " << endl;
            for (int i = 0; i < günbilgisi; i++)
            {
                cout << "gun " << i + 1 << ": ";
                cin >> günsicakliklari;

                toplamSicaklik += günsicakliklari;
                if (günsicakliklari < enDusuk) {
                    enDusuk = günsicakliklari;
                    enDusukgun = i + 1;
                }
                ortalamaSicaklik = toplamSicaklik / günbilgisi;

            }
            cout << "ortalama sicaklik :" << ortalamaSicaklik << endl;

            cout << "en dusuk sicaklik degeri:" << enDusukgun << "'nci gun:" << enDusuk << endl;

        }
        if (secim == "subat") {
            cout << "subat ayinin sicaklik degerlerini giriniz: " << endl;
            for (int i = 0; i < günbilgisi; i++)
            {
                cout << "gun " << i + 1 << ": ";
                cin >> günsicakliklari;

                toplamSicaklik += günsicakliklari;
                if (günsicakliklari < enDusuk) {
                    enDusuk = günsicakliklari;
                    enDusukgun = i + 1;
                }
                ortalamaSicaklik = toplamSicaklik / günbilgisi;

            }
            cout << "ortalama sicaklik :" << ortalamaSicaklik << endl;

            cout << "en dusuk sicaklik degeri:" << enDusukgun  << enDusuk << endl;
        }
        if (secim == "mart") {
            cout << "mart ayinin sicaklik degerlerini giriniz: " << endl;
            for (int i = 0; i < günbilgisi; i++)
            {
                cout << "gun " << i + 1 << ": ";
                cin >> günsicakliklari;

                toplamSicaklik += günsicakliklari;
                if (günsicakliklari < enDusuk) {
                    enDusuk = günsicakliklari;
                    enDusukgun = i + 1;
                }
                ortalamaSicaklik = toplamSicaklik / günbilgisi;

            }
            cout << "ortalama sicaklik :" << ortalamaSicaklik << endl;

            cout << "en dusuk sicaklik degeri:" << enDusukgun << "'nci gun:" << enDusuk << endl;
        }
        if (secim == "nisan") {
            cout << "nisan ayinin sicaklik degerlerini giriniz: " << endl;
            for (int i = 0; i < günbilgisi; i++)
            {
                cout << "gun " << i + 1 << ": ";
                cin >> günsicakliklari;

                toplamSicaklik += günsicakliklari;
                if (günsicakliklari < enDusuk) {
                    enDusuk = günsicakliklari;
                    enDusukgun = i + 1;
                }
                ortalamaSicaklik = toplamSicaklik / günbilgisi;

            }
            cout << "ortalama sicaklik :" << ortalamaSicaklik << endl;

            cout << "en dusuk sicaklik degeri:" << enDusukgun << "'nci gun:" << enDusuk << endl;
        }
        if (secim == "mayis") {
            cout << "mayis ayinin sicaklik degerlerini giriniz: " << endl;
            for (int i = 0; i < günbilgisi; i++)
            {
                cout << "gun " << i + 1 << ": ";
                cin >> günsicakliklari;

                toplamSicaklik += günsicakliklari;
                if (günsicakliklari < enDusuk) {
                    enDusuk = günsicakliklari;
                    enDusukgun = i + 1;
                }
                ortalamaSicaklik = toplamSicaklik / günbilgisi;

            }
            cout << "ortalama sicaklik :" << ortalamaSicaklik << endl;

            cout << "en dusuk sicaklik degeri:" << enDusukgun << "'nci gun:" << enDusuk << endl;
        }
        if (secim == "haziran") {
            cout << "haziran ayinin sicaklik degerlerini giriniz: " << endl;
            for (int i = 0; i < günbilgisi; i++)
            {
                cout << "gun " << i + 1 << ": ";
                cin >> günsicakliklari;

                toplamSicaklik += günsicakliklari;
                if (günsicakliklari < enDusuk) {
                    enDusuk = günsicakliklari;
                    enDusukgun = i + 1;
                }
                ortalamaSicaklik = toplamSicaklik / günbilgisi;

            }
            cout << "ortalama sicaklik :" << ortalamaSicaklik << endl;

            cout << "en dusuk sicaklik degeri:" << enDusukgun << "'nci gun:" << enDusuk << endl;
        }
        if (secim == "temmuz") {
            cout << "temmuz ayinin sicaklik degerlerini giriniz: " << endl;
            for (int i = 0; i < günbilgisi; i++)
            {
                cout << "gun " << i + 1 << ": ";
                cin >> günsicakliklari;

                toplamSicaklik += günsicakliklari;
                if (günsicakliklari < enDusuk) {
                    enDusuk = günsicakliklari;
                    enDusukgun = i + 1;
                }
                ortalamaSicaklik = toplamSicaklik / günbilgisi;

            }
            cout << "ortalama sicaklik :" << ortalamaSicaklik << endl;

            cout << "en dusuk sicaklik degeri:" << enDusukgun << "'nci gun:" << enDusuk << endl;
        }
        if (secim == "agustos") {
            cout << "agustos ayinin sicaklik degerlerini giriniz: " << endl;
            for (int i = 0; i < günbilgisi; i++)
            {
                cout << "gun " << i + 1 << ": ";
                cin >> günsicakliklari;

                toplamSicaklik += günsicakliklari;
                if (günsicakliklari < enDusuk) {
                    enDusuk = günsicakliklari;
                    enDusukgun = i + 1;
                }
                ortalamaSicaklik = toplamSicaklik / günbilgisi;

            }
            cout << "ortalama sicaklik :" << ortalamaSicaklik << endl;

            cout << "en dusuk sicaklik degeri:" << enDusukgun << "'nci gun:" << enDusuk << endl;
        }
        if (secim == "eylul") {
            cout << "eylul ayinin sicaklik degerlerini giriniz: " << endl;
            for (int i = 0; i < günbilgisi; i++)
            {
                cout << "gun " << i + 1 << ": ";
                cin >> günsicakliklari;

                toplamSicaklik += günsicakliklari;
                if (günsicakliklari < enDusuk) {
                    enDusuk = günsicakliklari;
                    enDusukgun = i + 1;
                }
                ortalamaSicaklik = toplamSicaklik / günbilgisi;

            }
            cout << "ortalama sicaklik :" << ortalamaSicaklik << endl;

            cout << "en dusuk sicaklik degeri:" << enDusukgun << "'nci gun:" << enDusuk << endl;
        }
        if (secim == "ekim") {
            cout << "ekim ayinin sicaklik degerlerini giriniz: " << endl;
            for (int i = 0; i < günbilgisi; i++)
            {
                cout << "gun " << i + 1 << ": ";
                cin >> günsicakliklari;

                toplamSicaklik += günsicakliklari;
                if (günsicakliklari < enDusuk) {
                    enDusuk = günsicakliklari;
                    enDusukgun = i + 1;
                }
                ortalamaSicaklik = toplamSicaklik / günbilgisi;

            }
            cout << "ortalama sicaklik :" << ortalamaSicaklik << endl;

            cout << "en dusuk sicaklik degeri:" << enDusukgun << "'nci gun:" << enDusuk << endl;
        }
        if (secim == "kasim") {
            cout << "kasim ayinin sicaklik degerlerini giriniz: " << endl;
            for (int i = 0; i < günbilgisi; i++)
            {
                cout << "gun " << i + 1 << ": ";
                cin >> günsicakliklari;

                toplamSicaklik += günsicakliklari;
                if (günsicakliklari < enDusuk) {
                    enDusuk = günsicakliklari;
                    enDusukgun = i + 1;
                }
                ortalamaSicaklik = toplamSicaklik / günbilgisi;

            }
            cout << "ortalama sicaklik :" << ortalamaSicaklik << endl;

            cout << "en dusuk sicaklik degeri:" << enDusukgun << "'nci gun:" << enDusuk << endl;
        }
        if (secim == "aralik") {
            cout << "aralik ayinin sicaklik degerlerini giriniz: " << endl;
            for (int i = 0; i < günbilgisi; i++)
            {
                cout << "gun " << i + 1 << ": ";
                cin >> günsicakliklari;

                toplamSicaklik += günsicakliklari;
                if (günsicakliklari < enDusuk) 
                {
                    enDusuk = günsicakliklari;
                    enDusukgun = i + 1;
                }
                ortalamaSicaklik = toplamSicaklik / günbilgisi;

            }
            cout << "ortalama sicaklik :" << ortalamaSicaklik << endl;

            cout << "en dusuk sicaklik degeri:" << enDusukgun << "'nci gun:" << enDusuk << endl;
        }
    }
    return 1;
}