#include<stdlib.h>
#include<stdio.h>
#include<string.h>

struct node{
	char name[100];
	int  ns;
	struct node*next;
};
typedef struct node* node1;
node1 CreateNode(char name[100],int ns){
	node1 link;
	link =  (node1)malloc(sizeof(struct node));
	link->next =  NULL;
	strcpy(link->name,name);
	link->ns = ns;
	return link;
}

int main(){
	int n,ns,i=0;
	char name[100];
	node1 head,link;
	head =  NULL;
	scanf("%d",&n);
	while(1){
		if(i==n)break;
		fflush(stdin);
		gets(name);
		scanf("%d",&ns);
		if(head==NULL){
			head =  CreateNode(name,ns);
		}
		else{
			link = head;
			while(link->next!=NULL)
				link =  link->next;
			link->next =  CreateNode(name,ns);
		}
		i++;
	}
	link=head;
    while(link!=NULL){
		printf("%s (%d)\n",link->name, link->ns);
		link=link->next;
    }
	return 0;

}