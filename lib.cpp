#include "lib.h"
bool numeroprimo(int x, int y){
    if(x % y == 0){
        if(x == y){
            return true;
        }
        else{
            return false;
        }
    }
    numeroprimo(x, y + 1);
}
