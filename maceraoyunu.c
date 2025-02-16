// maceraoyunu
#include <stdio.h>
int main() {

	int choise, number;

	printf("Macera oyununa hoşgeldiniz.\n");
	printf("Bir sonraki hamlenizi seçiniz.\n");
	printf("Olası hamleler : ");
	printf("1)MAĞARANIN DERİNLİKLERİNE İN.");
	printf("2) ÇIKIŞ ARA.");
	printf("3)DİNLEN.");

	printf("Seçiminizi yapınız : ");
	scanf("%d", &choise);

	if (choise == 1) {
		printf("Mağaranın derinliklerine doğru iniyorsunuz:\n");
		printf("Karşınıza bir ejderha çıkıyor.\n");
		printf("Bu aşamada kurtulmak için %%50 şansınız var.\n");
		printf("Şansınızı denemek için 1 ila 10 arasında bir sayı giriniz.");
		scanf("%d", &number);
		if (number % 2 == 0) {
			printf("Ejderha ile arkadaş oldunuz ve kazandınız!");
		}
		else {
			printf("Ejderha sizi yendi ve kaybettiniz.");
		}
	}
	else if (choise == 2) {
		printf("Çıkış arıyorsunuz.");
		printf("Bu aşamada kurtulmak için %%80 şansınız var.");
		printf("Şansınızı denemek için 1 ile 10 arasında bir sayı giriniz.");
		scanf("%d", &number);
		if (number == 1 || number == 2) {
			printf("Yolunuzu kaybettiniz ve açlıktan öldünüz.");
			printf("KAYBETTİNİZ.");
		}
		else {
			printf("Bir yol buldunuz ve kazandınız.");
		}
	}
	else if (choise == 3) {
		printf("Dinlenmeye karar verdiniz.");
		printf("Bu aşamada kurtulmak için %%70 şansınız var.");
		printf("Şansınızı denemek için 1 ile 10arasında bir sayı giriniz:");
		scanf("%d", &number);
		if (number % 3 != 0) {
			printf("Bir lamba buldunuz, içinden cin çıktı ve dileğinizi gerçekleştirdi.");
			printf("Kazandınız!");
		}
		else {
			printf("Zehirli bir örümcek sizi soktu ve öldünüz.");
			printf("Kaybettiniz.");
		}
	}
	else {
		printf("Geçersiz seçim!");
		printf("Oyun bitti.");
	}


	return 0;
}
