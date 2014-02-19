#ifndef VALUE_H
#define VALUE_H

typedef struct {
    const void * class;
    union {
        int                v_int;
        unsigned int       v_uint;
        long               v_long;
        unsigned long      v_ulong;
        long long          v_int64;
        unsigned long long v_uint64;
        float              v_float;
        double             v_double;
        void *             v_pointer;
    };
} Value;

extern const void * StaticString;

void   value_init(void);
void   value_type(Value * value, const void * class);
void   value_set_str(Value * value, char * str);
char * value_get_str(Value * value);

#endif