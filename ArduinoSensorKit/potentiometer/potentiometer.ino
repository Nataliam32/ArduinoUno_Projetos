int potentiometer = A0; //Assign to pin A0
 
void setup()
{
    Serial.begin(9600); //Begin serial communication
    pinMode(potentiometer, INPUT); //Sets the pinmode to input
}
 
void loop()
{   
    int sensor_value = analogRead(potentiometer); //Read the value from the potentiometer connected to the A0 pin
    int value = map(sensor_value, 0, 1023, 0, 100); //Map the value from 0, 1023 to 0, 100
    Serial.print("Potentiometer value: ");
    Serial.println(value); //Print the value in the serial monitor
    delay(500); //Add a delay to see the value every 1/2 second
}