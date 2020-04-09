#include <stdio.h>
#include <stdlib.h> 
#define  MAX 100000
 
int n, kq[MAX], a[MAX];
 
void printff(int a[], int len){
    int i;
    for(i=0;i<len;i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}
void swap(int *x, int *y) 
{ 
    int temp = *x; 
    *x = *y; 
    *y = temp; 
}


void permute(int a[], int l, int r)  
{  
    // Base case  
    if (l == r)  
       printff(a,r+1);
    else
    {   
        for (int i = l; i <= r; i++)  
        {  
            swap(&a[l], &a[i]);  
            permute(a, l+1, r);  
            swap(&a[l], &a[i]);  
        }  
    }  
}  
void read_Arr(int a[], int len){
    int i;
    for(i=0;i<=len;i++){
        scanf("%d", &a[i]);
    }
}
void Sort(int a[], int len){
    int temp;
    for(int i=len-1;i>0;i--){
        for(int j=0;j<=i-1;j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
 
int main()
{
	/*#ifndef ONLINE_JUDGE
    freopen("D:\\input.txt", "r", stdin);
    #endif // ONLINE_JUDGE
    int len,x;
    scanf("%d", &len);
    int a[len];
    read_Arr(a,len);*/
	int len;
    scanf("%d", &len);
    int a[len];
	for(int i = 0 ;i<len ;i++){
		scanf("%d",&a[i]);
	}	
	Sort(a,len);
	permute(a, 0, len-1);  
}
