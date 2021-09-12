#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	time_t t;
	int n, a[n], b[n];
	printf("nhap so n "); scanf("%d",&n);
	srand((unsigned) time(&t));
	for(int i=0; i<n;i++){
		a[i]=rand() %50;
		b[i]=rand() %50;
		printf("%d%d\n",a[i],b[i]);
	}
	return 0;

}