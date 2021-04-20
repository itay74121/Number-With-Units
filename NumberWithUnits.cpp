#include "NumberWithUnits.hpp"
#include <iostream>
using namespace ariel;
using namespace std;
namespace ariel 
{
   
    void NumberWithUnits::read_units(ifstream & stream)
    {

    }
    NumberWithUnits NumberWithUnits::operator+ (const NumberWithUnits &other)const
    {
        NumberWithUnits n (5,"d");
        return n;
    } 
    NumberWithUnits NumberWithUnits::operator+=(const NumberWithUnits& other)
    {
        NumberWithUnits n (5,"d");
        return n;
    }
    NumberWithUnits NumberWithUnits::operator+ ()const
    {
        NumberWithUnits n = *this;
        return n;
    } 
    NumberWithUnits NumberWithUnits::operator- (const NumberWithUnits &other)const
    {
        NumberWithUnits n (5,"d");
        return n;
    } 
    NumberWithUnits NumberWithUnits::operator-=(const NumberWithUnits& other)
    {
        NumberWithUnits n (5,"d");
        return n;
    }
    NumberWithUnits NumberWithUnits::operator- ()const
    {
        NumberWithUnits n = *this;
        n.value = -n.value;
        return n;
    } 

    NumberWithUnits NumberWithUnits::operator++()
    {
        this->value += 1;
        return *this;
    }
    NumberWithUnits NumberWithUnits::operator++(int dummy)
    {
        NumberWithUnits u = *this;
        this->value+=1;
        return u;
    }

    NumberWithUnits NumberWithUnits::operator--()
    {
        this->value -= 1;
        return *this;
    }
    NumberWithUnits NumberWithUnits::operator--(int dummy)
    {
        NumberWithUnits u = *this;
        this->value-=1;
        return u;
    }


    bool  NumberWithUnits::operator<(const NumberWithUnits & other)const
    {
        return false;
    }
    bool  NumberWithUnits::operator<=(const NumberWithUnits & other)const
    {
        return false;
    }
    bool  NumberWithUnits::operator>(const NumberWithUnits & other)const
    {
        return false;

    }
    bool  NumberWithUnits::operator>=(const NumberWithUnits & other)const
    {
        return false;

    }
    bool  NumberWithUnits::operator==( const NumberWithUnits& other)const
    {
        return this->unit == other.getunit() && other.getvalue() == this->value;
    }
    bool  NumberWithUnits::operator!=(const NumberWithUnits & other)const
    {
        return false;
    }

    ostream & operator << (ostream & os, const NumberWithUnits & other)
    {
        os << other.value <<"[" <<other.unit << "]";
        return os;
    }
    istream & operator >> (istream & is, const NumberWithUnits & other)
    {
        return is;
    }
    NumberWithUnits operator *(double var,const NumberWithUnits & n)
    {
        NumberWithUnits a = n;
        a.setvalue(a.getvalue()*var);
        return a;
    }

    NumberWithUnits NumberWithUnits::operator * (double val)
    {
        NumberWithUnits u;
        return u;
    }

}