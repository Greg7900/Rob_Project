#include <DynamixelWorkbench.h>

#define DXL_BUS_SERIAL1 "1"            //Dynamixel on Serial1(USART1)  <-OpenCM9.04
#define DXL_BUS_SERIAL2 "2"            //Dynamixel on Serial2(USART2)  <-LN101,BT210
#define DXL_BUS_SERIAL3 "3"            //Dynamixel on Serial3(USART3)  <-OpenCM 485EXP
#define DXL_BUS_SERIAL4 "/dev/ttyUSB0" //Dynamixel on Serial3(USART3)  <-OpenCR

#define BAUDRATE  1000000
#define DXL_ID_1    1
#define DXL_ID_2    2
#define DXL_ID_3    3
#define DXL_ID_4    4
#define DXL_ID_5    5

DynamixelWorkbench dxl_wb;

void setup()
{
  Serial.begin(57600);
  while(!Serial); // Open a Serial Monitor

  dxl_wb.begin(DXL_BUS_SERIAL4, BAUDRATE);
  
  dxl_wb.ping(DXL_ID_1);
  dxl_wb.jointMode(DXL_ID_1);
  dxl_wb.ping(DXL_ID_2);
  dxl_wb.jointMode(DXL_ID_2);
  dxl_wb.ping(DXL_ID_3);
  dxl_wb.jointMode(DXL_ID_3);
  dxl_wb.ping(DXL_ID_4);
  dxl_wb.jointMode(DXL_ID_4);
  dxl_wb.ping(DXL_ID_5);
  dxl_wb.jointMode(DXL_ID_5);

  
}

void loop()
{
  dxl_wb.goalPosition(DXL_ID_1, 500);
  //delay(500);
  dxl_wb.goalPosition(DXL_ID_2, 700);
  //delay(500);
  dxl_wb.goalPosition(DXL_ID_3, 500);
 // delay(500);
  dxl_wb.goalPosition(DXL_ID_4, 500);
  //delay(500);
  dxl_wb.goalPosition(DXL_ID_5, 500);
  //delay(500);
  
}
