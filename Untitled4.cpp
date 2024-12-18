#include <stdio.h>

int main() {
	int n,i;
	printf("nhap so luong phan tu trong mang");
	scanf("%d",&n);
	int mang[n];
	for(i=0; i<=n; i++) {
		printf("them phan tu thu  %d trong mang", i);
		scanf("%d", &mang[i]);
	}
	for(i=0; i<=n; i++) {
		printf("%d", mang[i]) ;
	}

	return 0;
}
