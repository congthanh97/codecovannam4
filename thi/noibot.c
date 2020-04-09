#include<stdio.h>

int sort_up(it A[],int n){
	int tg;
	for(int i= 0 ;i<n-1;i++){
		for(int j = 0;j<n-i-1;j++){
			if(A[j] > A[j+1]){
				tg = A[j];
				A[j]= A[j+1];
				A[j+1] = tg;
			}
		}
	}
}

int printff(int A[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",A[i]);
	}
	printf("\n");
	
}
int main(){
	int n ;
	scanf("%d",&n);
	int A[1000000];
	
	for(int i=0;i<n;i++){
		scanf("%d",%A[i]);
	}
	

}