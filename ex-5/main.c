#include <stdlib.h>
#include <stdio.h>

int main(){

char symbol;
int number;
int i; 

printf("Choisissez une opération : +, -, : \n");
scanf("%c", &symbol); 

printf("Choisissez un nombre différent de 0 : \n");
scanf("%d", &number);

	if(symbol == '+')
{

i = 0;
while(i <= number)

{ 

printf("%d\n", i);
i = i + 1;

}

}

else
	{
		printf("Le symbole %c n'est pas reconnu\n", symbol);
	}

return(0);

}