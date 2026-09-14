#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_CTYPE, ".UTF8");
	puts("Нажмите Enter для продолжения...");
	getchar();
	puts("Hello world!");
	puts("Продолжение программы");
	return 0;
}
