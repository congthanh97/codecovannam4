#include<stdio.h>
#include<math.h>
int a[20];
int Ok(int x2,int y2){
    for(int i = 1; i < x2 ;i++)
        if(a[i] == y2 || abs(i-x2) == abs(a[i] - y2) )
            return 0;
    return 1;
}
 
void printff(int n){
    for(int i=1;i<=n;i++)
        printf(" %d",a[i]);
    printf("\n");
}
 
void Try(int i,int n){
	int inde=1;
    for(int j = 1;j<=n;j++){
        if(Ok(i,j)){
            a[i] = j;
			printf("a[%d]: %d\t",i,a[i]);
            if(i==n){
				//printf("Solution %d:" ,inde);
				//printff(n);
			}
			
            Try(i+1,n);
			
        }
		
    }
}
 
int main(){
    int n;
    scanf("%d", &n);
    Try(1,n);
    return 0;
}