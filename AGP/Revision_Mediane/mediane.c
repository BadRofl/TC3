#include <stdio.h>
#include <stdlib.h>

double mediane(int tab[], int size){
	int i;
	int j;
	int temp;
	double medi;

	for(i=size-1;i>0;i--){
		for(j=1;j<=i;j++){
			if(tab[j-1]>tab[j]){
				temp = tab[j-1];
				tab[j-1] = tab[j];
				tab[j] = temp;
			}
		}
	}
	
	printf("Tableau trie");
 
	for(i=0;i<size;i++){
		printf("%d,", tab[i]);
	}
	printf("\n");

	if(size%2 == 1){
		medi = (double)tab[size/2];
		
	}else{
		medi = (double)((tab[size/2-1]+tab[size/2])/2.0);
	}

	printf("Mediane : %f\n", medi);
	return medi;
}
