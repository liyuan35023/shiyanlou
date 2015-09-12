//2015/9/11--不开熏的一天
//
//输出命令处理过程函数的声明
//
//

#ifndef INPUTCONTROL_H_
#define INPUTCONTROL_H_

#include <vector>
using std::vector;

/*命令0：帮助信息，显示所有命令功能*/
void show_command();

/*命令1：打印所有课程信息*/
void show_allCourse(vector<Course> course);

/*命令2：显示课程数量*/
void show_numOfCourse(vector<Course> course);

/*命令3：显示名字最长的课程*/
void show_longestCourse(vector<Course> course);

/*命令4：删除最后一个课程*/
void delete_Course(vector<Course> &course);

/*命令5：退出程序*/
void quit(int a);

#endif