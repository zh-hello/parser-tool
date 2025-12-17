# 编译器
CC = gcc
# 编译选项
CFLAGS = -Wall -g

# 目标可执行文件
TARGET = parser_app

# 源文件
SRCS = main.c parser.c
# 目标文件
OBJS = \$(SRCS:.c=.o)

# 默认目标
all: \$(TARGET)

# 编译可执行文件
\$(TARGET): \$(OBJS)
	\$(CC) \$(CFLAGS) -o \$@ \$^

# 编译目标文件
%.o: %.c
	\$(CC) \$(CFLAGS) -c -o \$@ \$<

# 清理编译产物
clean:
	rm -f \$(TARGET) \$(OBJS) libparser.a libparser.so
