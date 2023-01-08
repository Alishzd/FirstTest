#include "ros/ros.h"
#include "std_msgs/String.h"


int main (int argc, char **argv)
{
    ros::init( argc, argv, "publisher" );
    ros::NodeHandle nh ;
    ros::Publisher pub=nh.advertise<std_msgs::String>("cpp_msg",10);
    ros::Rate r(10);
    int counter = 0 ;

    while(ros::ok()){
        std_msgs::String msg;
        msg.data="hello world "+ to_strng(counter);
        pub.Publish(msg);
        r.sleep();
        counter++;
    }



}