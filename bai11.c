 #include <stdio.h>
 #include <stdlib.h>
 #include <math.h>
int X(int n)
{
    if(n==0)
        return 1;
     return X(n-1) + Y(n-1);
}

int Y(int n)
{
    if(n==0)
        return 0;
    return  3*X(n-1) + Y(n-1);
}

int main()
{
   
    int len, i;
    scanf("%d", &len);
    int a[len];
	for(int i=0;i<len;i++){
		scanf("%d",&a[i]);
	}
    for(i=0; i<len; i++)
    {
        printf("%d %d\n",X(a[i]),Y(a[i]));
    }
     return 0;
}



