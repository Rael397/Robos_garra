#include <Servo.h>
Servo servo_garra;
Servo servo_base;
Servo servo_esquerda;
Servo servo_direita;
Servo servo_garra_2;
Servo servo_base_2;
Servo servo_esquerda_2;
Servo servo_direita_2;
void setup() {
  servo_garra.attach(2);
  servo_base.attach(3);
  servo_esquerda.attach(4);
  servo_direita.attach(5);
  servo_garra_2.attach(6);
  servo_base_2.attach(7);
  servo_esquerda_2.attach(8);
  servo_direita_2.attach(9);
}
void loop() {
  for (int pos = 0; pos <= 180; pos += 1) {
    servo_garra.write(pos);
    delay(15);
  }
  for (int pos = 0; pos <= 180; pos += 1) {
    servo_esquerda.write(pos);
    servo_direita.write(pos);
    delay(15);
  }
  for (int pos = 180; pos >= 0; pos -= 1) {
    servo_esquerda.write(pos);
    servo_direita.write(pos);
    delay(15);
  }
  for (int pos = 180; pos >= 0; pos -= 1) {
    servo_garra.write(pos);
    delay(15);
  }
  for (int pos = 0; pos <= 180; pos += 1) {
    servo_base.write(pos);
    delay(15);
  }
    for (int pos = 0; pos <= 180; pos += 1) {
    servo_garra_2.write(pos);
    delay(15);
  }
  for (int pos = 0; pos <= 180; pos += 1) {
    servo_esquerda_2.write(pos);
    servo_direita_2.write(pos);
    delay(15);
  }
  for (int pos = 180; pos >= 0; pos -= 1) {
    servo_esquerda_2.write(pos);
    servo_direita_2.write(pos);
    delay(15);
  }
  for (int pos = 180; pos >= 0; pos -= 1) {
    servo_garra_2.write(pos);
    delay(15);
  }
  for (int pos = 0; pos <= 180; pos += 1) {
    servo_base_2.write(pos);
    delay(15);
  }
  
}
