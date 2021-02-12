//Ubuntu的基本终端命令
void setup() {
  Keyboard.begin();
  delay(3000);//延时
  Keyboard.press(KEY_LEFT_ALT);
  delay(200); 
  Keyboard.press(KEY_F2);
  delay(200); 
  Keyboard.release(KEY_LEFT_ALT);
  Keyboard.release(KEY_F2);
  delay(500);
  Keyboard.press(KEY_CAPS_LOCK);
  Keyboard.release(KEY_CAPS_LOCK);
  delay(200); 
  //=========================Run==========================
  Keyboard.println("XTERM");
  delay(500);
  Keyboard.println();
  delay(750);
  Keyboard.print("PWD");
  delay(500);
  Keyboard.println();
  delay(300);
  Keyboard.print("ID");
  delay(300);
  Keyboard.println();
  delay(500);
  Keyboard.print("CAT /ETC/PASSWD")
  delay(500);
  Keyboard.println();
  //======================================================
  Keyboard.press(KEY_CAPS_LOCK);
  Keyboard.release(KEY_CAPS_LOCK);
  Keyboard.end();//结束键盘通讯 
}

void loop() {
}
