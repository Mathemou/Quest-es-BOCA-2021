#include <stdio.h>

int main(){

	int l, c, i, j;
	int soma = 0, atual, tot=0;

	scanf("%d %d", &l, &c);


	for (i = 0; i<l; i++){
		for(j = 0; j<c; j++){
			scanf("%d", &atual);
			soma += atual;
		}
		printf("%d\n", soma);
		tot += soma;
        soma = 0;
	}

	printf("%d\n", tot);

	return 0;
}

