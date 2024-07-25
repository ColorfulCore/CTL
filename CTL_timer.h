#include <time.h>

using namespace std;

/*
功能：实现计数器功能的类(精度->1毫秒)
*/
class Timer
{
public:
	/*
	功能：实现计数器功能的类(精度->1毫秒)
	参数：time -> 时间间隔(单位：毫秒)
	注：建议与循环一起使用
	*/
	bool check(int time)
	{
		if (clock() - start >= time)
		{
			start = clock();
			return true;
		}
		else return false;
	}
private:
	int start = clock();
};
