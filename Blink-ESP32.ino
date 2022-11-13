int led = 2;//Initialize the led at GPIO 2

void setup () {//Start the setup function
pinMode(led,OUTPUT);//Set the pinmode of GPIO 2 to output
}Stop the setup function

void loop () {//Start the loop
digitalWrite(led,HIGH);//Turn on the led at GPIO 2
delay(1000);//Pause the code for 1 second (in milliseconds)
digitalWrite(led,LOW);//Turn off the led at GPIO 2
delay(1000);//Pause the code for 1 second (in milliseconds)
}//End the loop
