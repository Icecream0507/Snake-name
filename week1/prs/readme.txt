****每个文件的作用****

1.main.cpp
    主函数，程序入口，实现函数调用和选择比较。

2.compare.cpp
    提供比较函数接口，返回outcome结果。

3.p_r_s.h
    自定义类头文件，定义了prs类和outcome类供其他函数使用。

4.select.cpp
    实现选择函数，包括玩家选择和电脑选择，返回选择项。

5.print.cpp
    实现打印函数，包括每单轮战果报告（report函数），战局比分（game_status）。

****优缺点****
    优：整体框架逻辑简单，模块框架清晰，便于程序员阅读使用。

    缺：可能增加了项目的复杂性以及性能开销，逻辑不是一以贯之的可能增加调试难度。

****Makefile文件****
1.make
	自动编译链接当前文件夹下所有.cpp文件生成target可执行文件（main.exe）。
2.make clean
	删除所有.o二进制文件。
3.make run
	运行生成main可执行文件，如果没有则编译生成。