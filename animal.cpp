/**
 * ID:403634/10/1
 * Name:royd
 * Last Name:simusokwe
 * Course:secure programming 2
 * Program:computer science
 * Term:1
 * Year:3
 * Issued: 1/April/2023
 * filename: main.cpp
 */
#include "animal.h"

std::ostream &operator<<(std::ostream &out, Animal &oparand)
{
    oparand.print_info(out);
    return out;
};
