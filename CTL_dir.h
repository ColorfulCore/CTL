#include <sys/stat.h>
using namespace std;
/*
功能：创建文件夹
参数：
1.path --> 文件夹路径
返回值：
1.true --> 操作成功
2.false --> 操作失败
*/
bool MakeDir(string path)
{
	if (_mkdir(path.c_str()) == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
/*
功能：删除文件夹
参数：
1.path --> 文件夹路径
返回值：
1.true --> 操作成功
2.false --> 操作失败
*/
bool RemoveDir(string path)
{
	if (_rmdir(path.c_str()) == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
