//
//2015/9/5
//shiyanloumain.cpp---实验楼管理程序主函数
//
#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include "shiyanlouadmin.h"
#include "inputcontrol.h"

int quit_flag=1;

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

	//vector<Course>::iterator it;
	//vector<Course>::iterator it_max;
	
	int number;   //number代表命令
	cout << "实验楼管理程序Beta2.0" << endl;
	cout << "请输入数字0-5进行管理，输入0获取命令的详细作用：";
	
	while((quit_flag==1)&&(cin>>number))
	{
	    
    	switch(number)
		{
			case 0:show_command();break;
    	    case 1:show_allCourse(shiyanlou_course);break;
    	    case 2:show_numOfCourse(shiyanlou_course);break;
    	    case 3:show_longestCourse(shiyanlou_course);break;
    	    case 4:delete_Course(shiyanlou_course);break;
    	    case 5:quit(0);break;
    	}
		try
		{
			if (number<0||number>5)
			{
				throw runtime_error("输入非法,允许输入的命令范围为0-5。");
				//cout<<"输入非法,允许输入的命令范围为0-5。"<<endl;
			}
		}
	    catch(runtime_error err)
	    {
	        cout<<err.what()
	            <<"需要继续吗？（y or n）";
			char ch;
			cin>>ch;
			if(ch!='y'&&ch!='Y')
				break;
	    }
		if(quit_flag==1)
		{
			cout << "请输入数字0-5进行管理，输入0获取命令的详细作用：";
		}
	}
	return 0;
}