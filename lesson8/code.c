/*
  Ping))) Sensor

  This sketch reads a PING))) ultrasonic
  rangefinder and returns the distance to the
  closest object in range. To do this, it sends a
  pulse to the sensor to initiate a reading, then
  listens for a pulse to return.  The length of
  the returning pulse is proportional to the
  distance of the object from the sensor.

  The circuit:
   * +V connection of the PING))) attached to +5V
   * GND connection attached to ground
   * SIG connection attached to digital pin 7

  http://www.arduino.cc/en/Tutorial/Ping

  This example code is in the public domain.
*/

int inches = 0;//定义一个变量“inches”并初始化

int cm = 0;//定义一个变量“cm”并初始化

long readUltrasonicDistance(int triggerPin, int echoPin)//构建一个函数，该函数需要输入整形triggerPin与整形echoPin，返回值的类型为长整形
{
  pinMode(triggerPin, OUTPUT);  // 将triggerPin设为输出
  digitalWrite(triggerPin, LOW);//设置triggerPin为低电平
  delayMicroseconds(2);//延时2微秒
  digitalWrite(triggerPin, HIGH);//设置triggerPin为高电平
  delayMicroseconds(10);//延时10微秒
  digitalWrite(triggerPin, LOW);//设置triggerPin为高电平
  pinMode(echoPin, INPUT);//将echoPin设为输入
  return pulseIn(echoPin, HIGH);//返回值。读取回声引脚，返回回声传播时间
}

void setup()
{
  Serial.begin(9600);//初始化

}

void loop()
{
  cm = 0.01723 * readUltrasonicDistance(7, 7);//将0.01723*声波传输时间赋予cm
  inches = (cm / 2.54);//将cm除以2.54并赋值给inches
  Serial.print(inches);//在串口输出inches的值
  Serial.print("in, ");//在串口输出“in，”
  Serial.print(cm);//在串口输出cm的值
  Serial.println("cm");//在串口输出“cm”并换行
  delay(100); // 延时100毫秒
}