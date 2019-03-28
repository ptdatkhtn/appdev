// for operating with screen

#include <stdio.h>

void barChart(int arr[]) {
	int i, j; // counters
	for(i = 0; i < 80; i++) { // for 80 columns
		for(j = 0; j < arr[i] / 3; j++) {
			printf("\033[%d;%dH", 35-j, i+1);
			#ifdef UNICODE
				printf("%s", "\u2590");
			#else
				printf("%c", ' ');
			#endif
		}
	}
}

void clearScreen(void) {
	printf("\033[2J");
	fflush(stdout); // active esc.seq.immediate
}

void setColors(short fg, short bg) {
        printf("\033[%d;%d;1m", fg, bg);
        fflush(stdout); // immediate
}

void resetColors(void) {
        printf("\033[0m");
        fflush(stdout);
}
