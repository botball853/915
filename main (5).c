#include <kipr/wombat.h>
#include "functions.h.h"


int main()
{
    //Get the rocks
    
    //turning on servos
    enable_servos();
    set_servo_position(2,0);
    set_servo_position(3,1700);
    //moving forward
    motor(0,100);
    motor(3,99);
    msleep(4098);
    //stopping
    motor(0,0);
    motor(3,0);
    msleep(500);
    //turning left
    motor(0,100);
    msleep(480);
    //stopping
    motor(0,0);
    motor(3,0);
    msleep(500);
    //moving forward
    motor(3,99);
    motor(0,100);
    msleep(568);
    //stopping
    motor(0,0);
    motor(3,0);
    msleep(500);
    //turning right
    motor(3,100);
    msleep(1510);
    //stopping
    motor(0,0);
    motor(3,0);
    msleep(500);
    //moving backward
    motor(3,-99);
    motor(0,-100);
    msleep(472);
    //stopping
    motor(0,0);
    motor(3,0);
    msleep(500);
    //turning the right
    motor(3,100);
    msleep(536);
    //stopping
    motor(0,0);
    motor(3,0);
    msleep(500);
    //moving forward
    motor(3,99);
    motor(0,100);
    msleep(627);
    //stopping
    motor(0,0);
    motor(3,0);
    msleep(500);
    //moving the left
    motor(0,100);
    msleep(1630);
    //stopping
    motor(0,0);
    motor(3,0);
    msleep(500);
    //moving forward
    motor(3,99);
    motor(0,100);
    msleep(2380);
    //stopping
    motor(0,0);
    motor(3,0);
    msleep(500);
    //moving to the left
    motor(0,100);
    msleep(770);
    //stopping
    motor(0,0);
    motor(3,0);
    msleep(500);
    //moving forward
    motor(3,99);
    motor(0,100);
    msleep(2500);
    //stopping
    motor(0,0);
    motor(3,0);
    msleep(500);
    //going backward
    motor(3,-100);
    motor(0,-100);
    msleep(3900);
    //stopping
    motor(0,0);
    motor(3,0);
    msleep(500);
    //turn right
    motor(0,0);
    motor(3,100);
    msleep(1000);
    //stopping
    motor(0,0);
    motor(3,0);
    msleep(500);
    //backward
    motor(0,-100);
    motor(3,-100);
    msleep(1800);
    //stopping
    motor(0,0);
    motor(3,0);
    msleep(500);
    // turn right
    motor(0,0);
    motor(3,100);
    msleep(800);
	//stopping
    motor(0,0);
    motor(3,0);
    msleep(500);
	//moving backward
    motor(3,-100);
    motor(0,-100);
    msleep(1500);
    //stopping
    motor(0,0);
    motor(3,0);
    msleep(500);
    //moving right
    motor(3,100);
	msleep(517);
	//stopping
    motor(0,0);
    motor(3,0);
    msleep(500);
    //moving forward
    motor(3,99);
    motor(0,100);
    msleep(1400);
	//stopping
    motor(0,0);
    motor(3,0);
    msleep(500);
	//turning left 
	motor(0,100);
	msleep(1510);
	//stopping
    motor(0,0);
    motor(3,0);
    msleep(500);
    //moving forward
    motor(3,99);
    motor(0,100);
    msleep(2650);
    //stopping
    motor(0,0);
    motor(3,0);
    msleep(500);
    //moving left
    motor(0,100);
    msleep(1300);
    //stopping
    motor(0,0);
    motor(3,0);
    msleep(500);
    //moving forward
    motor(3,99);
    motor(0,100);
    msleep(3100);
    //stopping
    motor(0,0);
    motor(3,0);
    msleep(500);
    
    
    //Get the pom poms
    
    //moving backward
    motor(3,-100);
    motor(0,-100);
    msleep(1800);
    //stopping
    motor(0,0);
    motor(3,0);
    msleep(500);
    //moving left
    motor(0,100);
    msleep(2100);
    //stopping
    motor(0,0);
    motor(3,0);
    msleep(500);
	//moving forward
    motor(3,99);
    motor(0,100);
    msleep(2500);
    //stopping
    motor(0,0);
    motor(3,0);
    msleep(500);
	//moving left
    motor(0,100);
    msleep(400);
    //stopping
    motor(0,0);
    motor(3,0);
    msleep(500);
   
    
    
    
    
    
    
    
    return 0;
    
}

