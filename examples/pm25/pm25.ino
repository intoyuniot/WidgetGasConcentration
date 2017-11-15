/*
************************************************************************
* 作者:  IntoRobot Team 
* 版本:  V1.0.0
* 时间:  03-30-15
************************************************************************
功能描述：
PM2.5浓度检测仪：检测空气PM2.5颗粒浓度

所需器件:
1. GP2Y10 PM2.5浓度传感器模块

接线说明
GP2Y10         Atom
VCC	           3V3
GND            GND
LED            D0
OUT            A0
*/

#include <gp2y10.h>
#include <WidgetGasConcentration.h>

#define GP2Y10_LED_PIN D0
#define GP2Y10_OUT_PIN A0

GP2Y10 gp2y10 = GP2Y10(GP2Y10_OUT_PIN,GP2Y10_LED_PIN);  
WidgetGasConcentration pm25;

void setup()
{
    //初始化
	gp2y10.begin(); 
}

void loop()
{
    //上送PM2.5浓度
	pm25.displayGasConcentration(gp2y10.CalculatedConcentration()); 
	delay(3000);
}
