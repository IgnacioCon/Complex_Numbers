#ifndef COMPLEJO_H
#define COMPLEJO_H


class Complejo
{

private:

    float re;
    float im;

public:
    Complejo();
    Complejo(float re, float im);

    void setRe(float re);
    void setIm(float im);

    float getRe();
    float getIm();

    Complejo sumaComplejo(Complejo a, Complejo b);
    Complejo restaComplejo(Complejo a, Complejo b);
    void conjugadoComplejo(Complejo a);
    Complejo multComplejo(Complejo a, Complejo b);

    Complejo getComplejo();

};

#endif // COMPLEJO_H
