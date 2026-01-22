#include <stdio.h>

int main() {
    
    int var = 15;
    int *ptr;

    ptr = &var;

    printf("conteudo de var = %d\n", var);
    printf("endereco de var = %p\n", &var);
    printf("conteudo apontado por ptr = %d\n", *ptr);
    printf("endereco de ptr = %p\n", ptr);
    printf("endereco do ptr        = %p\n", &ptr);

    *ptr = 73;

    printf("conteudo de var = %d\n", var);
    printf("endereco de var = %p\n", &var);
    printf("conteudo apontado por ptr = %d\n", *ptr);
    printf("endereco de ptr = %p\n", ptr);
    printf("endereco do ptr        = %p\n", &ptr);

    //*ptr : apontado por, conteúdo do endereço da variável que ptr aponta
    //ptr : endereço da variável 
    //&ptr : endereço do ponteiro
    return 0;
}
