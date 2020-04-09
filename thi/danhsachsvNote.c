#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct note{
	int mssv;
	int dtb;
	char name[100];
	struct note*next;
};
typedef struct note*note1;
note1 CreateNote(int MSV , char name[100],int diemTB){
	note1 temp;
	temp =  (note1)malloc(sizeof(struct note));
	temp->next =  null;
	temp->mssv= MSV;
	strcpy(temp->name ,name);
	temp->dtb = diemTB;
}






int main(){
	int n;
	int diemTB;
	char name[100];
	
	
}