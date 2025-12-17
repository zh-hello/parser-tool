int count_file_lines(const char* filename) {
    FILE* fp = fopen(filename, "r");
    if (fp == NULL) {
        perror("打开文件失败");
        return -1;
    }

    int lines = 0;
    char buf[1024];
    while (fgets(buf, sizeof(buf), fp) != NULL) {
        lines++;
    }

    fclose(fp);
    return lines;
}
