#include<stdio.h>
int sum(int s,int n){
	for(int i  = 1;i<=n;i++){
		s += i;
	}
	return s;
}
int main(){
	int n;
	int s = 0;
	scanf("%d",&n);
	int a = sum(s,n);
	printf("%d",a);
	return 0;
}