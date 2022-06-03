#include <iostream>
#include <fstream>

using namespace std;

const double PI = 3.1415926535;

int main(){
  
  /*std::cout << "'double' hat die Größe " 
    << sizeof(double) 
    << " Bytes"            
    << std::endl; 

  std::cout << "Pi = " << PI << std::endl;*/

  /*std::cout << "Seitenlaenge in m: ";
  double sideLength = 0.0;
  std::cin >> sideLength;
  double area = sideLength * sideLength;
  std::cout << std::endl << "Der Flaecheninhalt betraegt " << area << " quadratmeter." << std::endl;*/

  /*ofstream onlyWrite("test.txt");
  if(!onlyWrite.is_open()) { 
     cerr << "test.txt konnte nicht geöffnet werden!" << endl;
  } else {
     onlyWrite << "Hello World" << endl; 
     onlyWrite.close();
  }*/

  int number = 64;
  int result = number >= 0 ? number / 8 : 0;  //herausfinden wie der sqrt command geht
  cout << result << endl;

  return 0;
}

enum class Wochentag {      
  Montag = 7,    // Standardwert für das erste Element ist 0,       
  Dienstag,      // dies kann mit = Wert überschrieben werden.      
  Mittwoch,      // Alle folge Werte werden mit +1 hinterlegt.       
  Donnerstag,    // Dienstag = 8, Mittwoch = 9, Donnerstag = 10 ...      
  Freitag,      
  Samstag,      
  Sonntag  
}; 