# include <stdio.h>
# include <stdlib.h>

int main() {

	int n, x, i, resultado = 0, cont;

	system("color 3");
	
	printf("Digite o numero que ira definir a quantidade de vezes: \n>");
	scanf("%d", &x);

	printf("Digite o numero que ira ser multiplicado: \n>");
	scanf("%d", &n);

	system("cls");
	
	for(cont = 0; cont < x; cont++) {
		
	resultado = resultado + n;	
		
	}
	
	printf("> O valor da multiplicacao eh: %d \n", resultado);
	
	system("pause");
	return 0;
}
