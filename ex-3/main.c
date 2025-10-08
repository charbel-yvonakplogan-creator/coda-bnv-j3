#include <stdlib.h>
#include <stdio.h>

int main(){

    char word[50]; 
    printf("Saissisez un mot de moins de 50 caractères :  ");
    scanf("%s", word);

int count = 0;
while(count < 5) {
printf("%s\n", word);
count = count + 1;
}

exit(0);

}