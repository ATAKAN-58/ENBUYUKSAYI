#include <iostream>
using namespace std;

int enBuyukSayiyiHesapla(int hesaplanacakDizi[], int uzunluk) {
    int enBuyukSayi = hesaplanacakDizi[0];

    for (int i = 0; i < uzunluk; i++) {
        if (hesaplanacakDizi[i] > enBuyukSayi) {
            enBuyukSayi = hesaplanacakDizi[i];
        }
    }

    return enBuyukSayi;
}

int main() {
    int sayilar1[5] = {88, 555, 33, 11, 44};
    int sayilar2[6] = {55, 66, 88, 777, 11, 44};
    int sayilar3[5] = {6, 777, 555, 33, 11};
    int sayilar4[5] = {88, 99, 88, 11, 44};

    int donusDegeri1 = enBuyukSayiyiHesapla(sayilar1, 5);
    int donusDegeri2 = enBuyukSayiyiHesapla(sayilar2, 6);
    int donusDegeri3 = enBuyukSayiyiHesapla(sayilar3, 5);
    int donusDegeri4 = enBuyukSayiyiHesapla(sayilar4, 5);

    cout << "En Buyuk Sayi 1: " << donusDegeri1 << endl;
    cout << "En Buyuk Sayi 2: " << donusDegeri2 << endl;
    cout << "En Buyuk Sayi 3: " << donusDegeri3 << endl;
    cout << "En Buyuk Sayi 4: " << donusDegeri4 << endl;

    return 0;
}