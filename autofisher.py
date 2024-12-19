import pyautogui
import time
import os

def read_color_and_click(x, y):
    """
    读取屏幕指定位置 (x, y) 的颜色，如果所有颜色分量均大于200，则点击该位置。
    
    :param x: 屏幕坐标 x
    :param y: 屏幕坐标 y
    """
    while True:
        # 获取屏幕指定位置的颜色
        # screen_color1 = pyautogui.pixel(x, y)
        # screen_color2 = pyautogui.pixel(x+10, y)
        # screen_color3 = pyautogui.pixel(x-10, y)
        
        # 检查颜色是否满足条件
        flag = False
        for i in range( x - 50 , x + 50 , 3 ):
            for j in range( y - 50 , y + 50 , 3 ):
                sc = pyautogui.pixel(i, j)
                #print( sc )
                if all(c > 150 for c in sc) == True:
                    flag = True
        
        if flag == True:
            # print(f"Matched condition with color {screen_color1} at ({x}, {y}). Clicking...")
            #pyautogui.click(x, y)
            pyautogui.rightClick()
            time.sleep(0.5)
            pyautogui.rightClick()
            time.sleep(2)

        # print( screen_color1 , all(c > 150 for c in screen_color1) )
        # print( pyautogui.position() )
        # 等待一段时间后再次检查
        time.sleep(0.5)

time.sleep(5)

# 设置屏幕坐标
x, y = 1280, 634  # 示例坐标

# 运行函数
read_color_and_click(x, y)