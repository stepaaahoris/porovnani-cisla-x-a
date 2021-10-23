// Program zjistí zda je číslo x větší, rovno a nebo menší než číslo a (5)

#include <stdio.h>

int main() {
	int x = 4;
	int a = 5;
	printf("Cislo %d ", x);
	if (x - a == 0) {
		printf("je rovno cislu %d", a);
		// Je-li číslo x - číslo a 0, program vyhodnotí že se čísla rovnají
	}
	else {
		if (x > a) {
			printf("je vetsi nez cislo %d", a);
			// Pokud neplatí předešlá "rovnice", program přejde na další a pokud bude platit tak program vyhodnotí číslo x jako číslo které je větší
		}
		else {
			printf("je mensi nez cislo %d", a);
			// Jestli že neplatí první a ani druhaá "rovnice", program číslo x vyhodnotí jako číslo menší
		}
	}
}
