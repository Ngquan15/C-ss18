#include<stdio.h>
#include<string.h>
int main(){
	struct thongtin{
		char fullname[50];
		int age;
		char phone[50];
	};
	struct thongtin a
	printf("moi ban nhap ten: ");
	scanf("%s",a.fullname);
	printf("moi ban nhap tuoi: ");
	scanf("%d",&a.age);
	printf("moi ban nhap so dien thoai: ");
	scanf("%s",a.phone);
	printf("thong tin cua ban:\n ten cua ban la %s\n tuoi la %d\n so dien thoai la %s\n",a.fullname,a.age,a.phone);
	return 0;
}
