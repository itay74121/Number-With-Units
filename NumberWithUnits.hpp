#ifndef NUMBERWITHUNITS_
#define NUMBERWITHUNITS_
#include <iostream>
#include <string>
#include <unordered_map>
#include <exception>
namespace ariel
{
    typedef struct unit
    {
        std::string s;
        double value;
    } unit;
    class NumberWithUnits
    {
        private:
        double value;
        std::string unit;
        bool check_key_in_map(std::string key) const;
        NumberWithUnits convert (std::string unit1,std::string unit2, double val) const; /*convert val from unit2 to unit1*/
        bool way(std::string type1, std::string type2) const;
        static std::unordered_map<std::string,ariel::unit> map;
        public:
        NumberWithUnits()
        {
            
        }
        NumberWithUnits(const NumberWithUnits & other)
        {
            this->value = other.value;
            this->unit = other.unit;
        }
        NumberWithUnits(double value,std::string unit)
        {
            if(unit == "")
                throw std::invalid_argument("unit doesn't exists in unit.txt");
            if (check_key_in_map(unit))
            {
                this->value = value;
                this->unit = unit;
            }
            else
                throw std::invalid_argument("unit doesn't exists in unit.txt");
        }
        static void read_units(std::ifstream & stream);
        NumberWithUnits operator+ (const NumberWithUnits &other)const;
        NumberWithUnits operator+=(const NumberWithUnits& other);
        NumberWithUnits operator+ ()const;
        NumberWithUnits operator- (const NumberWithUnits &other)const;
        NumberWithUnits operator-=(const NumberWithUnits& other);
        NumberWithUnits operator- ()const;
        NumberWithUnits & operator++();
        NumberWithUnits operator++(int dummy);
        NumberWithUnits & operator--();
        NumberWithUnits operator--(int dummy);    

        bool operator<(const NumberWithUnits & other)const;
        bool operator<=(const NumberWithUnits & other)const;
        bool operator>(const NumberWithUnits & other)const;
        bool operator>=(const NumberWithUnits & other)const;
        bool operator==(const NumberWithUnits & other)const;
        bool operator!=(const NumberWithUnits & other)const;

        friend std::ostream & operator << (std::ostream & os, const NumberWithUnits & other);
        friend std::istream & operator >> (std::istream & is, NumberWithUnits & other);
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