#ifndef STRING_STRUCT_H
#define STRING_STRUCT_H

#include "include/class.struct.h"

struct String {
    const struct Class * class;
    char * self;
};

#endif