#ifndef SUN_H
#define SUN_H

#include "ASCIIPicture.hpp"

class Sun : public ASCIIPicture {

public:

    Sun(string fname);
    ~Sun();

    void print(unsigned int left, char fill, unsigned int width);

};

#endif
