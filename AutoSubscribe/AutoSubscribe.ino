#include "DigiKeyboard.h"

//This is only for German Keyboards. Search for your Keyboard Language online and drag the .h script in here. Then you type: #include "YOURSCRIPTNAME"
#include "DigiKeyboardDe.h"
#define KEY_Tab     43

void setup() {
      delay(100);

      DigiKeyboardDe.sendKeyStroke(KEY_R, MOD_GUI_LEFT);

      delay(200);

      DigiKeyboardDe.print("cmd");

      DigiKeyboardDe.sendKeyStroke(KEY_ENTER);

      delay(500);
      
      //Paste your YouTube Link where it says "YOURYOUTUBELINK". Example: YouTube.com/Nikicpk?sub_confirmation=1
      DigiKeyboardDe.print("start chrome.exe YOURYOUTUBELINK?sub_confirmation=1");

      DigiKeyboardDe.sendKeyStroke(KEY_ENTER);

      delay(2500);

      DigiKeyboardDe.sendKeyStroke(KEY_Tab);
      DigiKeyboardDe.sendKeyStroke(KEY_Tab);
      DigiKeyboardDe.sendKeyStroke(KEY_ENTER);

      delay(2000);

      DigiKeyboardDe.sendKeyStroke(KEY_W ,MOD_CONTROL_LEFT);
      
      delay(250);

      DigiKeyboardDe.print("exit");

      DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
}


void loop() {
  
}
