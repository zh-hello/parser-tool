#include "parser.h"
#include <stdio.h>

int main() {
    // 1. 字符串解析功能
    const char* test_str = "hello,git,gcc,gdb,makefile";
    int count = 0;
    char** result = split_string(test_str, ',', &count);

    printf("=== 字符串分割结果 ===\n");
    printf("分割结果（共%d个）：\n", count);
    for (int i = 0; i < count; i++) {
        printf("%d: %s\n", i+1, result[i]);
    }
    free_split(result, count);

    // 2. 行统计功能
    const char* filename = "README.md";
    int line_num = count_file_lines(filename);
    printf("\n=== 文件行统计结果 ===\n");
    if (line_num >= 0) {
        printf("文件%s的行数：%d\n", filename, line_num);
    } else {
        printf("统计%s行数失败\n", filename);
    }

    return 0;
}
