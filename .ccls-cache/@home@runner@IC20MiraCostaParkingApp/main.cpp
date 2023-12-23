#include <iostream>
#include <vector> 
#include <iomanip>

using namespace std;

//enum = enumeration: predefined list of values (consts)
// data type that has a finite number of values
enum Make {

Abarth, AC, Aixam, AlfaRomeo, Asia, AstonMartin, Audi, Austin, Bedford, Bentley, Bristol, BMW, Cadillac, Caterham, Cheverolet, Chrysler, Citroen, ColemanMilne, Corvette, Dacia, Daewoo, Daihatsu, Daimler, DeTomaso, Dodge, DS, Ferrari, Fiat, Ford, GMC, Honda, Hummer, Hyundai, Infiniti, Isuzu, Jaguar, Jeep, Kia, Lamborghini, Lancia, LandRover, Lexus, Lincoln, Lotus, Lucid, Maserati, Mazda, Mercedes, Mercury, MINI, Mitubishi, Nissan, Oldsmobile, Opel, Peugeot, Plymouth, Pontiac, Porsche, Renault, RollsRoyce, Rivian, Rover, Saab, Saturn, Scion, Shelby, Smart, Subaru, Suzuki, Triumph, TVR, Volkswagen, Volvo, Toyota

};

const string NAMES[] = {"Abarth", "AC", "Aixam", "Alfa Romeo", "Asia", "Aston Martin", "Audi", "Austin", "Bedford", "Bentley", "Bristol", "BMW", "Cadillac", "Caterham", "Cheverolet", "Chrysler", "Citroen", "Coleman Milne", "Corvette", "Dacia", "Daewoo", "Daihatsu", "Daimler", "De Tomaso", "Dodge", "DS", "Ferrari", "Fiat", "Ford", "GMC", "Honda", "Hummer", "Hyundai", "Infiniti", "Isuzu", "Jaguar", "Jeep", "Kia", "Lamborghini", "Lancia", "Land Rover", "Lexus", "Lincoln", "Lotus", "Lucid", "Maserati", "Mazda", "Mercedes", "Mercury", "MINI", "Mitubishi", "Nissan", "Oldsmobile", "Opel", "Peugeot", "Plymouth", "Pontiac", "Porsche", "Renault", "Rolls Royce", "Rivian", "Rover", "Saab", "Saturn", "Scion", "Shelby", "Smart", "Subaru", "Suzuki", "Triumph", "TVR", "Volkswagen", "Volvo", "Toyota"};

struct Vehicle {

int passNum;
Make make;
int year;

};

const int NUM_SPACES = 720;

int main() {
  int space = 1;
  vector<Vehicle> mordorLot;
  mordorLot.reserve(NUM_SPACES);

  //Loop through 720 spaces
  //push back a random vehicle


  //rand() function in C++
  //gives a random number from 0 to INT_MAX
  

  for(int i = 0; i < NUM_SPACES; i++){

    Vehicle v;
    // rand % 9000 (0 to 8999)
    //+ 1000 (base number)
    //(1000, 9999)
    v.passNum = rand() % 9000 + 1000;
    //year between 1885 and 2024 (1885 is number)
    v.year = rand() % (2024-1885 + 1) + 1885;

    v.make = static_cast<Make> (rand() % (Toyota - Abarth + 1) + Abarth);

    // rand() % (difference of values + 1) + baseNumber

    mordorLot.push_back(v);
  }

  cout << "******************************************************" << endl
       << "                  MIRACOSTA COLLEGE" << endl
       << "                OC-5A PARKING LOT APP" << endl
       << "******************************************************" << endl
  << left << setw(15) << "SPACE #" << left << setw(15) << "PASS #" << left << setw(15) << "MAKE" << left << setw(15) << "YEAR" << endl
       << "******************************************************" << endl;
      for (Vehicle v : mordorLot){
      cout << left << setw(15) << space++ << left << setw(15) << v.passNum << left << setw(15) << NAMES[v.make] << left << setw(15) << v.year << endl;
        
      }
  
}