#include <iostream>
#include <stdlib.h>
#include <assert.h>
#include <ctime>

using namespace std;

class game {
  private:
    bool aaron;
    bool bob;
    boolean charlie;

  public:

    bool noChampion(bool aAlive, bool bAlive, bool cAlive) {
      int num_living = 0;
      
      if (aAlive) num_living++;
      if (bAlive) num_living++;
      if (cAlive) num_living++;

      if (num_living >= 2) return true;
      return false;
    }

    void aaron_shoots(bool& bAlive, bool& cAlive) {
      // random 0-2; 2 is a shot connected
      if (bAlive && cAlive) {
        // 0 if aims for b, 1 if aims for c
        // if shot is connected, change the person you shot at to false
      }
      else if (bAlive) {
        // shoots at b, if shot is connected, change b to false
      }
      else if (cAlive) {
        // shoots at c, if shot is connected, change c to false
      }
      
    }
    void alt_aaron_shoots(bool& bAlive, bool& cAlive) {
      
    }

}
