#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int numbers[2][3][2];
	int i,j,k;
	
	printf("Type 12 numbers:");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			for(k=0;k<2;k++){
				scanf("%d",&numbers[i][j][k]);
			}
		}
	}
	printf("Choosen numbers are:\n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			for(k=0;k<2;k++){
				printf("Numbers[%d][%d][%d]= %d\n",i,j,k,numbers[i][j][k]);
			}
		}
	}
	return 0;
}
