/****************************************************************************
**					          SAKARYA ÜNÝVERSÝTESÝ
**			         BÝLGÝSAYAR VE BÝLÝÞÝM BÝLÝMLERÝ FAKÜLTESÝ
**				          BÝLGÝSAYAR MÜHENDÝSLÝÐÝ BÖLÜMÜ
**				            PROGRAMLAMAYA GÝRÝÞÝ DERSÝ
**
**				ÖDEV NUMARASI…...:Ödev1 & Soru2
**				ÖÐRENCÝ ADI......:Davud Samed Tombul
**				ÖÐRENCÝ NUMARASI.:B171210007
**				DERS GRUBU…………...:1D
****************************************************************************/

#include<iostream>//Temel komutlarý kullanmamýz için gerekli kütüphane
#include<locale.h>//Farklý karakter kullanýmý için gerekli kütüphane
#include<conio.h>//_getche komutu için gerekli
#include<iomanip>//Setw manipülatörünün kullanýlmasý için gerekli
using namespace std;

int main()
{
	//Türkçe karakter kullanabilmemizi saðlýyor..
	setlocale(LC_ALL, "Turkish");


	int tekrara = 0, tekrare = 0, tekrarý = 0, tekrari = 0, tekraro = 0, tekrarö = 0, tekraru = 0, tekrarü = 0;

	char ch;

	cout << "Bir Cümle Giriniz : ";

	//Enter tuþuna basýlana kadar girilen karakterler okunuyor.
	while ((ch = _getche()) != '\r')

	{
		if (ch == 'a' || ch == 'A')
			tekrara++;
		if (ch == 'e' || ch == 'E')
			tekrare++;
		if (ch == char(-115) || ch == 'I')
			tekrarý++;
		if (ch == 'i' || ch == char(152))
			tekrari++;
		if (ch == 'o' || ch == 'O')
			tekraro++;
		if (ch == char(148) || ch == char(153))
			tekrarö++;
		if (ch == 'u' || ch == 'U')
			tekraru++;
		if (ch == char(129) || ch == char(154))
			tekrarü++;
	}

	cout << "\n";
	//En çok basýlan sesli harf tesbit ediliyor
	int gecici = tekrara;

	if (gecici < tekrare)
		gecici = tekrare;
	else if (gecici < tekrarý)
		gecici = tekrarý;
	else if (gecici < tekrari)
		gecici = tekrari;
	else if (gecici < tekraro)
		gecici = tekraro;
	else if (gecici < tekrarö)
		gecici = tekrarö;
	else if (gecici < tekraru)
		gecici = tekraru;
	else if (gecici < tekrarü)
		gecici = tekrarü;

	cout << 'H' << setw(5) << "TS";
	//En çok basýlan karakterin sayýsýnca rakamlar 1 den itibaren tabloya yazýlýr.
	for (int k = 1; k <= gecici; k++)
		cout << setw(5) << k;

	cout << "\n";
	//Harfler ve basým sayýlarý tabloya aktarýlýyor.

	cout << 'a' << setw(5) << tekrara;
	for (int t = 1; t <= tekrara; t++)
		cout << setw(5) << 'a';
	cout << "\n";

	cout << 'e' << setw(5) << tekrare;
	for (int t = 1; t <= tekrare; t++)
		cout << setw(5) << 'e';
	cout << "\n";

	cout << 'ý' << setw(5) << tekrarý;
	for (int t = 1; t <= tekrarý; t++)
		cout << setw(5) << 'ý';
	cout << "\n";

	cout << 'i' << setw(5) << tekrari;
	for (int t = 1; t <= tekrari; t++)
		cout << setw(5) << 'i';
	cout << "\n";

	cout << 'o' << setw(5) << tekraro;
	for (int t = 1; t <= tekraro; t++)
		cout << setw(5) << 'o';
	cout << "\n";

	cout << 'ö' << setw(5) << tekrarö;
	for (int t = 1; t <= tekrarö; t++)
		cout << setw(5) << 'ö';
	cout << "\n";

	cout << 'u' << setw(5) << tekraru;
	for (int t = 1; t <= tekraru; t++)
		cout << setw(5) << 'u';
	cout << "\n";

	cout << 'ü' << setw(5) << tekrarü;

	for (int t = 1; t <= tekrarü; t++)
		cout << setw(5) << 'ü';
	cout << "\n";


	system("pause");
	return 0;
}