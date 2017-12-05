#ifndef UNTITLED_ELEMENT_H
#define UNTITLED_ELEMENT_H
#include "Is.h"
using namespace std;
class Element{
private:
    int numb;
public:
    const Isotope* getArrayOfIsotopes()const;
    Isotope arrayOfIsotopes[4];
    int getNumb()const;
    void setNumb(int numb);
    void getInfo();
};
#endif //UNTITLED_ELEMENT_H