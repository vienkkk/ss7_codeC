#include <stdio.h>

int main() {
	int a,b;
	printf("nhap so cot ");
	scanf("%d", &a);
	printf("nhap so hang ");
	scanf("%d", &b);
	int bang[a][b];
	for(int i=0; i<a; i++) {
		for(int j=0; j<b; j++) {
			printf("nhap phan tu ");
			scanf("%d",&bang[i][j]);
		}
	}
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			printf("%d ", bang[i][j]);
		}
		printf("\n");
	}
	return 0;
}
