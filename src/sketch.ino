/*

	Jarvis 0.1
	Bjorn W Naucler
	mail@bnaucler.se

	http://etsy.com/shop/Tinkerlight
	http://bnaucler.se

	Absolutely no rights reserved.
	Feel free to branch and modify the code to your likinga.

*/

const int			numLeds = 7;
const int			ledPin[numLeds] = {2, 3, 4, 5, 6, 7, 8};
const int			interval = 1000;

bool				ledStatus[numLeds];

unsigned long		timer;

void setup()
{
	randomSeed(analogRead(A4));
	for(int a = 0; a < numLeds; a++) { pinMode(ledPin[a], OUTPUT); }
}

void loop()
{
	if(millis() > timer + interval) {

		int currentLed = random(numLeds);
		ledStatus[currentLed] = !ledStatus[currentLed];

		for(int a = 0; a < numLeds; a++) { digitalWrite(ledPin[a], ledStatus[a]); }

		timer = millis();
	
	}
}
