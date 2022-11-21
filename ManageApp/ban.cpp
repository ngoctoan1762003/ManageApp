#include "ban.h"

Ban::Ban()
{
    ma=000;
    viTri="Missing";
    isUsing=false;
}
void Ban::setMa(int m){
    ma=m;
}
int Ban::getMa(){
    return ma;
}
void Ban::setViTri(QString vt){
    viTri=vt;
}
QString Ban::getViTri(){
    return viTri;
}
void Ban::setState(bool state){
    isUsing=state;
}
bool Ban::getState(){
    return isUsing;
}
