实验项目---实验楼管理程序 Beta2.0
实验楼管理项目程序分为五个文件：shiyanlouadmin.h与shiyanlouadmin.cpp与shiyanloumain.cpp（beta1.0）以及beta2.0新添的inputcontrol.h与
                                inputcontrol.cpp。
其中，头文件shiyanlouadmin.h中主要包括课程类的定义及相关操作,
shiyanlouadmin.cpp文件主要包括课程类的具体的实现，
而shiyanloumain.cpp文件主要是main函数中的管理程序的一些实现。

inputcontrol.h中是输入处理过程函数的声明，
inputcontrol.cpp中是输入处理过程函数的定义。

2015/9/11 update:
1.输入判断方式：由if else 改成switch语句。
2.将每个输入处理过程改写为单独的函数，函数声明放在新的头文件中。

2015/9/12 update2:
1,使用try catch语句处理输入异常。