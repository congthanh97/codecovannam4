#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node
{
    int mssv;
    float dtb;
    char name[100];
    struct node *next;
};
typedef struct node *node1;
node1 CreateNode(int value, char name[100], float diemTB){
    node1 temp;
    temp = (node1)malloc(sizeof(struct node));
    temp->next = NULL;
    temp->mssv = value;
    strcpy(temp->name,name);
    temp->dtb = diemTB;
    return temp;
}
void Asc(int a[], int n){
    int tg;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                // Hoan vi 2 so a[i] va a[j]
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    }
}
void Out(int a[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
}
int main(){
    int n,i=0,k=0,mssv,length,tong;
    float diemTB;
    char ten[100];
    node1 head, temp;
    head = NULL;
    scanf("%d",&n);
    int memo[n];
    while(1){
		if(i==n) break;
		fflush(stdin);
		scanf("%d",&mssv);
		scanf("%f",&diemTB);
		gets(ten);
		if(diemTB < 5) {
			memo[k]=mssv;
			k++;
		}
		if(head==NULL){
			head = CreateNode(mssv,ten,diemTB);
		}
		else{
			temp = head;
			while(temp->next!=NULL)
				temp = temp->next;
			temp->next = CreateNode(mssv,ten,diemTB);
		}
		i++;
    }
    temp=head;
    printf("MSSV \t\t TEN SINH VIEN\t\t\t\t  DIEM TB\n");
    while(temp!=NULL){
		printf("%d",temp->mssv);
	//	length = strlen(temp->name);
		printf("\t\t%s",temp->name);
		printf("\t\t\t%.2f\n",temp->dtb);
		temp=temp->next;
    }
    Asc(memo,k);
    tong = k;
    printf("\nDanh sach sinh vien co diem TB <5.0");
  //  temp=head;
    printf("\nMSSV\t\tTEN SINH VIEN\t\t\t\t\t\t\tDIEM TB\n");
    for(k=0;k<tong;k++){
    	temp=head;
    	while(temp!=NULL){
    		if(temp->mssv == memo[k]){
				printf("%d",temp->mssv);
				//length = strlen(temp->name);
				printf("%20s",temp->name);
				printf("%30.2f\n",temp->dtb);
				break;
			}
			temp=temp->next;
		}
    }
    return 0;
}
