#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
 
long long MaxOfNumber(long long n, long long max)
{
    if(n==0)
        return max;
    else
    {
        max = (max > n%10) ? max:n%10;
    }
    return MaxOfNumber(n/10, max);
}
 
// count number max 
long countNumberMax(long long n, long long numberMax, int count)
{
    if(n==0)
        return count;
    else
    {
        if(n%10 == numberMax){
            count ++;
        }
        return countNumberMax(n/10,numberMax,count);
    }
}

long Count(unsigned long long n, long long number, int count){
	if(n=0){
		return count;
	}
	if (n%10 == number)
		count++;
	if(n%10 > number){
		number =  n%10; 
		count = 1;
	}
	if(n/10 == 0)
		return count;
	return Count(n/10,number,count);
} 

 
int  main(){
	int n;
	scanf("%d",&n);
	unsigned long long C[n];
	for(int i=0;i<n;i++){
		scanf("%lld", &C[i]);
	}
	/*for(int i=0;i<n;i++){
		long long max = C[i]%10;
		long long number  = MaxOfNumber(C[i],max);
		printf("%10lld: %ld\n",C[i],countNumberMax(C[i],number,0));
	}*/
	
	for(int i=0;i<n;i++){
		printf("%ld\n",Count(C[i],0,0));
	}
}