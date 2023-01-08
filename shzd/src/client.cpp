#include "ros/ros.h"
#include "rospy_tutorials/AddTwoInts.h"


int main (int argc,char **argv){
    ros::init(argc , argv, "client");
    ros::NodeHandle nh;
    ros::ServiceClient client=nh.serviceClient<rospy_tutorials::AddTwoInts>("/add_two_ints");
    rospy_tutorials::AddTwoInts srv;
    srv.request.a=3;
    srv.request.b=5;

    if (client.call(srv))  {
        ROS_INFO("server answered : %d",(int) srv.response.sum) ;
        }
            else {
            ROS_WARN("failed");
}
           }
