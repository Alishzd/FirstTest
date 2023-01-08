#include <ros/ros.h>

int main (int argc , char **argv)
{ 
    ros::init(argc , argv, "cpp_node");
    ros::NodeHandle nh; 
    ros::Rate r(10);
    while(ros::ok())
    {
    r.sleep();
    ROS_INFO("hello");
    }

}