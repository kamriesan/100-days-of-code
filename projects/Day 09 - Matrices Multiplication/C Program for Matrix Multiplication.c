// @kamriesan_
// Multiplying Matrices
#include <stdio.h>
#define MAX 50

int main (){

		// Input Matrix A
		int a[MAX][MAX], b[MAX][MAX], product[MAX][MAX];
		int arows, acols, brows, bcols;
		int i, j, k;
		int sum = 0;
		
		printf("Enter row and col of matrix a: "); 
		scanf("%d %d", &arows, &acols);
		
		printf("\nEnter elements of matrix a:\n");
		for(i=0; i<arows; i++) {
			for(j=0; j<acols; j++) {
				scanf("%d", &a[i][j]);
			}
		}	
			
		// Input Matrix B
		printf("\nEnter row and col of matrix b: "); 
		scanf("%d %d", &brows, &bcols);
		
		if (brows != acols){
			printf("\nInvalid Matrices.");
		}
		else {
			printf("\nEnter elements of matrix b:\n");
		for(i=0; i<brows; i++) {
			for(j=0; j<bcols; j++) {
				scanf("%d", &b[i][j]);
			}
		}		
		}
		
		// Resultant Matrix
		for(i=0; i<arows; i++) {
			for(j=0; j<bcols; j++) {
				for(k=0; k<brows; k++){
					sum +=a[i][k] * b[k][j]; // matrix 1st rows[i] x 2nd col[j]
				}
				product[i][j] = sum;
				sum=0;
			}
		}				
		
		// printing result
		printf("\nResultant Matrix\n");
		for(i=0; i<arows; i++){
			for(j=0;j<bcols;j++){
				printf("%d ", product[i][j]);
			}
			printf("\n");
		}
		
return 0;
}
