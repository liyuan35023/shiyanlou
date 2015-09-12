//实验楼管理程序1.0---2015/9/5-----9/6提交
//纪念二战胜利70周年
//shiyanlouadmin.h---课程类的定义

#ifndef SHIYANLOUADMIN_H_
#define SHIYANLOUADMIN_H_
#include <string>

class Course
{
private:
	int course_id;
	std::string course_name;
	//int name_size;
public:
	Course();
	Course(int n, std::string name);
	//~Course();
	void print();
	int get_namesize();
	void reset(int n,std::string name);
};
#endif