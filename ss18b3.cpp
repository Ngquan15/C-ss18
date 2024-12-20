#include<stdio.h>
#include<string.h>
struct thongtin{
		char fullname[50];
		int age;
		char phone[15];
	};
int main(){
	struct thongtin m[5];
	for(int i = 0;i<5;i++){
		printf("Nguoi thu %d\n",i+1);
		printf("moi ban nhap ten: ");
		scanf("%s",m[i].fullname);
		printf("moi ban nhap tuoi: ");
		scanf("%d",&m[i].age);
		printf("moi ban nhap so dien thoai: ");
		scanf("%s",m[i].phone);
	}
	printf("thong tin cua cac ban la \n ");
	for(int i = 0;i<5;i++){
		printf("nguoi thu %d",i+1);
		printf("ten cua ban la %s\n",m[i].fullname);
		printf("tuoi la %d\n",m[i].age);
		printf("so dien thoai la %s\n",m[i].phone);
	}
	return 0;
}
