#include <stdio.h>

int main(){
	int a[5];
	int i;
	for(i=0;i<5;i++){
		printf("them phan tu can nhap ");
		scanf("%d", &a[i]); 
	}
	for (i=0;i<5;i++){
		printf("%d",a[i]); 
	} 
	
	return 0; 
} 
