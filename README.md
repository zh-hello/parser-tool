# Parser 工具
一个简单的字符串解析工具，支持按指定分隔符分割字符串。

## 项目简介
本项目实现了基础的字符串解析功能，包含以下核心组件：
- parser.h/parser.c：字符串分割核心逻辑
- main.c：调用解析函数的示例程序
- Makefile：自动化编译脚本
- 支持静态库/动态库编译

## 使用说明
### 1. 编译运行
\`\`\`bash
# 编译
make
# 运行
./parser_app
# 清理
make clean
\`\`\`

### 2. 编译静态库
\`\`\`bash
# 生成目标文件
gcc -c parser.c -o parser.o
# 打包为静态库
ar rs libparser.a parser.o
\`\`\`

### 3. 编译动态库
\`\`\`bash
gcc -fPIC -shared -o libparser.so parser.c
\`\`\`

## 作者信息
- 作者：Test User
- 环境：CentOS 8.3 + GCC + Git + GDB
