#include<stdio.h>
#include<string.h>

struct Student {
    char name[50];
    int age;
    float grade;
};

int main() {
    struct Student student[5];
    int n = 5,i=0;

    for (int i = 0; i < n; i++) {
        
        printf("Nhap ten sv %d: ", i+1);
        fgets(student[i].name, sizeof(student[i].name), stdin);
        student[i].name[strcspn(student[i].name, "\n")] = '\0';

        printf("Nhap tuoi sv %d: ", i+1);
        scanf("%d", &student[i].age);
        getchar();

        printf("Nhap diem trung binh: ");
        scanf("%f",student[i].grade);
    }
    	printf("THONG TIN SINH VIEN\n");
	for(int i = 0;i<n;i++){
    	printf("Ten sv: %s\n",student[i].name);
    	printf("Tuoi sv: %d\n",student[i].age);
    	printf("Diem tb sv: %s\n",student[i].grade);
	}

    int nameSearch, found = -1;
    printf("Nhap ten can tim kiem: ");
    scanf("%d", &nameSearch);
    for(int i = 0;i<n;i++){
    	if(nameSearch == student[i].name){
    		found = i;
		}
	}
    if(found == -1){
    	printf("Khong tim thay student\n");
	}else{
		printf("Ten sv: %s\n",student[i].name);
		printf("Tuoi sv: %d\n",student[i].age);
		printf("Diem tb sv: %f",student[i].grade);
		
	}

    
    return 0;
    
}


