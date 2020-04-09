#include <stdio.h>

void Arr(int a[], int len)
{
    int i;
    for(i=0; i<len; i++)
    {
        scanf("%d", &a[i]);
    }
}
void printArr(int a[], int len)
{
    int i;
    for(i=0; i<len; i++)
    {
        printf("%d ", a[i]);
    }
}
void Sort(int a[], int len)
{
    int temp;
    for(int i=0; i<len-1; i++)
    {
        for(int j=i+1; j<len; j++)
        {
             if(a[i]<a[j]){
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
			
        }
    }
}



int BinarySearch(int a[], int l, int r, int x){
    if( r>=l){
        int m =(r+l)/2;
        if(a[m]==x)
            return m;
        if(a[m]>x)
           return BinarySearch(a, m+1, r, x);
		return BinarySearch(a, l, m-1, x);
    }
    return -1;
}

int main()
{
    int len;
    scanf("%d", &len);
    int a[len];
    Arr(a, len);
    Sort(a, len);
   // printArr(a, len);
	/*int n, x;
	scanf("%d",&n);
	while(n--){
		scanf("%d", &x);
		printf("%d\n", BinarySearch(a, 0,len -1,x));
	}*/
	int n,x;
	scanf("%d",&n);	
    while(n--){
		scanf("%d",&x);
        printf("%d\n", BinarySearch(a,0,len-1,x));
    }
    return 0;
}