#include<stdio.h>
#include<string.h>
struct Product{
	char name[50];
	float price;
	int quantity;
};
int main(){
	struct Product product[5];
	float all = 0;
	for(int i = 0;i<5;i++){
		printf("San pham %d\n",i+1);
		
		printf("Ten: ");
		fgets(product[i].name,sizeof(product[i].name),stdin);
		product[i].name[strcspn(product[i].name,"\n")] = '\0';
		
		printf("Gia: ");
		scanf("%f",product[i].price);
		getchar();
		
		printf("So luong: ");
		scanf("%d",&product[i].quantity);
		getchar();
	}
	
	for(int i = 0;i<5;i++){
		all += product[i].price * product[i].quantity;
	}
	printf("Tong gia tri cua tat ca cac san pahm: %f",all);


   return 0;
}

