#include <stdio.h>
#include <string.h>

//O programa solicita que o usuário digite um número e, em seguida, realiza a soma desse número com ele mesmo. FAM 2022.

int main ()
{
  int numero,soma,opcao;

  do
  {
    printf("\n Informe um numero para somar ou 0 para sair\n");
    scanf("%d", &numero);
    
    soma = numero * 2;
    
  if(soma==0)
  {
      printf("\nVoce nao informou numeros para a soma!!");
  }
  else
  {
      printf("\nvoce informou o numero %d e a soma e: %d",numero,soma);
  }

       printf("\n Para executar novamente digite 1 para finalizar digite 0\n");
       scanf("%d", &opcao);

  } while(opcao != 0);

return 0;

}
