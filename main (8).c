#include <kipr/wombat.h>


int main()
{
    //Get the rocks
    
    //turning on servos
    enable_servos();
    set_servo_position(2,200);
    set_servo_position(3,1700);
    //moving forward
    motor(0,100);
    motor(3,99);
    msleep(4093);
    //stopping
    motor(0,0);
    motor(3,0);
    msleep(200);
    //moving backward
    motor(3,-100);
    motor(0,-100);
    msleep(151);
    //stopping
    motor(0,0);
    motor(3,0);
    msleep(200);
    //turning left
    motor(0,100);
    msleep(480);
    //stopping
    motor(0,0);
    motor(3,0);
    msleep(200);
    //moving forward
    motor(3,99);
    motor(0,100);
    msleep(567);
    //stopping
    motor(0,0);
    motor(3,0);
    msleep(200);
    //turning right
    motor(3,100);
    msleep(1510);
    //stopping
    motor(0,0);
    motor(3,0);
    msleep(200);
    //moving backward
    motor(3,-100);
    motor(0,-100);
    msleep(472);
    //stopping
    motor(0,0);
    motor(3,0);
    msleep(200);
    //turning the right
    motor(3,100);
    msleep(541);
    //stopping
    motor(0,0);
    motor(3,0);
    msleep(200);
    //moving forward
    motor(3,99);
    motor(0,100);
    msleep(629);
    //stopping
    motor(0,0);
    motor(3,0);
    msleep(200);
    //moving the left
    motor(0,100);
    msleep(1630);
    //stopping
    motor(0,0);
    motor(3,0);
    msleep(200);
    //moving forward
    motor(3,99);
    motor(0,100);
    msleep(2380);
    //stopping
    motor(0,0);
    motor(3,0);
    msleep(200);
    //moving to the left
    motor(0,100);
    msleep(795);
    //stopping
    motor(0,0);
    motor(3,0);
    msleep(200);
    //moving forward
    motor(3,99);
    motor(0,100);
    msleep(2000);
    //stopping
    motor(0,0);
    motor(3,0);
    msleep(200);
    //going backward
    motor(3,-100);
    motor(0,-100);
    msleep(3600);
    //stopping
    motor(0,0);
    motor(3,0);
    msleep(200);
    //turn right
    motor(0,0);
    motor(3,100);
    msleep(1000);
    //stopping
    motor(0,0);
    motor(3,0);
    msleep(200);
    //backward
    motor(0,-100);
    motor(3,-100);
    msleep(1800);
    //stopping
    motor(0,0);
    motor(3,0);
    msleep(200);
    // turn right
    motor(0,0);
    motor(3,100);
    msleep(810);
	//stopping
    motor(0,0);
    motor(3,0);
    msleep(200);
	//moving backward
    motor(3,-100);
    motor(0,-100);
    msleep(1470);
    //stopping
    motor(0,0);
    motor(3,0);
    msleep(200);
    //moving right
    motor(3,100);
	msleep(515);
	//stopping
    motor(0,0);
    motor(3,0);
    msleep(200);
    //moving forward
    motor(3,99);
    motor(0,100);
    msleep(1280);
	//stopping
    motor(0,0);
    motor(3,0);
    msleep(200);
	//turning left 
	motor(0,100);
	msleep(1580);
	//stopping
    motor(0,0);
    motor(3,0);
    msleep(200);
    //moving forward
    motor(3,99);
    motor(0,100);
    msleep(2480);
    //stopping
    motor(0,0);
    motor(3,0);
    msleep(200);
    //moving left
    motor(0,100);
    msleep(1100);
    //stopping
    motor(0,0);
    motor(3,0);
    msleep(200);
    //moving forward
    motor(3,99);
    motor(0,100);
    msleep(3100);
    //stopping
    motor(0,0);
    motor(3,0);
    msleep(200);
    
    
    //Get the pom poms
    
    //moving backward
    motor(3,-100);
    motor(0,-100);
    msleep(1800);
    //stopping
    motor(0,0);
    motor(3,0);
    msleep(200);
    //moving left
    motor(0,100);
    msleep(2300);
    //stopping
    motor(0,0);
    motor(3,0);
    msleep(200);
	//moving forward
    motor(3,99);
    motor(0,100);
    msleep(1800);
    //stopping
    motor(0,0);
    motor(3,0);
    msleep(200);
	//moving right
    motor(3,100);
    msleep(500);
    //stopping
    motor(0,0);
    motor(3,0);
    msleep(200);
    //moving forward
    motor(3,99);
    motor(0,100);
    msleep(500);
    //stopping
    motor(0,0);
    motor(3,0);
    msleep(200);
    
    
    
     
    
    
    return 0;
    
}
