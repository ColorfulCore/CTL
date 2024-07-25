#include <random>

using namespace std;

/*
功能：生成一个随机数(int)
参数：
1.start --> 生成随机数中的最小值
1.end --> 生成随机数中的最大值
返回值：{ X | start <= X <= end }
*/
int RandInt(int start, int end)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(start, end);
    return  distrib(gen);
}
