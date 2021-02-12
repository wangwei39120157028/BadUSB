void setup() {
  Keyboard.begin();//开始键盘通讯 
  delay(3000);//延时
  Keyboard.press(KEY_LEFT_GUI);//win键 
  delay(500); 
  Keyboard.press('r');//r键 
  delay(500); 
  Keyboard.release(KEY_LEFT_GUI);
  Keyboard.release('r');
  delay(500); 
  Keyboard.println("cmd /c netsh interface ip set dns \"Local Area Connection\" static 127.0.0.1-192.168.1.1&&netsh interface ip set dns \"????\" static 127.0.0.1-192.168.1.1");  //DOS命令设置多个DNS
  Keyboard.end();
}
void loop() {
}
