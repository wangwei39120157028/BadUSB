//基础按键
KEY_LEFT_CTRL
KEY_LEFT_SHIFT
KEY_LEFT_ALT
KEY_LEFT_GUI //win键
KEY_RIGHT_CTRL
KEY_RIGHT_SHIFT
KEY_RIGHT_ALT
KEY_RIGHT_GUI
KEY_UP_ARROW
KEY_DOWN_ARROW
KEY_LEFT_ARROW
KEY_RIGHT_ARROW
KEY_BACKSPACE
KEY_TAB
KEY_RETURN//回车键
KEY_ESC
KEY_INSERT
KEY_DELETE
KEY_PAGE_UP
KEY_PAGE_DOWN
KEY_HOME
KEY_END
KEY_CAPS_LOCK
KEY_F1
KEY_F2
KEY_F3
KEY_F4
KEY_F5
KEY_F6
KEY_F7
KEY_F8
KEY_F9
KEY_F10
KEY_F11
KEY_F12

delay(5000);//延时毫秒

Keyboard.begin(); //开始键盘通讯
Keyboard.end(); //结束键盘通讯
Keyboard.press(); //按下键盘按键 如果是非特殊按键如 数字、字母按键用单引号括起来
Keyboard.release(); //释放键盘按键
Keyboard.println(“”); //输入字符串使用双引号括起来

Mouse.begin();//鼠标事件开始
Mouse.click();//鼠标单击
Mouse.end();//鼠标事件结束
Mouse.move();//鼠标移动(x,y)
Mouse.press();//鼠标按下
Mouse.release();//鼠标松开
Mouse.isPressed();
