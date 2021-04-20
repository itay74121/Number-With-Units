#ifndef NUMBERWITHUNITS_
#define NUMBERWITHUNITS_
#include <iostream>
#include <string>
namespace ariel
{
    static std::string units [10] = {"km","m","cm","kg","ton","g","hour","min","sec","USD"};
    class NumberWithUnits
    {
        private:
        double value;
        std::string unit;
        double convert (std::string unit1,std::string unit2, double val); /*convert val from unit2 to unit1*/
        public:
        NumberWithUnits()
        {
            value = 0;
            unit = "km";
        }
        NumberWithUnits(double value,std::string unit)
        {
            this->value = value;
            this->unit = unit;
        }
        static void read_units(std::ifstream & stream);
        NumberWithUnits operator+ (const NumberWithUnits &other)const;
        NumberWithUnits operator+=(const NumberWithUnits& other);
        NumberWithUnits operator+ ()const;
        NumberWithUnits operator- (const NumberWithUnits &other)const;
        NumberWithUnits operator-=(const NumberWithUnits& other);
        NumberWithUnits operator- ()const;
        NumberWithUnits operator++();
        NumberWithUnits operator++(int dummy);
        NumberWithUnits operator--();
        NumberWithUnits operator--(int dummy);    

        bool operator<(const NumberWithUnits & other)const;
        bool operator<=(const NumberWithUnits & other)const;
        bool operator>(const NumberWithUnits & other)const;
        bool operator>=(const NumberWithUnits & other)const;
        bool operator==(const NumberWithUnits & other)const;
        bool operator!=(const NumberWithUnits & other)const;

        friend std::ostream & operator << (std::ostream & os, const NumberWithUnits & other);
        friend std::istream & operator >> (std::istream & is, const NumberWithUnits & other);
        friend NumberWithUnits operator *(double var,const NumberWithUnits & n);
        NumberWithUnits operator * ( double  val);

        std::string getunit()const
        {
            return unit;
        }
        double getvalue()const
        {
            return value;
        }
        void setvalue(double value)
        {
            this->value = value;
        }
    };
}



#endif