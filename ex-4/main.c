#include <stdlib.h>
#include <stdio.h>

int main(){

int number;

printf("Saissisez un nombre different de 0: ");
scanf("%d", &number);

int count = 0;
while (count <= number) {
printf("%d\n", count);
count = count + 1; 

}

exit(0);

}