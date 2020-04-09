#include<stdio.h>
void read_Arr(int a[], int len){
    int i;
    for(i=0;i<len;i++){
        scanf("%d", &a[i]);
    }
}
void qsort(int a[],int start,int end)
{
	int s;
	if(start>=end)
		return;
	s=split(a,start,end);
	qsort(a,start,s-1);
	qsort(a,s+1,end);
}
int split(int a[],int start,int end)
{
	int p=a[start];
	int i=start,j=end,temp;
	while(i<j)
	{
		while(a[i]>=p)
			i++;
		while(a[j]<p)
			j--;
		if(i<j)
			temp=a[i],
			a[i]=a[j],
			a[j]=temp;
	}
	a[start]=a[j];
	a[j]=p;
	return j;
}

void printff(int a[], int len){
    int i;
    for(i=0;i<len;i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main()
{
	#ifndef ONLINE_JUDGE
    freopen("D:\\input.txt", "r", stdin);
    #endif
	int len;
	scanf("%d",&len);
	int a[len];
	read_Arr(a,len);
	qsort(a,0,len-1);
	printff(a,len);
	return 0;
}