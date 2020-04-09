#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node *node1;
node1 CreateNode(int value){
    node1 temp;
    temp = (node1)malloc(sizeof(struct node));
    temp->next = NULL;
    temp->data = value;
    return temp;
}
int PrintLine(node1 arr){
    node1 temp;
    temp=arr;
    while(temp!=NULL){
    printf("%d -> ", temp->data);
    temp=temp->next;
    }
    printf("NULL");
    printf("\n");
    return 0;
}
int main(){
    int n,i=0,k,m;
    node1 day1,day2, temp, temp2, temp3;
    day1 = NULL;
    day2 = NULL;
    while(1){
            scanf("%d",&k);
            if(k==0) break;
            if(day1==NULL){
            day1 = CreateNode(k);
            }
            else{
            temp = day1;
            while(temp->next!=NULL)
                temp = temp->next;
            temp->next = CreateNode(k);
            }
    }
    k=1;
    while(1){
		scanf("%d",&k);
		if(k==0) break;
		if(day2==NULL){
		day2 = CreateNode(k);
		}
		else{
		temp = day2;
		while(temp->next!=NULL)
			temp = temp->next;
		temp->next = CreateNode(k);
		}
    }
    PrintLine(day1);
    PrintLine(day2);
    temp = day1;
    temp2 = day2;
    while(temp2!=NULL){
		while(temp->next!=NULL){
			if(temp2->data < day1->data){
				temp3=temp2;
				temp2=temp2->next;
				temp3->next=day1;
				day1=temp3;
				temp=day1;
				if(temp2==NULL) break;
				continue;
			}
			else if(temp2->data < temp->next->data){
				temp3=temp2;
				temp2=temp2->next;
				temp3->next=temp->next;
				temp->next=temp3;
				temp=day1;
				if(temp2==NULL) break;
				continue;
			}
			temp = temp->next;
		}
		if(temp->next==NULL){
			temp->next=temp2;
			temp2=temp2->next;
			temp=temp->next;
			temp->next=NULL;
			temp=day1;
		}
    }
    PrintLine(day1);
    return 0;
}
