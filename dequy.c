#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
	int gcd2(int a, int b) {
        int tmp;
        while (b != 0) {
            tmp = a % b;
            a = b;
            b = tmp;
        }
        return a;
    }
	void read_array(int a,int b)
	{
		int i;
		for(i=0; i<5; i++)
			scanf("%d %d", &a,&b);
	}
	void read_array1(int Arr[], int len)
{
    int i;
    for(i=0; i<len; i++)
        scanf("%d", &Arr[i]);
}

void Printff(int a,int b, int n)
{
    int i;
    for(i=0; i<n; i++)
        printf("%d %d ",&a,&b);
    printf("\n");
}
void Printff1(int Arr[], int n)
{
    int i;
    for(i=0; i<n; i++)
        printf("%d ", Arr[i]);
    printf("\n");
}

	int main()
{
	 
    #ifndef ONLINE_JUDGE
    freopen("D:\\input.txt", "r", stdin);
    #endif // ONLINE_JUDGE
	
	
	int len;
	scanf("%d", &len);
	printf("%d",len);
	printf("\n");
	int n = 2*len;
	int ArrA[n];
	read_array1(ArrA, n);
	Printff1(ArrA, n);
	int a[len];
	int b[len];
	for(int i = 0 ;i<n;i++){
		if(i%2!=0){
			a[i] = ArrA[i];
			printf("a = %d\n\n",a[i]);
		}else{
			b[i]=ArrA[i];
			//printf("b = %d\n\n",b[i]);
		}
	}
	
	//Printff1(a, len);
	
	
	
	
    return 0;
}