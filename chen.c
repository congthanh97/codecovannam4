#include <stdio.h>
#include <stdlib.h>
void Printff(int Arr[], int n)
{
    int i;
    for(i=0; i<n; i++)
        printf("%d ", Arr[i]);
    printf("\n");
}

void read_array(int Arr[], int n)
{
    int i,tg;
    for(i=0; i<n; i++)
        scanf("%d", &Arr[i]);
}

void InsertDown(int a[], int n, int key)
{
   if (n < 1 || a[n - 1] >= key) {
       a[n] = key;
       return;
   }
   a[n] = a[n - 1];
   InsertDown(a, n - 1, key);
}

void InsertUp(int a[], int n, int key)
{
   if (n < 1 || a[n - 1] <= key) {
       a[n] = key;
       return;
   }
   a[n] = a[n - 1];
   InsertUp(a, n - 1, key);
}


void InsertionSortUp(int a[], int n)
{
   if (n <= 1)
       return;
   InsertionSortUp(a, n - 1);
   InsertUp(a, n - 1, a[n - 1]);
}

void InsertionSortDown(int a[], int n)
{
   if (n <= 1)
       return;
   InsertionSortDown(a, n - 1);
   InsertDown(a, n - 1, a[n - 1]);
}
int main()
{

    #ifndef ONLINE_JUDGE
    freopen("D:\\input.txt", "r", stdin);
    #endif // ONLINE_JUDGE
	int n;
	scanf("%d", &n);
	
	//A
	int ArrA[n];
	read_array(ArrA, n);
	InsertionSortUp(ArrA, n);
	Printff(ArrA,n);
	
	//B
	int ArrB[n];
	read_array(ArrB, n);
	InsertionSortDown(ArrB, n);
	Printff(ArrB,n);
    return 0;
}
