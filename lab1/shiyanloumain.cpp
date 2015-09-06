//
//2015/9/5
//shiyanloumain.cpp---实验楼管理程序主函数
//
#include <iostream>
#include <string>
#include <vector>
#include "shiyanlouadmin.h"

int main()
{
	using namespace std;
	
	int id[7] = { 1, 2, 3, 4, 5, 6, 7 };
	string name[7] = { "Linux", "C++", "HTML", "HTML5", "NodeJS", "Shell", "Python" };
	vector<Course> shiyanlou_course(7);
	int i;
	for (i=0;i<7;++i)
	{
		shiyanlou_course[i].reset(id[i],name[i]);
	}
	vector<Course>::iterator it;
	vector<Course>::iterator it_max;
	int number;   //number代表命令
	cout << "实验楼管理程序beta1.0" << endl;
	cout << "请输入数字0-5进行管理，输入0获取命令的详细作用：";
	while (cin >> number)
	{
		if (number == 0)
		{
			cout << "命令1：打印出程序中存储的所有课程ID和课程名" << endl;
			cout << "命令2：打印出课程数量" << endl;
			cout << "命令3：打印出名字最长的课程信息" << endl;
			cout << "命令4：删除最后一个课程" << endl;
			cout << "命令5：退出程序" << endl;
		}
		else if (number == 1)
		{
			for (it = shiyanlou_course.begin(); it != shiyanlou_course.end(); ++it)
			{
				it->print();
				//(*it).print();
			}
		}
		else if (number == 2)
		{
			cout << "课程数量为：";
			cout << shiyanlou_course.size() << endl;
		}
		else if (number == 3)
		{
			cout << "名字最长的课程为：" << endl;
				//vector<int> namesize;
			for (it = shiyanlou_course.begin(); it != shiyanlou_course.end(); ++it)
			{
				//namesize.push_back(it->get_namesize());
				int max_size = 0;
				if (it->get_namesize()>max_size)
				{
					max_size = it->get_namesize();
					it_max = it;
				}
			}
			it_max->print();
		}
		else if (number == 4)
		{
			if (shiyanlou_course.size() == 0)
			{
				cout << "没有课程，错误。" << endl;
			}
			else
			{
				it=shiyanlou_course.end()-1;
				cout<<"删除";
				it->print();
				shiyanlou_course.pop_back();
			}
		}
		else if (number == 5)
		{
			break;
		}
		else
		{
			cout << "请输入数字0-5:";
		}
		cout << "请输入数字0-5进行管理，输入0获取命令的详细作用：";
	}
	return 0;
}