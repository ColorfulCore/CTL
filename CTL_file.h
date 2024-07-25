#include <fstream>
#include <direct.h>
#include <io.h>
#include <string>

using namespace std;

/*
功能：将文件内容读取到string类型容器
参数：
1.text --> string容器
2.path --> 文件路径
3.stop --> 读取到哪个字符时停止(选填)
返回值：
1.true --> 操作成功
2.false --> 操作失败
*/
bool ReadFile(string& text, string path, char stop = (char)EOF)
{
	ifstream ifs;
	ifs.open(path, ios::in);
	if (ifs.is_open())
	{
		getline(ifs, text, stop);
		ifs.close();
		return true;
	}
	else
	{
		return false;
	}
}

/*
功能：将二进制文件内容读取到string类型容器
参数：
1.text --> string容器
2.path --> 文件路径
3.stop --> 读取到哪个字符时停止(选填)
返回值：
1.true --> 操作成功
2.false --> 操作失败
*/
bool ReadBinaryFile(string& text, string path, char stop = (char)EOF)
{
	ifstream ifs;
	ifs.open(path, ios::in | ios::binary);
	if (ifs.is_open())
	{
		getline(ifs, text, stop);
		ifs.close();
		return true;
	}
	else
	{
		return false;
	}
}

/*
功能：将string容器中的内容写入文件
参数：
1.text --> string容器
2.path --> 文件路径(若文件不存在, 则创建新文件)
3.overwrite --> 是否覆盖文件原内容(true覆盖写入, false追加写入)
返回值：
1.true --> 操作成功
2.false --> 操作失败
*/
bool WriteFile(string text, string path, bool overwrite)
{
	ofstream ofs;
	if (overwrite)
	{
		ofs.open(path, ios::out);
	}
	else
	{
		ofs.open(path, ios::out | ios::app);
	}
	if (ofs.is_open())
	{
		ofs << text;
		ofs.close();
		return true;
	}
	else
	{
		return false;
	}
}

/*
功能：将string容器中的内容以二进制的形式写入文件
参数：
1.text --> string容器
2.path --> 文件路径(若文件不存在, 则创建新文件)
3.overwrite --> 是否覆盖文件原内容(true覆盖写入, false追加写入)
返回值：
1.true --> 操作成功
2.false --> 操作失败
*/
bool WriteBinaryFile(string text, string path, bool overwrite)
{
	ofstream ofs;
	if (overwrite)
	{
		ofs.open(path, ios::out | ios::binary);
	}
	else
	{
		ofs.open(path, ios::out | ios::app | ios::binary);
	}
	if (ofs.is_open())
	{
		int len = text.size();
		ofs.write(reinterpret_cast<char*>(&len), sizeof(int));
		ofs.write(text.c_str(), len);
		ofs.close();
		return true;
	}
	else
	{
		return false;
	}
}

/*
功能：检查文件是否存在
参数：
1.path --> 文件路径
返回值：
1.true --> 存在
2.false --> 不存在
*/
bool CheckFile(string path)
{
	ifstream f(path.c_str());
	bool b = f.good();
	f.close();
	return b;
}

/*
功能：删除文件
参数：
1.path --> 文件路径
返回值：
1.true --> 操作成功
2.false --> 操作失败
*/
bool RemoveFile(string path)
{
	if (remove(path.c_str()) == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
