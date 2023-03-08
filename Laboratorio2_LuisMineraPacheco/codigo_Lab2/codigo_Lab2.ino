//int i = 0;
int wait = 500;
int entradaSerial ="";
bool entradaCompleta =false;
int mensaje;
int boton=13;
int botonState=0;
int numero1;
int numero2 =2;
byte varNumero=0;






void setup() {
  Serial.begin(9600);
  pinMode(5, OUTPUT);  //seg a
  pinMode(6, OUTPUT);  //seg b
  pinMode(7, OUTPUT);  //seg c
  pinMode(8, OUTPUT);  //seg d
  pinMode(9, OUTPUT);  //seg e
  pinMode(10, OUTPUT);  //seg f
  pinMode(11, OUTPUT);  //seg g
  pinMode(12, OUTPUT);  // activa digito 1 derecha (unidad) pinMode(12, OUTPUT);  // activa digito 1 derecha (unidad)
  display(1,1,1,1,1,1,1,1);
  pinMode(13, INPUT);  // activa digito 1 derecha (unidad)
}
void display (int a, int b,int c,int d,int e,int f,int g, int h)
{
      digitalWrite(5, h);
      digitalWrite(6, g);
      digitalWrite(7, f);
      digitalWrite(8, e);
      digitalWrite(9, d);
      digitalWrite(10, c);
      digitalWrite(11, b);
      digitalWrite(12, a); 
     
      
      
}
int mostrar(int a){
  Serial.print("se ingreso: "+a);
  Serial.write(a);
  Serial.println();
  a=0;
  a=Serial.read();
  //a,g,f,e,c,x,b,d
  //g,f,e,d,x,x,a,c  display(0,0,0,0,1,0,1,1);FORMAR  "F"
}

void loop() {

 if(digitalRead(13)){
    display(0,0,0 ,0,0,0,0,0);
   delay(1000);
   
 }
  if(Serial.available()>0)
    {
      if(mensaje==1){
        display(1,1,1,1,0,1,0,1);    
      }
        else (mensaje==2);
    {
       display(1,0,0,1,0,1,0,1); 
    
    }  
    }
  
      
}

//}
//   if (entradaCompleta){
//    if(entradaSerial =="15"){
//      Serial.print("Hola mundo");
//      digitalWrite(5, 1);
//      digitalWrite(6, 0);
//      digitalWrite(7, 0);
//      digitalWrite(8, 1);
//      digitalWrite(9, 0);
//      digitalWrite(10, 0);
//      digitalWrite(11, 1);
//      digitalWrite(12, 10);
//      
//      
//    }
//  }
