#include <stdio.h>
#include <stdlib.h>
void read_Arr(int a[], int len){
    int i;
    for(i=0;i<len;i++){
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

int ResearchInterpolation(int a[],int low,int high,int x){
	
	if((a[high] != a[low]) && (x >= a[low]) && (x <= a[high])){
		int mid = low + ((x - a[low]) * (high - low) / (a[high] - a[low]));
		if (a[mid] == x) 
            return mid; 
		if(a[mid] < x)
			return ResearchInterpolation(a,mid+1,high,x);
		return ResearchInterpolation(a,low,mid-1,x);	
	}
    if (x == a[low])
        return low ;
    else
        return -1;
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
        printf("%d\n", ResearchInterpolation(a,0,len-1,x));
    }
    return 0;
    return 0;
} 