#include "DigiKeyboard.h"

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(0,MOD_GUI_LEFT); //klik windows key
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("cmd"); //ketik cmd
  DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT + MOD_SHIFT_LEFT); //klik ctrl+shift+enter
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN); //klik panah atas
  DigiKeyboard.sendKeyStroke(KEY_ARROW_UP); //klik panah bawah
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER); // klik enter
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("net session"); // cek run admin or not
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER); // klik enter
  DigiKeyboard.delay(1000);
  
//  DigiKeyboard.print("https://kangwriteup.me");
//  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  for(;;);
}
