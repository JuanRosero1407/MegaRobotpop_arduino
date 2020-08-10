/*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%  MEGAROBOT POPAYÁN  %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
 * 
 * Encuentranos en facebook como MegaRobot Popayan, y en Instagram como @megarobotpop
 * Visita nuestra página web: www.megarobotpop.com ; www.megarobotpop.com/productos/display-lcd-16x2-backlight-azul/
 * Para más ejemplos de la librería LiquidCrystal visita la página https://www.arduino.cc/en/Reference/LiquidCrystal
 * 
 * Agosto de 2020
 */

#include <LiquidCrystal.h>                         // Incluimos la libreria LiquidCrystal.h 
LiquidCrystal lcd(A0, A1, A2, A3, A4, A5);         // Creamos el objeto LCD; declaramos los pines a los que vamos a conectar 
                                                   // el display en el siguiente orden: (RS, E, D4, D5, D6, D7)

void setup() {
  pinMode(A0, OUTPUT);                            // definimos los pines analogicos como salidas digitales
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(A4, OUTPUT);
  pinMode(A5, OUTPUT);
  lcd.begin(16, 2);                               // Inicializa la interfaz y especifica las dimensiones (#columnas, #filas) de la pantalla LDC que voy a usar
  lcd.setCursor(0,0);                             // movemos el cursor a la primera fila (0) PRIMERA COLUMNA (0)
  lcd.print("   HOLA MUNDO  ");                   // imprimimos un mensaje en la posicion antes configurada
  lcd.setCursor (0,1);                            // movemos el cursor a la segunda fila (1) PRIMERA COLUMNA (0)
  lcd.print("  MEGAROBOTPOP ");                   // imprimimos otro mensaje en la posicion antes configurada
  delay(10000);                       
}
  
void loop(){
  lcd.setCursor(0,0);           // movemos el cursor a la primera fila (0) PRIMERA COLUMNA (0)
  lcd.print("PRIMERA FILA");
  delay(800); 
  lcd.setCursor(0,1);
  lcd.print("SEGUNDA FILA");    // movemos el cursor a la segunda fila (1) PRIMERA COLUMNA (0)
  delay(800);
  lcd.clear();                  // limpiamos la pantalla
  delay(800);
}
