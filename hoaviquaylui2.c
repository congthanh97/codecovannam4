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


void permute(int a[], int len,int i)  
{  
    // Base case  
   if (i>len) 
       printff(a,len);
    else
    {   
        for (int j = 1; j <= len; i++)  
        {  
            swap(&a[j], &a[j+1]);  
            permute(a, len, j+1);  
            swap(&a[j], &a[j+1]);  
        }  
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
	int len;
    scanf("%d", &len);
    int a[len];
	for(int i = 0 ;i<len ;i++){
		scanf("%d",&a[i]);
	}	
	Sort(a,len);
	permute(a, len,1);  
}
