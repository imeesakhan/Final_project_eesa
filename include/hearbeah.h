#ifndef HEARTBEAT_H
#define HEARTBEAT_H

#include <ros/ros.h>
#include "std_msgs/Bool.h"

ros::Publisher chatter_pub;
void timerCallback(const ros::TimerEvent&)
{
std_msgs::Bool beat;
beat.data=true;
chatter_pub.publish(beat);
}

void timerCallback1(const std_msgs::Bool::ConstPtr& msg)
{
  ROS_INFO("I heard");
}

#endif // HEARTBEAT_H
