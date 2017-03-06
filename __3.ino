// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led[8] = {2,3,4,5,6,7,8,9};
int i,num;
// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  for (i=0;i<8;i++)
  {
    pinMode(led[i], OUTPUT);
  }
  pinMode(13,INPUT);
    Serial.begin(9600);
    for (i=0;i<8;i++)
  {
    digitalWrite(led[i], LOW);
  }
}

// the loop routine runs over and over again forever:
void loop() {
  
 

  if(digitalRead(13)==0)
  {
  for (num=0;num<2;num++){				//全亮滅2次
  	for (i=7;i>=0;i--){
    	digitalWrite(led[i], HIGH);   // turn the LED on (HIGH is the voltage level
  	}
    delay(1000);
  	for (i=7;i>=0;i--){
	    digitalWrite(led[i], LOW);   // turn the LED on (HIGH is the voltage level
  	}
    delay(1000);
  }
for (num=0;num<1;num++){			//左移1次
  	for (i=7;i>=0;i--){
	    digitalWrite(led[i], HIGH);   // turn the LED on (HIGH is the voltage level)
	  	delay(100);               // wait for a second
	  	digitalWrite(led[i], LOW);    // turn the LED off by making the voltage LOW
	  	delay(100);               // wait for a second
  	}
  }
  for (num=0;num<2;num++){			//亮滅2次
  	for (i=7;i>=0;i--){
    	digitalWrite(led[i], HIGH);   // turn the LED on (HIGH is the voltage level
  	}
    delay(1000);
  	for (i=7;i>=0;i--){
	    digitalWrite(led[i], LOW);   // turn the LED on (HIGH is the voltage level
  	}
    delay(1000);
  }
  for (num=0;num<1;num++){			//右移1次
	  for (i=0;i<8;i++){
	    digitalWrite(led[i], HIGH);   // turn the LED on (HIGH is the voltage level)
	  	delay(100);               // wait for a second
	  	digitalWrite(led[i], LOW);    // turn the LED off by making the voltage LOW
	  	delay(100);               // wait for a second
  	}
  }
   
  	
 
  	for (i=0;i<=7;i++){
          if(digitalRead(13)==1)
    {
      break;
    }
    else
   {
	    digitalWrite(led[i], HIGH);   // turn the LED on (HIGH is the voltage level)
	  	delay(100);               // wait for a second
	  	digitalWrite(led[i], LOW);    // turn the LED off by making the voltage LOW
	  	delay(100);   
    // wait for a second
  	}
    }
 /* for (num=0;num<2;num++){			//亮滅2次
  	for (i=7;i>=0;i--){
    	digitalWrite(led[i], HIGH);   // turn the LED on (HIGH is the voltage level
  	}
    delay(1000);
  	for (i=7;i>=0;i--){
	    digitalWrite(led[i], LOW);   // turn the LED on (HIGH is the voltage level
  	}
    delay(1000);
  }*/
 		
	  for (i=7;i>=0;i--){
            if(digitalRead(13)==1)
    {
      break;
    }
    else
   {
	    digitalWrite(led[i], HIGH);   // turn the LED on (HIGH is the voltage level)
	  	delay(100);               // wait for a second
	  	digitalWrite(led[i], LOW);    // turn the LED off by making the voltage LOW
	  	delay(100);               // wait for a second
  	}
      }

  }
  else
  {
    for (num=0;num<1;num++){			//左移1次
  	for (i=7;i>=0;i--){
	    digitalWrite(led[i], HIGH);   // turn the LED on (HIGH is the voltage level)
	  	delay(100);               // wait for a second
	  	digitalWrite(led[i], LOW);    // turn the LED off by making the voltage LOW
      delay(100);   }            // wait for a second
  	}
  for (num=0;num<1;num++){			//右移1次
	  for (i=0;i<8;i++){
	    digitalWrite(led[i], HIGH);   // turn the LED on (HIGH is the voltage level)
	  	delay(100);               // wait for a second
	  	digitalWrite(led[i], LOW);    // turn the LED off by making the voltage LOW
	  	delay(100);               // wait for a second
  	}
  }
  }
}
