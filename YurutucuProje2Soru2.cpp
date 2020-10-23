// Yağızcem CENGİZ


#include "Direnc.h"
#include <iostream>
using namespace std;

int main()
{
    Direnc direnc;
    int r;
    double katsayi;

    cout << "R direnc parametresinin degeri olarak bir sayi giriniz : "; //
    cin >> r;															 // Bu 3 kod satırında , kullanıcıdan R (direnç) parametre değerini istiyoruz ve bu girilen değeri DegerAta() fonksiyonundaki r1'e eşitliyoruz.
    direnc.DegerAta(r);													//
    
	cout << endl;
    
    cout << "V gerilim parametresinin degeri olarak bir tamsayi giriniz : "; //
    cin >> katsayi;															 // Bu 3 kod satırında , kullanicidan V (gerilim) parametre değerini alıyoruz ve direnc.AkimHesapla(katsayi) fonksiyonumuzla AkimHesapla() fonksiyonu içindeki işlemi yaptırıp , yazdırıyoruz.
    cout << endl << "Akim (I): " << direnc.AkimHesapla(katsayi) << endl;     //

    cout << endl;

    cout << "R direnc parametresinin degeri olarak bir sayi giriniz : ";     //
    cin >> r;															     //
    direnc.DegerAta(r); 													 //
    cout << endl;															 //	Yeniden R değişkenini alıyoruz. Çünkü bu sefer V (gerilim)'yi hesaplattıracağız.  Tekrardan R yi kullanıcıdan alıp , fonksiyonumuza değerimizi atıyoruz. Ardından Akım(I) yı alıp GerilimHesapla() fonksiyonu içindeki işlemi yaptırıp , yazdırıyoruz.
    cout << "I akim parametresinin degeri olarak bir sayi giriniz : ";		//
    cin >> katsayi;															//
    cout << endl << "Gerilim (V): " << direnc.GerilimHesapla(katsayi) << endl; //


    system("pause");


    return 0;
}


