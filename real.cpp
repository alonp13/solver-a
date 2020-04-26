#include "solver.hpp"
using namespace solver;

/*
    RealVariable Class implemention:
*/

RealVariable& RealVariable::operator + (double coe)
{
    return *this;
}

RealVariable& RealVariable::operator + (const RealVariable& other)
{
    return *this;
}


RealVariable& solver::operator + (double coe, const RealVariable& other) //friend
{
    RealVariable* tmp = new RealVariable();
    RealVariable& ref = *tmp;

    return ref;
}
        
RealVariable& RealVariable::operator - (double coe) 
{
    return *this;
}

RealVariable& RealVariable::operator - (const RealVariable& other) 
{
    return *this;
}

RealVariable& solver::operator - (double coe, const RealVariable& other) //friend
{
    RealVariable* tmp = new RealVariable();
    RealVariable& ref = *tmp;

    return ref;
}

RealVariable& RealVariable::operator * (double coe)
{
    return *this;
}

RealVariable& RealVariable::operator * (const RealVariable& other)
{
    return *this;
}

RealVariable& solver::operator * (double coe, const RealVariable& other) //friend
{
    RealVariable* tmp = new RealVariable();
    RealVariable& ref = *tmp;

    return ref;
}

RealVariable& RealVariable::operator / (double coe)
{
    return *this;
}

RealVariable& RealVariable::operator / (const RealVariable& other)
{
    return *this;
}

RealVariable& solver::operator / (double coe, const RealVariable& other) //friend
{
    RealVariable* tmp = new RealVariable();
    RealVariable& ref = *tmp;

    return ref;
}

RealVariable& RealVariable::operator == (double coe)
{
    return *this;
}

RealVariable& RealVariable::operator == (const RealVariable& other)
{
    return *this;
}
RealVariable& solver::operator == (double coe, const RealVariable& other) //friend
{
    RealVariable* tmp = new RealVariable();
    RealVariable& ref = *tmp;

    return ref;
}

RealVariable& RealVariable::operator ^ (int pow)
{
    return *this;
}

double solver::solve(const RealVariable& rv)
{
    return 0;
}
