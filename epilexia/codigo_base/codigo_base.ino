
  int layer[4]={A3,A2,A1,A0}; //Inicializamos y declaramos las filas de las leds
  int column[16]={13,12,11,10,9,8,7,6,5,4,3,2,1,0,A5,A4}; //Inicializamos y declaramos las columnas de las leds
  int time = 250;

  
 
void setup()
{
  
  for(int i = 0; i<16; i++)   
  {
    pinMode(column[i], OUTPUT);  //configurando las filas para su salida
  }
  
  for(int i = 0; i<4; i++)
  {
    pinMode(layer[i], OUTPUT);  //configurando las columnas para su salida
  }
  
  randomSeed(analogRead(10));  //creando semilla para crear un patron aleatorio
}

void loop()
{
  turnEverythingOff();
  flickerOn();
  turnEverythingOn();
  delay(time);
  turnOnAndOffAllByLayerUpAndDownNotTimed();
  layerstompUpAndDown();
  spiralInAndOut();
  turnOnAndOffAllByColumnSideways();
  delay(time);
  aroundEdgeDown();
  turnEverythingOff();
  randomflicker();
  randomRain();
  diagonalRectangle();
  goThroughAllLedsOneAtATime();
  propeller();
  spiralInAndOut();
  flickerOff();
  turnEverythingOff();
  delay(2000);
}


//turn all off
void turnEverythingOff()
 {
   for(int i = 0; i<16; i++)
   {
     digitalWrite(column[i], 1);
   }
   for(int i = 0; i<4; i++)
   {
     digitalWrite(layer[i], 0);
   }
 }
 
//turn all on
void turnEverythingOn()
{
  for(int i = 0; i<16; i++)
  {
    digitalWrite(column[i], 0);
  }
  //turning on layers
  for(int i = 0; i<4; i++)
  {
    digitalWrite(layer[i], 1);
  }
}
