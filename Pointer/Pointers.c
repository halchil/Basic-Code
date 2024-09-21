# include <stdio.h>

int main() {
    int a = 10;
    int *ptr = &a;

    printf("aの値 : %d\n", a);
    
    printf("ポインタを使ったaの値 : %d\n", *ptr);

    printf("ポインタのアドレス : %p\n", ptr);

    printf("aのアドレス : %p\n", &a);

    return 0;

}