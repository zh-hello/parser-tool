#ifndef PARSER_H
#define PARSER_H

// 字符串分割函数：按分隔符分割字符串，返回分割后的数组
char** split_string(const char* str, const char delim, int* count);
// 释放分割后的数组内存
void free_split(char** arr, int count);

#endif
