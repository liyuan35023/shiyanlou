//2015/9/11
//c++11
//输出命令处理过程函数的定义
//
//

#include "shiyanlouadmin.h"
#include "inputcontrol.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<Course>::iterator it;
vector<Course>::iterator it_max;
extern int quit_flag;
/*命令0：帮助信息，显示所有命令功能*/
void show_command()
{
    cout << "命令1：打印出程序中存储的所有课程ID和课程名" << endl;
    cout << "命令2：打印出课程数量" << endl;
    cout << "命令3：打印出名字最长的课程信息" << endl;
    cout << "命令4：删除最后一个课程" << endl;
    cout << "命令5：退出程序" << endl;
}

/*命令1：打印所有课程信息*/
void show_allCourse(vector<Course> course)
{
    for (it = course.begin(); it != course.end(); ++it)
    {
        it->print();
        //(*it).print();
    }
}

/*命令2：显示课程数量*/
void show_numOfCourse(vector<Course> course)
{
    cout << "课程数量为：";
    cout << course.size() << endl;
}

/*命令3：显示名字最长的课程*/
void show_longestCourse(vector<Course> course)
{
    cout << "名字最长的课程为：" << endl;
				//vector<int> namesize;
	int max_size = 0;
	for (it = course.begin(); it != course.end(); ++it)
	//for (auto it = course.begin(); it != course.end(); ++it)
	{
		//namesize.push_back(it->get_namesize());
		if (it->get_namesize()>max_size)
		{
			max_size = it->get_namesize();
		}
	}
	for (it_max = course.begin(); it_max != course.end(); ++it_max)
	{
	    if(it_max->get_namesize()==max_size)
        it_max->print();
	}
}

/*命令4：删除最后一个课程*/
void delete_Course(vector<Course> &course)
{
    if (course.size() == 0)
	{
		cout << "没有课程，错误。" << endl;
	}
	else
	{
		it=course.end()-1;
		cout<<"删除";
		it->print();
		course.pop_back();
	}
}

/*命令5：退出程序*/
void quit(int a)
{
    quit_flag=a;
	cout<<"程序退出"<<endl;
	cin.get();
	cin.get();
	//break;
}
