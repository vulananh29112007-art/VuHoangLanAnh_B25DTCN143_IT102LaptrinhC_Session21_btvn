#include<stdio.h>
#include<string.h>
struct Book{
	char title[100];
	char author[50];
	float price;
};
int main(){
	struct Book book[3];
	for(int i = 0;i<3;i++){
		printf("Sach %d",i+1);
		getchar();
		
		printf("Ten sach: ");
		fgets(book[i].title,sizeof(book[i].title),stdin);
		book[i].title[strcspn(book[i].title,"\n")] = '\0';
		
		printf("Tac gia: ");
		fgets(book[i].author,sizeof(book[i].author),stdin);
		book[i].author[strcspn(book[i].author,"\n")] = '\0';
		
		printf("Gia sach: ");
		scanf("%f",&book[i].price);
		getchar();
	}
	for(int i = 0;i<3;i++){
		printf("Sach %d\n",i+1);
		printf("Ten sach %d: %s\n",i+1,book[i].title);
		printf("Ten tac gia sach %d: %s\n",i+1,book[i].author);
		printf("Gia scah %d: %f\n",i+1,book[i].price);
	}


   return 0;
}

