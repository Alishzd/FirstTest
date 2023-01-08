#include "ros/ros.h"
#include "rospy_tutorials/AddTwoInts.h"


bool handle_service (rospy_tutorials::AddTwoInts::Request &req,rospy_tutorials::AddTwoInts::Response &res){
    int result=req.a+req.b;
    res.sum=result;
    ROS_INFO("result is %s", (int) result);
    return true;
}


int main (int argc,char **argv){
    ros::init(argc , argv, "server");
    ros::NodeHandle nh;

    ros::ServiceServer server=nh.advertiseService("/add_two_ints",handle_service);

    ros::spin();


}
