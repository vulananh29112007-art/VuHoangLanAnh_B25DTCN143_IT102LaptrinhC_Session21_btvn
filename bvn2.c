#include<stdio.h>
struct Student{
	char name[50];
	int age;
	float grade;
};
struct Student student1 = {"Vu Hoang Lan Anh",17,8.75};
int main(){
	printf("Ten hs: %s\n",student1.name);
	printf("Tuoi hs: %d\n",student1.age);
	printf("Diem trung binh cua hoc sinh: %.2f",student1.grade);


   return 0;
}

