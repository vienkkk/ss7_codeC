#include <stdio.h>

int main() {
	int i;
	int a[5]= {1,2,3,4,5};
	int min=a[0];
	for(i=0; i<5; i++) {
		if(min>a[i]) {
			min=a[i];

		}
	}
	printf("so be nhat %d\n",min);
	int max=a[0];
	for(i=0; i<5; i++) {
		if(max<a[i]) {
			max=a[i];
		}
	}
	printf("so lon nhat %d\n",max);
	return 0;
}
