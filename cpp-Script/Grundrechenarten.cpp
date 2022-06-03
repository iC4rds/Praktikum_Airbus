#include <iostream>

using namespace std;

float addition(){
  int a = 3;   //int geht hier am besten
  int b = 2;
  return a + b; 
};

float subtraktion(){
  int a = 3;
  int b = 4;
  return a - b;
};

float multiplikation(){
  int a = 3;
  int b = 4;
  return a * b;
};

float division(){
  float a = 5;  //hier funktioniert int nicht mehr, da 2,5 herauskommen muss
  float b = 2;
  return  a / b;
};

float modulo(){  
  int a = 5;  //hier muss es komischer Weise int sein
  int b = 2;
  return a % b; 
};

float keineahnung(){
  float a = 5.;
  float b = 2.;
  return a / b; 
}

int main (){
  float result = keineahnung();

  std::cout << result << std::endl;
};
