#include <Arduino.h>
//Declaring all variables as integers
int A,B,C,D;
int a,b,c,d,e,f,g;

//Code released under GNU GPL.  Free to use for anything.
void disp_7447(int a, int b, int c, int d, int e,int f,int g)
{
 /*digitalWrite(3, a); //MSB
  digitalWrite(4, b); 
  digitalWrite(5, c); 
  digitalWrite(6, d);
  digitalWrite(7, e); 
  digitalWrite(8, f); 
  digitalWrite(9, g); //LSB */
 
}
// the setup function runs once when you press reset or power the board
void setup() {
    pinMode(3, OUTPUT);  
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);  
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(10, INPUT);
    pinMode(11, INPUT);
    pinMode(12, INPUT);
    pinMode(13, INPUT);
    
}

// the loop function runs over and over again forever
void loop() 
{
  
A = digitalRead(10);//LSB  
B = digitalRead(11);  
C = digitalRead(12);  
D = digitalRead(13);//MSB*/

a= (A&&!B&&!C&&!D)||(!A&&!B&&C&&!D);
b= (A&&!B&&C&&!D)||(A&&B&&C&&!D);
c=(!A&&B&&!C&&!D);
d=(A&&!B&&!C&&!D)||(!A&&!B&&C&&!D)||(A&&B&&C&&!D);
e=(A&&!B&&!C&&!D)||(A&&B&&!C&&!D)||(!A&&!B&&C&&!D)||(A&&!B&&C&&!D)||(A&&B&&C&&!D)||(A&&!B&&!C&&D);
f= (A&&!B&&!C&&!D)||(!A&&B&&!C&&!D)||(A&&B&&!C&&!D) ||(A&&B&&C&&!D);
g=(!A&&!B&&C&&!D)||(!A&&!B&&C&&D) ||(!A&&B&&!C&&!D)||(!A&&B&&!C&&!D)||(!A&&B&&C&&!D);
 digitalWrite(3, a); //MSB
  digitalWrite(4, b); 
  digitalWrite(5, c); 
  digitalWrite(6, d);
  digitalWrite(7, e); 
  digitalWrite(8, f); 
  digitalWrite(9, g); //LSB*/
  
/*disp_7447(a,b,c,d,e,f,g);*/
}
