#include <ros/ros.h>
#include "std_msgs/Bool.h"

void timerCallback(const std_msgs::Bool::ConstPtr& msg)
{
  ROS_INFO("I heard");
}



int main(int argc, char **argv)
{
  ros::init(argc, argv, "listener");
  ros::NodeHandle n;
  ros::Subscriber sub = n.subscribe("heartbeat", 1000, timerCallback);
  ros::spin();

  return 0;
}
