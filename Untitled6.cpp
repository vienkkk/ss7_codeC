#include <stdio.h>

int main() {
	int n,i;
	printf("Nhap so luong phan tu ");
	scanf("%d", &n);
	int a[n];
	for(i=1; i<=n; i++) {
		printf("them phan tu %d la ",i);
		scanf("%d",&a[i]);
		if(i%2==0) {
			a[i]=i+3;
		}else{
			a[i]=i+2; 
		} 
	}
for(i=1;i<=n;i++){
	printf("%d\n",a[i]); 
} 
	return 0;
}
