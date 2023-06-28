// Given a point in a Euclidean plane (x and y), 
// return the quadrant the point exists in: 1, 2, 3 or 4 (integer). 
// x and y are non-zero integers, therefore the given point never lies on the axes.
#include <iostream>
using namespace std;
int quadrant(int x, int y) {
  if(x > 0 && y > 0){ 
    return 1;
    }
  if(x < 0 && y > 0){ 
    return 2;
    }
  if(x < 0 && y < 0){ 
    return 3;
    }
  if(x > 0 && y < 0){ 
    return 4;
    }
    return 0;
}

int main(){
    
    cout << (quadrant(1, 2)) << endl;
    cout << (quadrant(3, 5)) << endl;
    cout << (quadrant(-10, 100)) << endl;
    cout << (quadrant(-1, -9)) << endl;
    cout << (quadrant(19, 56)) << endl;

    return 0;
}