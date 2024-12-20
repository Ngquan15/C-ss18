#include<stdio.h>
#include<string.h>
int main(){
	struct hocsinh{
		char fullname[100];
		int age;
		char phone[100];
	};
	struct hocsinh user01={"Nguyen Dinh Quan",18,"0965256929"};
	printf("ten cua ban la: %s\n",user01.fullname);
	printf("tuoi cua ban la: %d\n",user01.age);
	printf("so dien thoai cua ban la: %s\n",user01.phone);
	return 0;
}
