#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std ;


int main() {

cout<<endl ;

srand(time(0));

string name ,pname ;

cout << "LOVE CALCULATOR "<<endl;
cout<<endl;

cout<<"Enter your name : " <<endl;;
getline(cin,name);

cout << "Enter your partner name : "<<endl;
getline(cin,pname);

cout << endl;

if ( rand()%100 + 1  >= 1 && rand()%100 + 1  <= 10 ){
  cout <<"Only 10% Sorry! but you guys hate each other " ;
} 
else if ( rand()%100 + 1  >= 11 && rand()%100 + 1  <= 20 ){
  cout << "Only 20% Sorry! but you guys dont like each other " ;
}
else if ( rand()%100 + 1  >= 21 && rand()%100 + 1  <= 30 ){
  cout <<"30% You Guys pretend to like each other " ;
}
else if ( rand()%100 + 1  >= 31 && rand()%100 + 1  <= 40 ){
  cout << "40% You guys need to work on your releationship " ;
}
else if ( rand()%100 + 1  >= 41 && rand()%100 + 1  <= 50 ){
  cout << "50% You guys like each other vibes but not that much ";
}
else if ( rand()%100 + 1  >= 51 && rand()%100 + 1  <= 60 ){
  cout <<"60% You guys are good friends" ;
}
else if ( rand()%100 + 1  >= 61 && rand()%100 + 1  <= 70 ){
  cout << "70% You guys love to spend time with each other " ;
}
else if ( rand()%100 + 1  >= 71 && rand()%100 + 1  <= 80 ){
  cout <<"80% You guys are best friends ";
}
else if ( rand()%100 + 1  >= 81 && rand()%100 + 1  <= 90 ){
  cout <<"90% You guys are near to perfect " ;
}
else if ( rand()%100 + 1  >= 91 && rand()%100 + 1  <= 100 ){
  cout << "100% yayy!!! You guys really love each other " ;
}
}
