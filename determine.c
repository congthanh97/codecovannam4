#include <stdio.h>
#include <stdlib.h>
int *SortDec(int a[], int len)
{
    for (int i = 0; i < len-1 ;i++)
        for (int j = i + 1; j < len ;j++)
        {
            if (a[i] < a[j])
            {
                  int temp = a[i];
                  a[i] = a[j];
                  a[j] = temp;
            }
        }
    return a;
}

int VTV003 (int a[], int len, int k)
{
    int *b = SortDec(a,len);
    int i;
    for(i=0; i<len; i++)
    {
        if(a[i]==b[k-1])
            return a[i];
    }
}

int main()
{
    int len;
    scanf("%d", &len);
    int a[len];
	for(int i=0;i<len;i++){
		scanf("%d",&a[i]);
	}
    int k;
    scanf("%d",&k);
    SortDec(a,len);
    printf("\n%d",VTV003(a,len,k));
    return 0;
}
