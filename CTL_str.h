#include <cstring>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

//功能：将string类型转为int类型
inline void StrToInt(string s, int &i)
{
	i = stoi(s);
}
//功能：将string类型转为float类型
inline void StrToFloat(string s, float &f)
{
	f = stof(s);
}
//功能：将string类型转为double类型
inline void StrToDouble(string s, double &d)
{
	d = stod(s);
}
//功能：将string类型转为char[]类型
inline void StrToChar(string s, char c[])
{
	s.copy(c, s.size(), 0);
	*(c + 5) = '\0';
}
//功能：将int类型转为string类型
inline void IntToStr(int i, string &s)
{
	s = to_string(i);
}
//功能：将float类型转为string类型
inline void FloatToStr(float f, string &s)
{
	s = to_string(f);
}
//功能：将double类型转为string类型
inline void DoubleToStr(double d, string &s)
{
	s = to_string(d);
}
//功能：将char*类型转为string类型
inline void CharToStr(char* c, string &s)
{
	string temp(c);
	s = temp;
}
/*
功能：将字符串分割成多段，并分别存储到vector<string>类型中
参数：
1.str --> 待分割字符串
2.strList --> 字符串列表(用于存储分割后的字符串)
3.splitChar --> 读取到哪个字符时进行分割
*/
void SplitStr(string str, vector<string> &strList, char splitChar)
{
	stringstream ss(str);
	string temp;
	vector<string> ret;
	while (getline(ss, temp, splitChar)) {
		strList.push_back(temp);
	}
}
/*
功能：检测某字符是否在字符串中
参数：
1.str --> 字符串
2.c --> 某字符
返回值：
1.true --> 存在
2.false --> 不存在
*/
bool StrCheckChar(string str, char c)
{
	if (str.find(c) == string::npos) return false;
	else return true;
}
/*
功能：检测某字符串是否在字符串中
参数：
1.str --> 字符串
2.c --> 某字符串
返回值：
1.true --> 存在
2.false --> 不存在
*/
bool StrCheckStr(string str, string s)
{
	if (str.find(s) == string::npos) return false;
	else return true;
}
/*
功能：查找某字符在字符串中的位置(下标)
参数：
1.str --> 字符串
2.c --> 某字符
3.first --> 是否从头检测(true->是 false->从末尾检测)
返回值：
1.若存在则返回所选检测顺序下的字符在字符串中的位置(下标)
2.若不存在则返回所(-1)
*/
int StrFindChar(string str, char c, bool first)
{
	if (first) return str.find_first_of(c);
	else return str.find_last_of(c);
}
