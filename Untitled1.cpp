#include <stdio.h>

int main(){
	int a[5]={0,1,2,3,4};
	int i,b=0;
	int size = sizeof(a) / sizeof(a[0]);
	for(i=0;i<size;i++){
		b++;
		printf("%d\n",a[b]);
	}
	
	return 0; 
} 
