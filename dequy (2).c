#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main()
{
	int len;
	scanf("%d", &len);
	//int a,b,c;
	int C[100];
	int D[100];
	for(int i=0;i<len;i++){
		scanf("%d %d", &C[i],&D[i]);
	}
	for(int i=0;i<len;i++){
		//scanf("%d%d", &C[i],&D[i]);
		printf("\n%d",gcd(C[i],D[i]));
	}

    return 0;
}