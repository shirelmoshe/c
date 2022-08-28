#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE* f = fopen("C:\\Users\\User\\repos\\monday.cast\\);
	char a;
	char b;
	int countx = 0;
	int counti = 0;

	if (f == NULL) {
		printf("error");

	}
	else {
		a = fgetc(f) - '0';
		b = fgetc(f);

	}
	while (b != EOF) {
		if (b == 'x') {
			countx = countx + a;
		}
		else(y == 'y') {
			county = county + a;

		}
		a = fgetc(f) - '0';
		b = fgetc(f);
	}
	fclose(f);

	int* intArr;
	int* intArr2;
	char* charArr;
	char* charArr2;

	intArr = malloc(county * sizeof(int));
	charArr = malloc(countx * sizeof(char));
	
	intArr2 = intArr;
	charArr2 = charArr;

	for (int i = 0; i < countx; i++)
	{
		printf("for 'x");
		scanf("%d", charArr);
		printf("%d", *charArr);
		charArr++;

	}
	for (int i = 0; i < county; i++) {
		printf("for 'y'");
		scanf("%d", intArr);

		printf("%d", *intArr);
		intArr++;
	}
	free(intArr);
	free(charArr);
	return 0;
}

