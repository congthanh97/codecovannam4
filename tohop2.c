#include <stdio.h>
#include <stdlib.h> 
#define  MAX 100000
 
int a[MAX],n,m;
 
void printff()
{
    for(int i=m;i>=1;i--){
        printf("%d ", a[i]);
    }
    printf("\n");
}
 
void Try(int i)
{
    for(int j=n-m+i;j>=a[i-1]+1;j--)
    {
        a[i]=j;
        if(i==m) 
        	printff();
        else
            Try(i+1);
    }
}
 
int main(){
	scanf("%d %d",&n,&m);
	Try(1);
}