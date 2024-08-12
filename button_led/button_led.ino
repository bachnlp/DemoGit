const int btn_1 = 1;
const int btn_2 = 2;
const int led_1 = 5;
const int led_2 = 6;
const int led_3 = 7;
const int led_4 = 8;
int btn_status_1 = 0;
int btn_status_2 = 0;
void setup() {
  pinMode(btn_1, INPUT_PULLUP);
  pinMode(btn_2, INPUT_PULLUP);
  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);
  pinMode(led_3, OUTPUT);
  pinMode(led_4, OUTPUT);
}
void loop() {
  btn_status_1 = digitalRead(btn_1);
  btn_status_2 = digitalRead(btn_2);
  if(btn_status_1 == HIGH) {
    digitalWrite(led_1, HIGH);
    digitalWrite(led_3, HIGH);
  }else {
    digitalWrite(led_1, LOW);
    digitalWrite(led_3, LOW);
  }
  if(btn_status_2 == HIGH) {
    digitalWrite(led_2, HIGH);
    digitalWrite(led_4, HIGH);    
  }else {
    digitalWrite(led_2, LOW);
    digitalWrite(led_4, LOW);    
  }
}