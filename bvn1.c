#include<stdio.h>
struct myCar {
	char model[20];
	int year;
	char price[30];
};
struct myCar car = {"Roll Royce Ghost",2009,"31300000000"};
int main(){
	printf("Ten xe: %s\n",car.model);
	printf("Nam san xuat xe: %d\n",car.year);
	printf("Gia xe: %s",car.price);


   return 0;
}

