#ifndef WIDGET_GAS_CONCENTRATION_H_
#define WIDGET_GAS_CONCENTRATION_H_

#include "application.h"



class WidgetGasConcentration
{
public:
    WidgetGasConcentration(uint8_t ucItem = 0);
    ~WidgetGasConcentration();
    void begin(void (*UserCallBack)(void) = NULL);
    void displayGasConcentration(float fValue);
    
private:
    char pDataStatusTopic[64];
    uint8_t _Item=0;          
};

#endif
