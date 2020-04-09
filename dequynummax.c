#include <stdio.h>
long long ChuSoLonNhat(long long n, long long max){
	if(n==0){
		return max;
	}
	else{
        long long m;
		m = n%10;
		if(m>max) 
			max=m;
	}
	return ChuSoLonNhat(n/10,max);
} 
int main() {
	int t;
	scanf("%d",&t);
	unsigned long long n[t];
	for(int i=0;i<t;i++){
		scanf("%lld",&n[i]);
	}
	for(int i=0;i<t;i++){
		long long max=n[i]%10;
		printf("%10lld: %lld\n",n[i],ChuSoLonNhat(n[i],max));
	}
	return 0;
}