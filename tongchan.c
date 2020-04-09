#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long  NhiPhan(long a)
{
    long b;
    if(a==0)
         return 0;
    else
         b=a%2; 
    return NhiPhan(a/2)*10+b;
}

int main()
{
	long n;
	scanf("%d",&n);
	long C[n];
	for(int i=0;i<n;i++){
		scanf("%ld", &C[i]);
	}
	
    int count = 0;
	for(int j=0;j< n;j++){
		 printf("%ld\n",NhiPhan(C[j]));
	}
   
}




