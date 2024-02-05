#include <iostream>
#include <string>
using std :: cout;
using std :: endl;

int main(){
    int n=0;
enum Seasons{hot_season,rainy_season,cold_season};
n=Seasons{};
cout << "Choose your seasons: (pls enter numbers!)  "<< endl;
  cout << "1->Hot_season "<< endl;
  cout << "2->Rainy_season "<<endl;
  cout << "3->Cold_season "<< endl;
  std :: cin >> n;
  switch (n){
    case 1:
    cout << "Hot_season is mid-February to mid-May.";
    break;
    case 2:
    cout << "Rainy_season is mid-May to late-October.";
    break;
    case 3:
    cout << "Cold_season is late-October to mid-February.";
    break;
  }
    return 0;
}