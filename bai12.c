#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Printff(float a[], int len)
{
    int i;
    for(i=0;i<len;i++){
		scanf("%f", &a[i]);
	}
}

//VTV3012 - 12. Đệ quy. Kiểm tra tính chất toàn giá trị âm
int ArrayNega(int a[], int i)
{
    if(i < 0)
        return 0;
    if(a[i] > 0)
        return 1;
    return ArrayNega(a, i-1);
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("D:\\input.txt", "r", stdin);
    #endif
    int n;
    scanf("%d",&n);
    for(int j=0; j<n; j++)
    {
        int len;
        scanf("%d", &len);
        float a[len];
        Printff(a,len);
        if(ArrayNega(a, len-1)==0)
            printf("Yes");
        else
            printf("No");
        printf("\n");
    }

    return 0;
}

