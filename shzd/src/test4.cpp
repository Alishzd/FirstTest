#include "ros/ros.h"
#include "std_msgs/Float32.h"


const float R ;

void callback (const std_msgs::Float32& msg)
{
    ros::NodeHandle callback123
    if(callback123.getparam())
    std_msgs::Float32 speed ;
     speed.data = (r * 3.14 * 2) * (rpm.data);
}



int main (int argc, char **argv)
{
    ros::init( argc, argv, "speed_pub" );
    ros::NodeHandle nh ;
    ros::Subscriber sub=nh.subscribe("rpm_topic",10,callback);


    ros::Publisher speed_pub=nh.advertise<std_msgs::Float32>("speed_topic",10);

    
    while(ros::ok()){
        
        speed_pub.publish(msg);
    }

    ros::spin();
    return 0;

}