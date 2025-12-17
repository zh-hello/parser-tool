#include "parser.h"
#include <stdio.h>

int main() {
    const char* test_str = "hello,git,gcc,gdb,makefile";
    int count = 0;
    char** result = split_string(test_str, ',', &count);

    printf("分割结果（共%d个）：\n", count);
    for (int i = 0; i < count; i++) {
        printf("%d: %s\n", i+1, result[i]);
    }

    free_split(result, count);
    return 0;
}
