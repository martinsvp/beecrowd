#include <stdio.h>
#include <math.h>
 
void notas(float *value, float notes[], int size){
	puts("NOTAS:");
	for (size_t i = 0; i < size; i++){
		printf("%.0f nota(s) de R$ %.0f.00\n", truncf(*value / notes[i]), notes[i]/100);
		*value = fmodf(*value, notes[i]);
	}
}

void moedas(float *value, float coins[], int size){
	puts("MOEDAS:");

	for (size_t i = 0; i < size; i++){
		printf("%.0f moeda(s) de R$ %.2f\n", truncf(*value / coins[i]), coins[i]/100);
		*value = fmodf(*value, coins[i]);
	}
}

int main(){
	float notes[6] = {10000, 5000, 2000, 1000, 500, 200};
	float coins[6] = {100, 50, 25, 10, 5, 1};

	float value;
	scanf("%f", &value);
	value *= 100;

	notas(&value, notes, sizeof(notes) / sizeof(notes[0]));
	moedas(&value, coins, sizeof(coins) / sizeof(coins[0]));

	return 0;
}
