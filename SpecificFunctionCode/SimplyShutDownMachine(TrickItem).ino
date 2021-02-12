#include <Keyboard.h>

void setup()
 {
  // put your setup code here, to run once:
  Keyboard.begin();//开始键盘通讯
  delay(5000);//延时
  Keyboard.press(KEY_CAPS_LOCK);//开启大写锁
  Keyboard.release(KEY_CAPS_LOCK);
  delay(50);
  Keyboard.press(KEY_LEFT_GUI);//win键
  delay(500);
  Keyboard.press('r');//r键
  delay(500);
  Keyboard.release(KEY_LEFT_GUI);//按住win+R
  Keyboard.release('r');
  Keyboard.print("cmd");//输入cmd
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);//回车
  delay(500);
  Keyboard.print("shutdown -s -t 0");//关机
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);//回车
  Keyboard.end();
}

void loop() 
{

}