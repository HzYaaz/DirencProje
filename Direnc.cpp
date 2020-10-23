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


void Direnc::DegerAta(int r1)    // Main fonksiyonunun içinde tanýmladýðýmýz R (direnç) deðiþkenimizi , burada tanýmladýðýmýz r1 deðiþkenine atýyoruz. 
{								// r1 diye tanýmlama nedenimiz , compile ederken herhangi bir hatayla karþýlaþmamak için.
	r = r1;
}

double Direnc::AkimHesapla(double katsayi)		// Main fonksiyonu içindeki kullanýcýdan aldýðýmýz V (gerilim) katsayý deðiþkenini , burada tanýmladýðýmýz katsayi deðiþkenine atýyoruz.
{									
	v = katsayi;
	i = (double) v / r;    // iki deðer de tam sayý olacaðýndan ve bunlar bölüneceðinden dolayý , sonucu double döndürüyoruz.
	return i;
}

int Direnc::GerilimHesapla(int katsayi)		//	Burada da ayný þekilde main fonksiyonunun içinde kullanýcýdan aldýðýmýz I (akým) katsayý deðiþkenini , burada tanýmladýðýmýz katsayi deðiþkenine atýyoruz.
{
	i = katsayi;		
	v = i * r;

	return v;
}


