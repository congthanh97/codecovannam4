#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node *node1;
node1 CreateNode(int value){
    node1 temp; // declare a node
    temp = (node1)malloc(sizeof(struct node)); // Cấp phát vùng nhớ dùng malloc()
    temp->next = NULL;// Cho next trỏ tới NULL
    temp->data = value; // Gán giá trị cho Node
    return temp;//Trả về node mới đã có giá trị
}
int main(){
    int n,k,times,i;
    node1 head, temp;
	scanf("%d",&times);
    int check[times];
    head = (node1)malloc(sizeof(struct node));
    for(i=0;i<times;i++){
		head = NULL;
		scanf("%d",&n);
		while(1){
			if(n==0) 
				break;
			if(head==NULL){
				head = (node1) realloc(head,sizeof(struct node));
				head->data = n;
				head->next = NULL;
			}
			else{
				temp = head;
			while(temp->next!=NULL)
				temp = temp->next;
			temp->next = CreateNode(n);
			}
		}
        //scanf("%d\n",&k);
        temp=head;
        while(temp!=NULL){
        //if(temp->data==k) check[i] = 1;
        printf("%d ",temp->data);
        temp = temp->next;
        }
    }
    /*
    for(i=0;i<times;i++){
        if(check[i]==1) printf("Co\n");
        else printf("Khong\n");
    }*/
    return 0;
}