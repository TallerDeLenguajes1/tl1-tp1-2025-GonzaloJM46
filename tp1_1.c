#include <stdio.h>

int main(){
    printf("hola mundo");
    int variable = 23;
    int *punt = &variable;

    printf("\n%d ", *punt);
    printf("\n%p ", &punt);
    printf("\n%p ", &variable);
    printf("\n%zu ", sizeof(variable));


    return 0;
}