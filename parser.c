#include "parser.h"
#include <stdlib.h>
#include <string.h>

char** split_string(const char* str, const char delim, int* count) {
    if (str == NULL) {
        *count = 0;
        return NULL;
    }

    // 统计分隔符数量
    int delim_num = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == delim) delim_num++;
    }

    *count = delim_num + 1;
    char** result = malloc(*count * sizeof(char*));
    if (result == NULL) {
        *count = 0;
        return NULL;
    }

    // 分割字符串
    const char* start = str;
    int idx = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == delim) {
            result[idx] = malloc(i - (start - str) + 1);
            strncpy(result[idx], start, i - (start - str));
            result[idx][i - (start - str)] = '\0';
            start = &str[i+1];
            idx++;
        }
    }
    // 处理最后一段
    result[idx] = malloc(strlen(start) + 1);
    strcpy(result[idx], start);

    return result;
}

void free_split(char** arr, int count) {
    if (arr == NULL) return;
    for (int i = 0; i < count; i++) {
        free(arr[i]);
    }
    free(arr);
}
