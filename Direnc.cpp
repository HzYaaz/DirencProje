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


void Direnc::DegerAta(int r1)    // Main fonksiyonunun i�inde tan�mlad���m�z R (diren�) de�i�kenimizi , burada tan�mlad���m�z r1 de�i�kenine at�yoruz. 
{								// r1 diye tan�mlama nedenimiz , compile ederken herhangi bir hatayla kar��la�mamak i�in.
	r = r1;
}

double Direnc::AkimHesapla(double katsayi)		// Main fonksiyonu i�indeki kullan�c�dan ald���m�z V (gerilim) katsay� de�i�kenini , burada tan�mlad���m�z katsayi de�i�kenine at�yoruz.
{									
	v = katsayi;
	i = (double) v / r;    // iki de�er de tam say� olaca��ndan ve bunlar b�l�nece�inden dolay� , sonucu double d�nd�r�yoruz.
	return i;
}

int Direnc::GerilimHesapla(int katsayi)		//	Burada da ayn� �ekilde main fonksiyonunun i�inde kullan�c�dan ald���m�z I (ak�m) katsay� de�i�kenini , burada tan�mlad���m�z katsayi de�i�kenine at�yoruz.
{
	i = katsayi;		
	v = i * r;

	return v;
}


