//this is main.c
#include <stdio.h>
#include "screen.h" // for user-defined header, use double quotes
#include <stdlib.h>

int main() {
	int i, arr[80];
	for(i = 0; i < 80; i++) {
		arr[i] = rand()%70 + 30;
	}
	clearScreen();
	setColors(YELLOW, bg(BLUE));
//	printf("Printed from main.\n");
	barChart(arr);
	resetColors();
	printf("Another message\n");
	getchar();
}
