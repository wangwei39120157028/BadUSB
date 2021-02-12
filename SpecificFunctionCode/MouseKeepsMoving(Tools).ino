void setup() {
Mouse.begin();
}
void loop() {
Mouse.move(10,0);
delay(800);
Mouse.move(-10,0);
delay(800);
}
