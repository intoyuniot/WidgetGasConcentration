
#include "WidgetGasConcentration.h"


WidgetGasConcentration::WidgetGasConcentration(uint8_t ucItem)
{
    _Item=ucItem;
    memset(pDataStatusTopic,0,sizeof(pDataStatusTopic));  
    sprintf(pDataStatusTopic,"channel/gasConcentration_%d/data/concentration",_Item); 
}

WidgetGasConcentration::~WidgetGasConcentration()
{
}

void WidgetGasConcentration::begin(void (*UserCallBack)(void))
{
}


void WidgetGasConcentration::displayGasConcentration(float fValue)
{
    IntoRobot.publish(pDataStatusTopic,fValue);
}




