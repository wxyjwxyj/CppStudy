#预处理
g++ --std=c++17 -E hello.cpp -o hello.i
#预处理和编译成汇编语言操作
g++ --std=c++17 -S hello.cpp -o hello.s
#源文件到目标文件(二进制)
g++ --std=c++17 -c hello.cpp -o hello.c
#源文件到可执行文件
g++ --std=c++17 hello.cpp -o hello.e
#执行程序
./hello.e