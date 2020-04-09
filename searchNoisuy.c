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


int interpolation_search(int arr[], int len, int key)
{
    int low = 0;
    int high = len - 1;

    while ((arr[high] != arr[low]) && (key >= arr[low]) && (key <= arr[high])) {
        int mid = low + ((key - arr[low]) * (high - low) / (arr[high] - arr[low]));

        if (arr[mid] < key)
            low = mid + 1;
        else if (key < arr[mid])
            high = mid - 1;
        else
            return mid;
    }

    if (key == arr[low])
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
    #endif
    int len;
    scanf("%d", &len);
    int a[len];
    read_Arr(a,len);
    Sort(a,len);
    printff(a,len);
    int n,x,i;
    scanf("%d", &n);
    while(n--){
        scanf("%d", &x);
        printf("%d\n", interpolation_search(a,len,x));
    }
    return 0;
} 