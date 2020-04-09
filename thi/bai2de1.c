#include<stdio.h>
#define  MAX 100000
int sum(int s,int n){
	for(int i  = 1;i<=n;i++){
		s += i;
	}
	return s;
}

int Xuat(int A[],int n){
	for(int i=1;i<=n;i++){
		printf("%d ",A[i]);
	}
	printf("\n");
	
}

int check(int n){
	if(n>0)
    {
		int a=sqrt(n);
		if((a*a)==n)
			return 1;
		else
			return 0;
    }
}

int main(){
	FILE *fptr;
	//day là code ý 1 2 bài 2;
	int n;
	int a[MAX];
	printf("Nhap vao so nguyen duong: ");
	scanf("%d",&n);
	for(int i= 1;i<=n;i++){
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("Day la mang vua nhap: ");
	Xuat(a,n);
	for(int i = 1 ;i<=n;i++){
		int flat = check(a[i]);
		if(flat == 1){
			fptr = fopen("vidu.txt","a+");		
			if(fptr == NULL){ 
				  printf("Error!");   
				  exit(1);             
			}			
			fprintf(fptr,"%d  ",a[i]);
		}else{
			//printf("So ban da nhap vao khong phai la so chinh phuong\n");
		}
	}
	fclose(fptr);
	getchar();
	return 0;
}