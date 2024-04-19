#include <kipr/wombat.h>


int main()
{
    //Get the rocks
    
    shut_down_in(118);
    //wait_for_light(1);
    
    //turning on servos
    enable_servos();
    set_servo_position(2,250);
    set_servo_position(3,1700);
    //moving forward
    motor(0,100);
    motor(3,97);
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
    msleep(413);
    //stopping
    motor(0,0);
    motor(3,0);
    msleep(200);
    //moving forward
    motor(3,99);
    motor(0,100);
    msleep(570);
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
    msleep(470);
    //stopping
    motor(0,0);
    motor(3,0);
    msleep(200);
    //turning the right
    motor(3,100);
    msleep(538);
    //stopping
    motor(0,0);
    motor(3,0);
    msleep(200);
    //moving forward
    motor(3,99);
    motor(0,100);
    msleep(627);
    //stopping
    motor(0,0);
    motor(3,0);
    msleep(200);
    //moving the left
    motor(0,100);
    msleep(1651);
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
    msleep(870);
    //stopping
    motor(0,0);
    motor(3,0);
    msleep(200);
    //moving forward
    motor(3,99);
    motor(0,100);
    msleep(2222);
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
	msleep(258);
	//stopping
    motor(0,0);
    motor(3,0);
    msleep(200);
    //moving forward
    motor(3,99);
    motor(0,100);
    msleep(1350);
	//stopping
    motor(0,0);
    motor(3,0);
    msleep(200);
	//turning left 
	motor(0,100);
	msleep(1500);
	//stopping
    motor(0,0);
    motor(3,0);
    msleep(200);
    //moving forward
    motor(3,99);
    motor(0,100);
    msleep(2465);
    //stopping
    motor(0,0);
    motor(3,0);
    msleep(200);
    //moving left
    motor(0,100);
    msleep(1200);
    //stopping
    motor(0,0);
    motor(3,0);
    msleep(200);
    //moving forward
    motor(3,99);
    motor(0,100);
    msleep(3110);
    //stopping
    motor(0,0);
    motor(3,0);
    msleep(200);
    
    
    //Get the pom poms
    
    //moving backward
    motor(3,-100);
    motor(0,-100);
    msleep(1600);
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
    msleep(450);
    //stopping
    motor(0,0);
    motor(3,0);
    msleep(200);
    //moving forward
    motor(3,99);
    motor(0,100);
    msleep(1500);
    //stopping
    motor(0,0);
    motor(3,0);
    msleep(200);
    //backward
    motor(0,-100);
    motor(3,-99);
    msleep(1500);
    //stopping
    motor(0,0);
    motor(3,0);
    msleep(200);
    
    
    
     
    
    
    return 0;
    
}
