#include<stdio.h>
#include<string.h>
#define MAX 50

struct Information {
    char name[50];
    int age;
    float grade;
};

int main() {
    struct Information sv[MAX];
    int n = 5,i=0;

    for (int i = 0; i < n; i++) {
        
        printf("Nhap ten SV %d: ", i+1);
        fgets(sv[i].name, sizeof(sv[i].name), stdin);
        sv[i].name[strcspn(sv[i].name, "\n")] = '\0';

        printf("Nhap tuoi SV %d: ", i+1);
        scanf("%d", &sv[i].age);
        getchar();

        printf("Nhap diem trung binh: ");
        scanf("%f",sv[i].grade);
    }
    	printf("THONG TIN SINH VIEN\n");
	for(int i = 0;i<n;i++){
    	printf("Ten sv: %s\n",sv[i].name);
    	printf("Tuoi sv: %d\n",sv[i].age);
    	printf("Diem tb sv: %s\n",sv[i].grade);
	}

    int nameSearch, found = -1;
    printf("Nhap ten can tim kiem: ");
    scanf("%d", &nameSearch);
    for(int i = 0;i<n;i++){
    	if(nameSearch == sv[i].name){
    		found = i;
		}
	}
    if(found == -1){
    	printf("Khong tim thay sv\n");
	}else{
		printf("Ten sv: %s\n",sv[i].name);
		printf("Tuoi sv: %d\n",sv[i].age);
		printf("Diem tb sv: %f",sv[i].grade);
		
	}

    
    return 0;
    
}

