// Ya��zcem CENG�Z
// 170757058
// Bilgisayar M�hendisli�i
// Nesneye Y�nelik Programlama BIM - 104
// II. D�nem (2. yar�y�l)
// Proje2
// Dr. ��r. �yesi G�l�ah T�M�KL� �ZYER


#include "Direnc.h"
#include <iostream>
using namespace std;

int main()
{
    Direnc direnc;
    int r;
    double katsayi;

    cout << "R direnc parametresinin degeri olarak bir sayi giriniz : "; //
    cin >> r;															 // Bu 3 kod sat�r�nda , kullan�c�dan R (diren�) parametre de�erini istiyoruz ve bu girilen de�eri DegerAta() fonksiyonundaki r1'e e�itliyoruz.
    direnc.DegerAta(r);													//
    
	cout << endl;
    
    cout << "V gerilim parametresinin degeri olarak bir tamsayi giriniz : "; //
    cin >> katsayi;															 // Bu 3 kod sat�r�nda , kullanicidan V (gerilim) parametre de�erini al�yoruz ve direnc.AkimHesapla(katsayi) fonksiyonumuzla AkimHesapla() fonksiyonu i�indeki i�lemi yapt�r�p , yazd�r�yoruz.
    cout << endl << "Akim (I): " << direnc.AkimHesapla(katsayi) << endl;     //

    cout << endl;

    cout << "R direnc parametresinin degeri olarak bir sayi giriniz : ";     //
    cin >> r;															     //
    direnc.DegerAta(r); 													 //
    cout << endl;															 //	Yeniden R de�i�kenini al�yoruz. ��nk� bu sefer V (gerilim)'yi hesaplatt�raca��z.  Tekrardan R yi kullan�c�dan al�p , fonksiyonumuza de�erimizi at�yoruz. Ard�ndan Ak�m(I) y� al�p GerilimHesapla() fonksiyonu i�indeki i�lemi yapt�r�p , yazd�r�yoruz.
    cout << "I akim parametresinin degeri olarak bir sayi giriniz : ";		//
    cin >> katsayi;															//
    cout << endl << "Gerilim (V): " << direnc.GerilimHesapla(katsayi) << endl; //


    system("pause");


    return 0;
}


