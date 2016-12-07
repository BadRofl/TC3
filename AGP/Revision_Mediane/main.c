#include "mediane.h"
#include <stdio.h>
int main(){
	double medi;
	int tableau[6] = {1,-2,6,19,3,8};
	medi = mediane(tableau, 6);
	printf("Main : mediane = %f\n", medi);
	return 0;
}
