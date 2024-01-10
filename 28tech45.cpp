#include <stdio.h>
#include <math.h>
int luythua (int x , int y) {
	int sum=1;
	for (int i=1 ; i < y;i++){
		sum=pow(x,y);
		return sum;
	}
} 
int main () {
	int x,y,n;
	printf ("Nhap gia tri cua x: ",x);
	scanf ("%d",&x);
	printf ("Nhap gia tri cua y: ",y);
	scanf ("%d",&y);
	long long sum=luythua(x,y);
	printf ("Vay ket qua cua %d^%d la:%lld",x,y,sum);
}
