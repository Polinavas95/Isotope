
#include <iostream>
#include "El.h"
using namespace std;

void Element::getInfo(){
    for(int i=0;i<4;i++){
        cout<<"Name="<<arrayOfIsotopes[i].getName()<<"A="<<arrayOfIsotopes[i].getA()<<"Iz="<<<<arrayOfIsotopes[i].getIz()<<"N"<<arrayOfIsotopes[i].getN()<<"fm="
            <<arrayOfIsotopes[i].getFm()<<endl;
    }
}
const Isotope *Element::getArrayOfIsotopes()const{
    return arrayOfIsotopes;
}
int Element::getNumb()const{
    return numb;
}
void Element::setNumb(int numb){
    Element::numb=numb;
}