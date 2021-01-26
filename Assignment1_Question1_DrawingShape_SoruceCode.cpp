/****************************************************************************
**					         SAKARYA ÜNÝVERSÝTESÝ
**			         BÝLGÝSAYAR VE BÝLÝÞÝM BÝLÝMLERÝ FAKÜLTESÝ
**				        BÝLGÝSAYAR MÜHENDÝSLÝÐÝ BÖLÜMÜ
**				          PROGRAMLAMAYA GÝRÝÞÝ DERSÝ
**
**				ÖDEV NUMARASI…...: Ödev1 & Soru1
**				ÖÐRENCÝ ADI......: Davud Samed Tombul
**				ÖÐRENCÝ NUMARASI.: B171210007
**				DERS GRUBU…………...: Örgün Eðitim D Grubu
****************************************************************************/

#include<iostream>//Cout gibi temel komutlarý kullanabilmemiz için kütüphane ekliyor.
using namespace std;//Her cout yazýlýþýmýzda önüde std:: eklemeden rahat þekilde yazmamýzý saðlýyor.

int main()//Ana fonksiyon
{
	// Þeklin üst parçasýndaki 5 satýrý oluþturuyor ve düzenlenmesini saðlýyor.
	for (int satýrlarUst = 1; satýrlarUst <= 5; satýrlarUst++)
	{
		//Þeklin üst kýsmýndaki her satýrýn soluna * sembolleri ekleniyor.
		for (int solYildizUst = satýrlarUst; solYildizUst <= 5; solYildizUst++)
			cout << "* ";

		//Þeklin üst kýsmýndaki yýldýzlar arasýna boþluk ekleniyor.
		for (int boslukUst = 5 - 4 * satýrlarUst + 1; boslukUst <= 5; boslukUst++)
			cout << " ";

		//Þeklin üst kýsmýndaki her satýrýn saðýna * sembolleri ekleniyor.
		for (int saðYildizUst = satýrlarUst; saðYildizUst <= 5; saðYildizUst++)
			cout << "* ";

		// Her bir satýrda gereken iþlemler yapýldýktan sonra bir alt satýra geçiþi saðlýyor.
		cout << endl;
	}
	//Þeklin iki parçasý arasýndaki boþluk oluþturuluyor.
	cout << endl;

	//Þeklin alt kýsmýndaki satýrlarý oluþturup düzenlemek için döngü ekleniyor.
	for (int satýrlarAlt = 1; satýrlarAlt <= 5; satýrlarAlt++)
	{
		//Þeklin alt kýsmýndaki her satýrýn soluna * sembolleri ekleniyor.
		for (int solYildizAlt = 6 - satýrlarAlt; solYildizAlt <= 5; solYildizAlt++)
			cout << "* ";

		//Þeklin alt parçasýndaki yýldýzlar arasýna boþluklar ekleniyor.
		for (int boslukAlt = 24 - 4 * satýrlarAlt; boslukAlt > 0; boslukAlt--)
			cout << " ";

		//Þeklin alt parçasýndaki satýrlarýn sað kýsmýna belli düzende yýldýz ekliyor.
		for (int saðYildizAlt = 6 - satýrlarAlt; saðYildizAlt <= 5; saðYildizAlt++)
			cout << "* ";

		//Alt satýra geçiþi saðlýyor.
		cout << endl;
	}

	cout << endl;

	system("pause");
	//Programýn hatasýz sonlandýrýldýðýný belirtiyor.
	return 0;
}
