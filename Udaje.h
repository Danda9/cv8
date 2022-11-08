#ifndef UDAJE_H
#define UDAJE_H
#include <iostream>
#include <vector>


class Udaje
{
    public:
        Udaje();
        void nacti_udaje(bool& k);
        virtual ~Udaje();
        std::string jmeno(), prijmeni();
        int vek();
        float vyska();
        bool kk();
        std::vector info()=(4);

    protected:


    private:
        std::string pomoc;
        float pomoc1;
        int pomoc2;
        bool kontrola;
};

#endif // UDAJE_H
