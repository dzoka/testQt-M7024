#include "m7024.h"
#include <errno.h>

M7024::M7024(const char* DEVICE)
    : DEVICE("/dev/ttyUSB0")
{
    ctx = modbus_new_rtu(DEVICE, 9600, 'N', 8, 1);
    if(ctx == NULL)
    {
        //fprintf(stderror, "Unable to create Modbus context");
        errno = 1;
        return;
    }
    if(modbus_connect(ctx) == -1)
    {
        //fprintf(stderror, "Modbus connection failed");
        errno = 2;
        modbus_free(ctx);
        return;
    }
    modbus_set_slave(ctx, 1);           // slave address on Modbus network
}

M7024::~M7024()
{
    if(ctx != NULL)
    {
        modbus_close(ctx);
    }
}

void M7024::SetValue(int channel, int value)
{
    if(ctx != NULL)
    {
        modbus_write_register(ctx,channel,value);
    }
}
