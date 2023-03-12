#include <kipr/wombat.h>

int main()
{
    printf("Hello World\n");
    
    motor(0,80);
    motor(3,80);
    msleep(500);
    ao();
    
    motor(0,0);
    motor(3,80);
    msleep(1600);
    
    motor(0,80);
    motor(3,80);
    msleep(1000);
    
    motor(0,80);
    motor(3,80);
    msleep(2200);
    
    motor(0,0);
    motor(3,80);
    msleep(1000);
    
    motor(0,80);
    motor(3,80);
    msleep(1500);
    
    motor(0,-80);
    motor(3,-80);
    msleep(2500);
    
     motor(0,80);
    motor(3,0);
    msleep(990);
    
    //grab coupler
     motor(0,80);
    motor(3,80);
    msleep(1200);
    
    motor(0,80);
    motor(3,0);
    msleep(3400);
    
     motor(0,80);
    motor(3,80);
    msleep(4000);
    
 motor(0,80);
    motor(3,0);
    msleep(800);
 
    motor(0,100);
    motor(3,100);
    msleep(2000);
    
 motor(0,0);
    motor(3,80);
    msleep(790);
 
    motor(0,100);
    motor(3,100);
    msleep(2000);
  
     motor(0,80);
    motor(3,80);
    msleep(2000);
    return 0;
}
