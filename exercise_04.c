# include <stdio.h>
# include <stdlib.h>

void hanoi(int n,char origem,char destino,char auxiliar) {

	if(n == 1) { 
		printf("> Mova o disco 1 da base %c para a base %c \n", origem, destino);
		return;
	}
	
	hanoi(n - 1, origem, auxiliar, destino);


	printf("> Mova o disco %d da base %c para a base %c \n", n, origem, destino);
	hanoi(n - 1, auxiliar, destino, origem);
}

main() {
	int n;
	
	system("color 3");
	
	printf("> Digite o numero de discos a serem organizados: \n> ");
	scanf("%d", &n);
	
	system("@cls||clear");
	
	
	hanoi(n, 'A', 'C', 'B');
	printf("\n");
	
	getch();
	return 0;
}
