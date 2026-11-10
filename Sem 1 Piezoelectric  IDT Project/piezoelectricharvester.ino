void setup() {
  // This turns on the communication to your laptop screen
  Serial.begin(9600);
}

void loop() {
  // Read the raw pressure from the piezo (A number from 0 to 1023)
  int rawValue = analogRead(A0);
  
  // Math to convert that raw number into actual Volts (0V to 5V)
  float voltage = rawValue * (5.0 / 1023.0);
  
  // Send the voltage number to your laptop
  Serial.println(voltage);
  
  // A tiny 10-millisecond pause so we don't crash the computer with too much data
  delay(10); 
}