#ifndef M7024_H
#define M7024_H

#include "modbus/modbus.h"

class M7024
{
public:
    M7024(const char *DEVICE);
    ~M7024();
    void SetValue(int channel, int value);
private:
    const char* DEVICE;
    modbus_t *ctx;
};

#endif // M7024_H
