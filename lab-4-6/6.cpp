#include<stdio.h>
//Ð´º¯Êýlong SumFactor(int k)¼ÆËã1 £¡+2 £¡+¡­+k! 
long Factor(int k) {
	if (k >1)
		return k * Factor(k - 1);
	else
		return 1;
}

long SumFactor(int k) {
	if (k > 1)
		return Factor(k)+SumFactor(k - 1);
	else
		return 1;
}

int main() {
	int k = 0;
	scanf_s("%d", &k);
	int n = SumFactor(k);
	printf("%d", n);

}