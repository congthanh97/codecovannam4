#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long  NhiPhan(long a)
{
    long b;
    if(a==0)
         return 0;
    else
         b=a%2; 
    return NhiPhan(a/2)*10+b;
}

void read_Arr(int a[], int len)
{
    int i;
    for(i=0;i<len;i++)
        {
            scanf("%d", &a[i]);
        }
}


//Tính S(n) = ½ + 2/3 + ¾ + …. + n / n + 1
float SumSn(int i,int n,float sum)
{
    if (n <0)
        return 0;
    return (float)i / (i + 1);
}

float Tinh(int n)
{
	float s = 0;
	for (int i = 1; i <= n; i++)
		s = s + (float)i / (i + 1);
	return s;
}
//Tính s(n) = sqrt(1 + sqrt(2 + sqrt (3 + …sqrt (n-1 + sqrt (n))))) bằng đệ quy
double VTV3007 (int n,int i)
{
    if(n==i)
        return sqrt(n);
    else
        return sqrt(i + VTV3007 (n,i+1));
}


//đệ quy tính S(n) = 1/2 + 2/3 + 3/4 + ... + n/(n+1)
double VTV30013 (double n)
{
	 if (n==1)
        return 0.5 ;
    return VTV30013(n-1) + n/(n+1);

}


//đệ quy tính S(n) = x + x^2/2! + x^3/3! + ... + x^n/n

double SumS(double x, double n)
{
    if(n==0)
        return 0;
    else
    {
        double gt = 1, lt = 1;
        for(int i=1; i<=n; i++)
        {
            gt=gt*i;
            lt=lt*x;
        }
        return SumS(x,(n-1)) + lt/gt;
    }
}

//de quy sortnoibot
int resBulUp(int A[],int i,int n){
	for(int j = n-1 ;j>i;j--){
		if(A[j]<A[i]){
			int temp = A[j];
			A[j] = A[i];
			A[i] = temp;
		}	
	}
	if(i<n-1)
		resBulUp(A,i+1,n);
}
int resBulDown(int A[],int i,int n){
	for(int j = n-1 ;j>i;j--){
		if(A[j]>A[i]){
			int temp = A[j];
			A[j] = A[i];
			A[i] = temp;
		}	
	}
	if(i<n-1)
		resBulDown(A,i+1,n);
}
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
int linear_Search(int A[],int n,int len,int i){
	if(a[i]==n){
		return i;
	}
	if(i<n-1)
		return linear_Search(A,n,len,i+1);
}


int main()
{	 
    #ifndef ONLINE_JUDGE
    freopen("D:\\input.txt", "r", stdin);
    #endif // ONLINE_JUDGE
	
	
	int len;
	scanf("%d", &len);
	int ArrA[len];
	read_array(ArrA, len);
	resBulUp(ArrA,0,len);
	//Sort_up(ArrA, len);
	Printff(ArrA, len);

	//  sort Array B

    int ArrB[len];
    //Sort_reduct(ArrB, len);
	read_array(ArrB, len);
	resBulDown(ArrB,0,len);
	Printff(ArrB, len);
    return 0;
}




