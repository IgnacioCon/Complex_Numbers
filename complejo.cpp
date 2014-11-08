#include "complejo.h"

Complejo::Complejo()
{
    this->re = 0;
    this->im = 0;
}

Complejo::Complejo(float re, float im)
{
    this->re = re;
    this->im = im;
}

void Complejo::setRe(float re)
{
    this->re = re;
}

void Complejo::setIm(float im)
{
    this->im = im;
}

float Complejo::getRe()
{
    return this->re;
}

float Complejo::getIm()
{
    return this->im;
}

Complejo Complejo::sumaComplejo(Complejo a, Complejo b)
{
    Complejo c;
    c.re = a.re+b.re;
    c.im = a.im+b.im;
    return c;
}

Complejo Complejo::restaComplejo(Complejo a, Complejo b)
{
    Complejo c;
    c.re = a.re-b.re;
    c.im = a.im-b.im;
    return c;
}

Complejo Complejo::multComplejo(Complejo a, Complejo b)
{
    Complejo c;
    c.re = a.re*b.re-a.im*b.im;
    c.im = a.re*b.im+a.im*b.re;
    return c;
}

void Complejo::conjugadoComplejo(Complejo a)
{
    this->re = a.re;
    this->im = (-1)*(a.im);
}




Complejo Complejo::getComplejo()
{
    return *this;
}
