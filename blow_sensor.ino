int val;
int threshold = 300;
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
        if(val > threshold) {
          Keyboard.write(KEY_RETURN);
          delay(1000);
        }
}
