#include<stdio.h>

long long chusolonnhat(long long n , long long max){
	if(n==0){
		return max;
	}
	else{
		long long  m ;
		m =  n%10;
		if(m>max){
			max = m;
		}
	}
	return chusolonnhat(n/10,max);
}	
int xuat(long long A[],int n){
	for(int i=1;i<=n;i++){
		printf("%d ",A[i]);
	}
	printf("\n");
	
}
int main(){
	int n;
	long long unsigned a[1000];
	//printf("Nhap vao so nguyen duong: ");
	scanf("%d",&n);
	for(int i= 1;i<=n;i++){
		printf("a[%d] = ",i);
		scanf("%lld",&a[i]);
	}
	for(int i=1;i<=n;i++){
		long long max=a[i]%10;
		printf("%10lld: %lld\n",a[i],chusolonnhat(a[i],max));
	}
	
	//xuat(a,n);
	
}