#include <stdio.h>
#include <stdlib.h>

void Printff(int Arr[], int n)
{
    int i;
    for(i=0; i<n; i++)
        printf("%d ", Arr[i]);
    printf("\n");
}
 
void read_array(int Arr[], int len)
{
    int i;
    for(i=0; i<len; i++)
        scanf("%d", &Arr[i]);
}
 
//de quy tim kiem tuan tu
int VTV3017( int a[], int i, int x ,int len) {
	if( i > len )
		return -1;
	else{
		if(a[ i ] == x)
			return i;
		return VTV3017(a, i+1, x,len);	
	}
	
}

int resBulDown(int A[],int i,int n){
	//for(int j = n-1 ;j>i;j--)
	if(i>n){
		return 0;
	}else{
		if(A[i]>A[i+1]){
			int temp = A[i];
			A[i] = A[i+1];
			A[i+1] = temp;
		}
	if(i<n-1)
		resBulDown(A,i+1,n);
	}
	
	}

int recSearch(int arr[], int l, int r, int x) 
{ 
     if (r < l) 
        return -1; 
     if (arr[l] == x) 
        return l; 
     if (arr[r] == x) 
        return r; 
     return recSearch(arr, l+1, r-1, x); 
} 

int linear_Search(int a[], int len, int n){
    int i;
    for(i=0;i<len;i++){
        if(n==a[i])
            return i;
    }
    return -1;
}

int main()
{
	#ifndef ONLINE_JUDGE
    freopen("D:\\input.txt", "r", stdin);
    #endif // ONLINE_JUDGE
    int len;
    scanf("%d", &len);
    /*int a[len];
    read_Arr(a,len);
    int n,x;
    scanf("%d", &n);
    while(n--){
        scanf("%d", &x);
        printf("%d\n", VTV3017(a,0,x,len-1));
 
    }*/
	
	int ArrA[len];
	read_array(ArrA, len);
	resBulDown(ArrA,0,len);
	//Sort_up(ArrA, len);
	Printff(ArrA, len);
    return 0;
}
