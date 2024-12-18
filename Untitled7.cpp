#include <stdio.h>

int main() {
	int n,i;
	printf("Nhap so luong phan tu ");
	scanf("%d", &n);
	int a[n];
	while(i<n) {
		int b; 
		printf("nhap so le ");
		scanf("%d",&b);
		if(b%2!=0) {
			a[i]=b;
			printf("nhap dung \n");
			i++;
		} else {
			printf("nhap lai \n");
		}
	}
	for(i=0; i<n; i++) {
		printf("%d\n",a[i]);
	}
	return 0;
}
