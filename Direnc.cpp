// Yağızcem CENGİZ


#include "Direnc.h"
#include <iostream>
using namespace std;


void Direnc::DegerAta(int r1)    // Main fonksiyonunun içinde tanımladığımız R (direnç) değişkenimizi , burada tanımladığımız r1 değişkenine atıyoruz. 
{								// r1 diye tanımlama nedenimiz , compile ederken herhangi bir hatayla karşılaşmamak için.
	r = r1;
}

double Direnc::AkimHesapla(double katsayi)		// Main fonksiyonu içindeki kullanıcıdan aldığımız V (gerilim) katsayı değişkenini , burada tanımladığımız katsayi değişkenine atıyoruz.
{									
	v = katsayi;
	i = (double) v / r;    // iki değer de tam sayı olacağından ve bunlar bölüneceğinden dolayı , sonucu double döndürüyoruz.
	return i;
}

int Direnc::GerilimHesapla(int katsayi)		//	Burada da aynı şekilde main fonksiyonunun içinde kullanıcıdan aldığımız I (akım) katsayı değişkenini , burada tanımladığımız katsayi değişkenine atıyoruz.
{
	i = katsayi;		
	v = i * r;

	return v;
}


