#include "ros/ros.h"
#include "std_msgs/Float32.h"


int main (int argc, char **argv)
{
    ros::init( argc, argv, "rpm_pub" );
    ros::NodeHandle nh ;
    ros::Publisher pub=nh.advertise<std_msgs::Float32>("rpm_publisher",10);
    ros::Rate r(10);
    

    while(ros::ok()){
        std_msgs::Float32 rpm;
        int rpm = 60 ;
        msg.data="hello world "+ to_string(counter);
        pub.Publish(msg);
        r.sleep();
        counter++;
    }



}