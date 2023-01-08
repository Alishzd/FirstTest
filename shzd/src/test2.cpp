#include "ros/ros.h"
#include "std_msgs/String.h"




void callback (const std_msgs::String& msg)
{
    ROS_INFO("RICIVED MASSAGE [%s]",msg.data.c_str() );
}



int main (int argc, char **argv)
{
    ros::init( argc, argv, "subscribe" );
    ros::NodeHandle nh ;
    ros::Subscriber sub=nh.subscribe("cpp_msg",10,callback);
    ros::spin();
    return 0;

}