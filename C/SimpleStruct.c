#include <stdio.h>

// 構造体宣言
struct SinpleStruct {
        int number;
        char letter;
};

// 構造体の初期化
struct SinpleStruct example = {
        42,
        'A'
};

int main() {
        printf("Number: %d\n", example.number);
        printf("Letter: %a\n", example.letter);

        return 0;
}