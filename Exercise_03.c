# include <stdio.h>
# include <stdlib.h>

int numero;
int aux = 0;
int k = 0;

int verifica(int n){
	
    if(n == 0)
      return 0;
     else
    {
     if(aux==(n % 10))
     {
        k++;
     }
     n = n / 10;
     return verifica(n);
    }
    
return 0;

 }
 
int main(){
	
   system("color 3");
   
   printf("> Digite um numero: \n> ");
   scanf("%d", &numero);
   
   printf("> Digite o numero a ser verificado: \n> ");
   scanf("%d", &aux);
   
   verifica(numero);
   
   printf("> Vezes em que o numero foi repetido: \n> %d", k);
   
   getch();
   return 0;
}
