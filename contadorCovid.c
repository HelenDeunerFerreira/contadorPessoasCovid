const int verde = 13; 
const int amarelo = 12; 
const int laranja = 8; 
const int vermelho = 7; 
const int botaoAcrescenta = 4; 
const int botaoDecrescenta = 2; 
int pessoas = 0;

void setup(){
  pinMode(verde, OUTPUT); 
  pinMode(amarelo, OUTPUT); 
  pinMode(laranja, OUTPUT); 
  pinMode(vermelho, OUTPUT);
 
  pinMode(botaoAcrescenta, INPUT); 
  pinMode(botaoDecrescenta, INPUT); 
 
  Serial.begin(9600);
}

void loop(){
   Serial.println(pessoas);
   
   if(digitalRead(botaoAcrescenta) == HIGH){
  		pessoas++;
        delay(100);
	} 
   if(digitalRead(botaoDecrescenta) == HIGH){
  		pessoas--;
     	delay(100);
    }
   if(pessoas >= 0 && pessoas <= 20){
      digitalWrite(verde, HIGH);
      digitalWrite(amarelo, LOW);
      digitalWrite(laranja, LOW);
      digitalWrite(vermelho, LOW);
    }
   	  else if(pessoas > 20 && pessoas < 31){
      digitalWrite(verde, LOW);
      digitalWrite(amarelo, HIGH);
      digitalWrite(laranja, LOW);
      digitalWrite(vermelho, LOW);
    } else if(pessoas > 30 && pessoas < 48){
      digitalWrite(verde, LOW);
      digitalWrite(amarelo, LOW);
      digitalWrite(laranja, HIGH);
      digitalWrite(vermelho, LOW);
    } else if(pessoas >= 48){
      digitalWrite(verde, LOW);
      digitalWrite(amarelo, LOW);
      digitalWrite(laranja, LOW);
      digitalWrite(vermelho, HIGH);
    } 
}