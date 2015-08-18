int val;
void setup()
{
        Keyboard.begin();
}

void loop()
{
	analogRead(0);
	delay(10);
	val = analogRead(0);
	delay(10);
        if(val > 300) {
          Keyboard.write(KEY_RETURN);
          delay(1000);
        }
}
