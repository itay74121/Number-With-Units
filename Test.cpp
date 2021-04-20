#include "doctest.h"
#include "NumberWithUnits.hpp"
#include <string>
#include <iostream>

using namespace std;
using namespace ariel;

TEST_CASE("check constructor and get,set") // 5
{
    // check default constructor 
    // NumberWithUnits t;
    // CHECK(t.getvalue() == 0);
    // CHECK(t.getunit()== "km");
    // // check parameter constructor
    // NumberWithUnits a (1,"km");
    // CHECK(1 == a.getvalue()); // check consructor is working 
    // CHECK("km" == a.getunit());
    // //check set value 
    // a.setvalue(5);
    // CHECK(5 == a.getvalue());
}

TEST_CASE("check ==") // 2
{
    NumberWithUnits a,b;
    //cout << a <<" "<<  b << endl; 
    CHECK(a==(b));
    a.setvalue(5);
    b.setvalue(5);
    CHECK(b == a);
}




TEST_CASE("check throw") 
{
    NumberWithUnits a; // km
    NumberWithUnits b (1,"kg");
    NumberWithUnits c (1,"sec");
    NumberWithUnits d (1,"USD");
    CHECK_THROWS(a.operator<=(b));
    CHECK_THROWS(a.operator<=(c));
    CHECK_THROWS(a.operator<=(d));
    CHECK_THROWS(b.operator<=(c));
    CHECK_THROWS(b.operator<=(d));
    CHECK_THROWS(d.operator<=(c));
    CHECK_THROWS(a.operator<(b));
    CHECK_THROWS(a.operator<(c));
    CHECK_THROWS(a.operator<(d));
    CHECK_THROWS(b.operator<(c));
    CHECK_THROWS(b.operator<(d));
    CHECK_THROWS(d.operator<(c));
    CHECK_THROWS(a.operator>=(b));
    CHECK_THROWS(a.operator>=(c));
    CHECK_THROWS(a.operator>=(d));
    CHECK_THROWS(b.operator>=(c));
    CHECK_THROWS(b.operator>=(d));
    CHECK_THROWS(d.operator>=(c));
    CHECK_THROWS(a.operator>(b));
    CHECK_THROWS(a.operator>(c));
    CHECK_THROWS(a.operator>(d));
    CHECK_THROWS(b.operator>(c));
    CHECK_THROWS(b.operator>(d));
    CHECK_THROWS(d.operator>(c));
    CHECK_THROWS(a.operator!=(b));
    CHECK_THROWS(a.operator!=(c));
    CHECK_THROWS(a.operator!=(d));
    CHECK_THROWS(b.operator!=(c));
    CHECK_THROWS(b.operator!=(d));
    CHECK_THROWS(d.operator!=(c));
    CHECK_THROWS(a.operator+(b));
    CHECK_THROWS(a.operator+(c));
    CHECK_THROWS(a.operator+(d));
    CHECK_THROWS(b.operator+(c));
    CHECK_THROWS(b.operator+(d));
    CHECK_THROWS(d.operator+(c));
    CHECK_THROWS(a.operator-(b));
    CHECK_THROWS(a.operator-(c));
    CHECK_THROWS(a.operator-(d));
    CHECK_THROWS(b.operator-(c));
    CHECK_THROWS(b.operator-(d));
    CHECK_THROWS(d.operator-(c));
    CHECK_THROWS(a.operator==(b));
    CHECK_THROWS(a.operator==(c));
    CHECK_THROWS(a.operator==(d));
    CHECK_THROWS(b.operator==(c));
    CHECK_THROWS(b.operator==(d));
    CHECK_THROWS(d.operator==(c));
    CHECK_THROWS(a.operator+=(b));
    CHECK_THROWS(a.operator+=(c));
    CHECK_THROWS(a.operator+=(d));
    CHECK_THROWS(b.operator+=(c));
    CHECK_THROWS(b.operator+=(d));
    CHECK_THROWS(d.operator+=(c));
    CHECK_THROWS(a.operator-=(b));
    CHECK_THROWS(a.operator-=(c));
    CHECK_THROWS(a.operator-=(d));
    CHECK_THROWS(b.operator-=(c));
    CHECK_THROWS(b.operator-=(d));
    CHECK_THROWS(d.operator-=(c));
}

TEST_CASE("check validity of operators")
{
    // NumberWithUnits a,b;
    // CHECK((a+b).getvalue() == 2);
    // NumberWithUnits c(1000,"m");
    // CHECK((a+c).getvalue() == 2);
    // CHECK((c+a).getvalue() == 2000);
    // NumberWithUnits d (1000000,"cm");
    // CHECK((a+d).getvalue() == 2);
    // CHECK((c+d).getvalue() == 2000);
    // CHECK((d+d).getvalue() == 2000000);
    // CHECK((d+a).getvalue() == 2000000);
}
