#ifndef UNTITLED_IS_H
#define UNTITLED_IS_H
#include <string>
using namespace std;

class Isdotope{
public:
    Isotope();
    const string&getName()const;
    void setName(const string&name);
    double getA()const;
    void setA(double a);
    int getIz()const;
    void getIz(int iz);
    void setIz(int iz);
    int getN()const;
    void setN(int n);
    double getFm(double fm);
    Isotope(string name,double a,int iz,int n,double fm);
private:
    const string&name;
    double a;
    int iz;
    int n;
    double fm;
};
#endif //UNTITLED_ISOTOPE_H