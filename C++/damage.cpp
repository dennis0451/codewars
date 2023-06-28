// Create a combat function that takes the player's current health and the amount
// of damage recieved, and returns the player's new health.
// Health can't be less than 0.
#include <iostream>
using namespace std;

int combat(int health, int damage){

  int finalHealth = health - damage;

  return (finalHealth < 0) ? 0 : finalHealth;
}

int main(){

    cout << combat(100,5) << endl;
    cout << combat(83,16) << endl;
    cout << combat(20,30) << endl;

    return 0;
}