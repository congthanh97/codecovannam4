#include <stdio.h>
#include <stdlib.h>
void read_Arr(int a[], int len){
    int i;
    for(i=0;i<len;i++){
        scanf("%d", &a[i]);
    }
}

int binarySearch(int arr[], int l, int r, int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 
        if (arr[mid] == x) 
            return mid; 
        if (arr[mid] < x)
			return binarySearch(arr, l, mid - 1, x);
		return binarySearch(arr, mid + 1, r, x);			   
    } 
    return -1; 
} 

void Sort(int a[], int len){
    int temp;
    for(int i=len-1;i>0;i--){
        for(int j=0;j<=i-1;j++){
            if(a[j]<a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
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
    #endif // ONLINE_JUDGE
    int len,x;
    scanf("%d", &len);
    int a[len];
    read_Arr(a,len);
    Sort(a,len);
    printff(a,len);
	int n;
	scanf("%d",&n);	
    while(n--){
		scanf("%d",&x);
        printf("%d\n", binarySearch(a,0,len-1,x));
    }
    return 0;
}