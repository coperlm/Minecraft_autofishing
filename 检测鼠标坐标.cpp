#include <iomanip>		//setw（）函数所在库
#include <iostream>	
#include <Windows.h>	//windows系统库，获取鼠标位置需要用到

int main ( ) {
    CONSOLE_CURSOR_INFO info = { 1, 0 };				//创建光标的属性结构体
    HANDLE hand = GetStdHandle( STD_OUTPUT_HANDLE );	//创建光标的句柄
    COORD coord = { 0, 0 };								//创建xy坐标结构体，用于设置光标位置
    POINT pt = { 0, 0 };								//创建鼠标点坐标变量
    SetConsoleCursorInfo( hand, &info );				//设置光标属性
    //循环显示
    while ( 1 ) {
        SetConsoleCursorPosition( hand, coord );		//传入光标句柄和坐标设置光标位置
        GetCursorPos ( &pt );							//获取鼠标点的坐标位置
        std :: cout << pt.x << ',' << pt.y << std :: setw ( 10 ) << "\0" << std :: endl;	//输出坐标
    }
    //循环显示结束
    return 0;
}
//850 430