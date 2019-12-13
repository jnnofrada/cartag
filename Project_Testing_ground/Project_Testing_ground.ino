// Rotation speed (35-255)
// * The higher the value, the higher the speed, and the smaller value will not rotate.
//const uint8_t speeds = 100 ;  
 
void setup () { 
  Serial.begin ( 9600 );
  DDRC = (1 << PORTC0);
  TCCR0A = (1 << COM0A0) | (1 << WGM01) | (1 << WGM00)

  //stop
  TCCR0B = (0 << CS02) | (0 << CS01) | (0 << CS00)
  
}
 
void loop () { 
  // forward rotation
  delay(2000);
  Serial.println ( "forward" );
  /*
  for (int i = 255; i != 100 ; i--){
    analogWrite ( A1 , 0 );
    analogWrite ( A0 , i );
    delay ( 1000 );
  }
  */
  analogWrite(A1, 255);
  analogWrite(A0, 130);
  analogWrite(A3, 255);
  analogWrite(A2, 255);
  delay(2000);
  analogWrite(A1, 0);
  analogWrite(A0, 130);
  analogWrite(A3, 0);
  analogWrite(A2, 255);
  delay(2000);
  analogWrite(A1, 0);
  analogWrite(A0, 130);
  analogWrite(A3, 0);
  analogWrite(A2, 255);
  delay(2000);
  analogWrite(A1, 255);
  analogWrite(A0, 255);
  analogWrite(A3, 255);
  analogWrite(A2, 130);
  delay(2000);
  analogWrite(A1, 0);
  analogWrite(A0, 130);
  analogWrite(A3, 0);
  analogWrite(A2, 255);
  delay(2000);
  analogWrite(A1, 0);
  analogWrite(A0, 130);
  analogWrite(A3, 0);
  analogWrite(A2, 255);
  /*
  // reverse (reverse)
  Serial.println ( "reverse" );
  analogWrite ( A0 , 1 );
  analogWrite ( A1 , speeds );
  delay ( 1000 );
  
  // brake
  Serial.println ( "brake" );
  analogWrite ( A0 , 0 );
  analogWrite ( A1 , 0 );
  delay ( 1000 );
  */
}

void stop(){
    TCCR0B = (0 << CS02) | (0 << CS01) | (0 << CS00)
}

void 
