void setup()
{
	Serial.begin(9600);
	Serial.println("Serial start");
}

void loop()
{
	//A0���� ���. �ø��� ����Ϳ� �� ���
	Serial.println(analogRead(A0));
	delay(500);
}
