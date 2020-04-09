#include <stdio.h>
#include <stdlib.h>
void read_Arr(int a[], int len){
    int i;
    for(i=0;i<=len;i++){
        scanf("%d", &a[i]);
    }
}
 
void printff(int a[], int len){
    int i;
    for(i=0;i<len;i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

void quicksort(int a[],int l, int r){
    int i=l, j=r;                               
    int key = a[l];                           
	for(int k = l ; k<=r;k++){
		printf("%d ",a[k]);
	}
	printf("\n");
	printf("Partitioning: left=%d, right=%d\n",l,r);
	
	while (i<=j){ 	
        while (a[i]<key) i++;                       
        while (a[j]>key) j--;                       
        if (i<=j ){                                 
			int tmp=a[i];
			a[i]=a[j];
			a[j]=tmp;
			for(int k = l ; k<=r;k++){
				printf("%d ",a[k]);
			}
			printf("\n");
			i++;
			j--;
        }	
    }
	
    if (l < j)
        quicksort(a, l, j); 
    if (i < r)
        quicksort(a, i, r);                   
}
 
int main()
{
	#ifndef ONLINE_JUDGE
    freopen("D:\\input.txt", "r", stdin);
    #endif // ONLINE_JUDGE
    int len,x;
    scanf("%d", &len);
    int a[len];
    read_Arr(a,len);
	//printff(a,len);
    quicksort(a,0,len-1);	
	printff(a,len);
   
    return 0;
} 
