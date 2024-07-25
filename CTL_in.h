#include <conio.h>
#define Key_a 97
#define Key_b 98
#define Key_c 99
#define Key_d 100
#define Key_e 101
#define Key_f 102
#define Key_g 103
#define Key_h 104
#define Key_i 105
#define Key_j 106
#define Key_k 107
#define Key_l 108
#define Key_m 109
#define Key_n 110
#define Key_o 111
#define Key_p 112
#define Key_q 113
#define Key_r 114
#define Key_s 115
#define Key_t 116
#define Key_u 117
#define Key_v 118
#define Key_w 119
#define Key_x 120
#define Key_y 121
#define Key_z 122
#define Key_A 65
#define Key_B 66
#define Key_C 67
#define Key_D 68
#define Key_E 69
#define Key_F 70
#define Key_G 71
#define Key_H 72
#define Key_I 73
#define Key_J 74
#define Key_K 75
#define Key_L 76
#define Key_M 77
#define Key_N 78
#define Key_O 79
#define Key_P 80
#define Key_Q 81
#define Key_R 82
#define Key_S 83
#define Key_T 84
#define Key_U 85
#define Key_V 86
#define Key_W 87
#define Key_X 88
#define Key_Y 89
#define Key_Z 90
#define Key_0 48
#define Key_1 49
#define Key_2 50
#define Key_3 51
#define Key_4 52
#define Key_5 53
#define Key_6 54
#define Key_7 55
#define Key_8 56
#define Key_9 57
#define Key_F1 112
#define Key_F2 113
#define Key_F1 114
#define Key_F4 115
#define Key_F5 116
#define Key_F6 117
#define Key_F7 118
#define Key_F8 119
#define Key_F9 120
#define Key_F10 121
#define Key_F11 122
#define Key_F12 123
#define Key_Tab 9
#define Key_Enter 13
#define Key_Shift 16
#define Key_Control 17
#define Key_Alt 18
#define Key_ESC 27
#define Key_Left 37
#define Key_Up 38
#define Key_Right 39
#define Key_Down 40

using namespace std;

/*
功能：将用户输入读取到string类型容器
参数：
1.str --> string容器
2.stop --> 读取到哪个字符时停止(默认换行符)
*/
inline void InputStr(string& str, char stop = '\n')
{
	getline(cin, str, stop);
}

/*
功能：用户按下按键后立即读取(无需按回车键)
参数：
1.clog-->是否阻塞
若true->阻塞程序并检查输入
false->不阻塞程序并检查输入(建议搭配循环使用)
*/
int CheckKey(bool clog)
{
	if (clog) return _getch();
	else if (_kbhit()) return _getch();
}
