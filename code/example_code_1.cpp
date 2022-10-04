void setup()
{
	Serial.begin(9600);
	Serial.println("Serial start");
}

void loop()
{
	//A0핀을 사용. 시리얼 모니터에 값 출력
	Serial.println(analogRead(A0));
	delay(500);
}
