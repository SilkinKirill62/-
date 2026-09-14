#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void name() {
setlocale(LC_CTYPE, ".UTF8");
puts("*********************************************");
puts("*                                           *");
puts("*  тема: Разработка консольного приложения  *");
puts("*                                           *");
puts("*   Выполнил   Силкин К.Э.                  *");
puts("*                                           *");
puts("*********************************************");
return 0;
	}
void date() {
puts("_____ _____ _____ _____ _____ _____");
puts("|   |     | |   | |   | |   | |   |");
puts("|   |     | |   | |___| |   | |___|");
puts("|   |     | |   | |   | |   | |   |");
puts("|___|     |.|___| |___|.|___| |___|");
return 0;
}

void main() {
name();
date();
return 0;
}