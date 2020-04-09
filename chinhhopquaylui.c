#include <stdio.h>
#include <stdlib.h> 
#define  MAX 100000
 

 
 
void printff(int a[],int m)
{
    for(int i=1;i<=m;i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}
 
void try(int a[],int b[],int i,int n,int m)
{
    for(int j=1;j<=n;j++) 
    {
        if(b[j]==0)
        {
            a[i]=j;
            if(i==m) 
				printff(a,m);
            else
            {
                b[j]=1;       
                try(a,b,i+1,n,m);
                b[j]=0;          
            }
        }
    }
}
 
int main()
{
	int n,m;
    scanf("%d %d", &n,&m);
	int a[MAX];
	int b[MAX];
    a[0]=1;
    for(int i=0;i<=n;i++)
        b[i]=0;
    try(a,b,1,n,m);
}