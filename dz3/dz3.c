#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Russian");
	float fr;
	float c = 299792458.0;
	printf("Введите частоту сигнала (в ГГц):");
	scanf_s("%f", &fr);
	float l = c / (fr * 1000000000.0);
	float lm = l * 1000.0;
	printf("Длина волны равна: %.2f мм", lm);
	return 0;
}
