#include <windows.h>
#include <iostream>

int main() {
    // 屏幕坐标
    
    int x = 100;
    int y = 100;

    // 获取屏幕设备上下文
    HDC hdcScreen = GetDC(NULL);

    // 获取指定坐标的像素颜色
    COLORREF color = GetPixel(hdcScreen, x, y);

    // 释放屏幕设备上下文
    ReleaseDC(NULL, hdcScreen);

    // 打印RGB值
    std::cout << "The color of the pixel at (" << x << ", " << y << ") is: "
              << "R=" << GetRValue(color) << " G=" << GetGValue(color) << " B=" << GetBValue(color) << std::endl;

    return 0;
}