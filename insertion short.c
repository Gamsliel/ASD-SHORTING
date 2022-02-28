#include <stdio.h>

int angka[8]={23, 67, 89, 5, 45, 20, 15, 27};

void main(){
for(int i=1; i<8; i++){
for(int j=i; j>0 && angka[j]<angka[j-1]; j--){
			int temp=angka[j-1];
			angka[j-1]=angka[j];
			angka[j]=temp;
		}
	}

	//cetak data
	printf("Hasil Sorting: \n");
	for(int i=0; i<8; i++){
		printf("%d ", angka[i]);
	}
	getchar();
}
