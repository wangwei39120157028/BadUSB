//隐藏CMD窗口
void setup() {
  Keyboard.begin();
  delay(3000);
  Keyboard.press(KEY_LEFT_GUI);
  delay(200); 
  Keyboard.print('r');
  delay(200); 
  Keyboard.release(KEY_LEFT_GUI);
  Keyboard.press(KEY_CAPS_LOCK);
  Keyboard.release(KEY_CAPS_LOCK);
  delay(1000); 
  //=========================Run==========================
  Keyboard.println("CMD /t:01 /q /d /f:off /v:on /k MODE con: cols=30 lines=6");
  delay(1000);
  Keyboard.press(KEY_LEFT_ALT);
  delay(200); 
  Keyboard.press(' ');
  delay(200); 
  Keyboard.release(KEY_LEFT_ALT);
  Keyboard.release(' ');
  delay(200);
  Keyboard.print("m");
  Keyboard.press(KEY_LEFT_ARROW);
  delay(3000);
  Keyboard.release(KEY_LEFT_ARROW);
  Keyboard.println();
  //======================================================
  Keyboard.press(KEY_CAPS_LOCK);
  Keyboard.release(KEY_CAPS_LOCK);
  Keyboard.end();
}

void loop() {
}
