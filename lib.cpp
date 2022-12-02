#include "lib.h"
bool nprimo(int x, int y){
    if(x % y == 0){
        if(x == y){
            return true;
        }
        else{
            return false;
        }
    }
    nprimo(x, y + 1);
}
