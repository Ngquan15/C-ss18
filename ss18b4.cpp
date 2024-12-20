#include<stdio.h>
#include<string.h>
struct thongtin{
		char fullname[50];
		int age;
		char phone[15];
	};
int main(){
	struct thongtin m[50];
	for(int i = 0;i<50;i++){
		printf("ban co id la %d\n",i+1);
		printf("moi ban nhap ten: ");
		scanf("%s",m[i].fullname);
		printf("moi ban nhap tuoi: ");
		scanf("%d",&m[i].age);
		getchar();
		printf("moi ban nhap so dien thoai: ");
		scanf("%s",m[i].phone);
	}
	printf("thong tin cua cac ban là \n ");
	for(int i = 0;i<50;i++){
		printf("id cua ban la %d",i+1);
		printf("ten cua ban la %s\n",m[i].fullname);
		printf("tuoi la %d\n",m[i].age);
		printf("so dien thoai la %s\n",m[i].phone);
	}
	return 0;
}
