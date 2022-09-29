
int ledPinB = 9;
int ledPinG = 10;
int ledPinR = 11;
int a;
void setup() {
  // put your setup code here, to run once:
pinMode(ledPinB,OUTPUT);
pinMode(ledPinG,OUTPUT);
pinMode(ledPinR,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for (a=0;a<=255;a++){//循环语句，控制PWM亮度的增加
  analogWrite(ledPinB,a);
  delay(10);//当前亮度级别维持的时间，单位毫秒
  }
  delay(300);//完成一个循环后等待的时间，单位毫秒
for (a=0;a<=255;a++){//循环语句，控制PWM亮度的增加
  analogWrite(ledPinG,a);
  delay(10);//当前亮度级别维持的时间，单位毫秒
  }
  delay(300);//完成一个循环后等待的时间，单位毫秒
for (a=0;a<=255;a++){//循环语句，控制PWM亮度的增加
  analogWrite(ledPinR,a);
  delay(10);//当前亮度级别维持的时间，单位毫秒
  }
  delay(300);//完成一个循环后等待的时间，单位毫秒
}
