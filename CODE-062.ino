//Khai báo chân tín hiệu motor A
int enA = 8;
int in1 = 7;
int in2 = 6;

//Khai báo chân tín hiệu cho motor B
int in3 = 5;
int in4 = 4;
int enB = 3;

int i;

void setup()
{
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
}

void chaymotor()
{
  for (i = 0; i <= 255; i++) {

    digitalWrite(in3, HIGH);
    digitalWrite(in1, HIGH);
    digitalWrite(in4, LOW);
    digitalWrite(in2, LOW);
    analogWrite(enB, i);
    analogWrite(enA, i);
    delay(100);

  }// Tăng tốc động cơ từ Min >> Max
  for (i = 255; i >= 0; i--) {
    digitalWrite(in3, HIGH);
    digitalWrite(in1, HIGH);
    digitalWrite(in4, LOW);
    digitalWrite(in2, LOW);
    analogWrite(enB, i);
    analogWrite(enA, i);
    delay(100);

  }// Giảm tốc từ Max >> Min

}

void loop()
{
  chaymotor();
  delay(1000);
}
