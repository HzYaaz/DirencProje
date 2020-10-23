// Yaðýzcem CENGÝZ
// 170757058
// Bilgisayar Mühendisliði
// Nesneye Yönelik Programlama BIM - 104
// II. Dönem (2. yarýyýl)
// Proje2
// Dr. Öðr. Üyesi Gülþah TÜMÜKLÜ ÖZYER


#include "Direnc.h"
#include <iostream>
using namespace std;

int main()
{
    Direnc direnc;
    int r;
    double katsayi;

    cout << "R direnc parametresinin degeri olarak bir sayi giriniz : "; //
    cin >> r;															 // Bu 3 kod satýrýnda , kullanýcýdan R (direnç) parametre deðerini istiyoruz ve bu girilen deðeri DegerAta() fonksiyonundaki r1'e eþitliyoruz.
    direnc.DegerAta(r);													//
    
	cout << endl;
    
    cout << "V gerilim parametresinin degeri olarak bir tamsayi giriniz : "; //
    cin >> katsayi;															 // Bu 3 kod satýrýnda , kullanicidan V (gerilim) parametre deðerini alýyoruz ve direnc.AkimHesapla(katsayi) fonksiyonumuzla AkimHesapla() fonksiyonu içindeki iþlemi yaptýrýp , yazdýrýyoruz.
    cout << endl << "Akim (I): " << direnc.AkimHesapla(katsayi) << endl;     //

    cout << endl;

    cout << "R direnc parametresinin degeri olarak bir sayi giriniz : ";     //
    cin >> r;															     //
    direnc.DegerAta(r); 													 //
    cout << endl;															 //	Yeniden R deðiþkenini alýyoruz. Çünkü bu sefer V (gerilim)'yi hesaplattýracaðýz.  Tekrardan R yi kullanýcýdan alýp , fonksiyonumuza deðerimizi atýyoruz. Ardýndan Akým(I) yý alýp GerilimHesapla() fonksiyonu içindeki iþlemi yaptýrýp , yazdýrýyoruz.
    cout << "I akim parametresinin degeri olarak bir sayi giriniz : ";		//
    cin >> katsayi;															//
    cout << endl << "Gerilim (V): " << direnc.GerilimHesapla(katsayi) << endl; //


    system("pause");


    return 0;
}


