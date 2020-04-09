#include <stdio.h>
#include <stdlib.h> 
#define  MAX 100000
 
int n, kq[MAX], a[MAX];
 
void printff()
{
    for(int i=1;i<=n;i++){
        printf("%d ", kq[i]);
    }
    printf("\n");
}
 
void try(int i)
{
    if (i>n) 
		printff();
    for (int j=n; j>=1; j--)
        if (a[j]==0)
        {
            a[j]=1;
            kq[i]=j;
            try(i+1);
            a[j]=0;
        }
}
 
int main()
{
    scanf("%d", &n);
    for (int i=1; i<=9; i++)
    	a[i]=0;
    try(1);
}