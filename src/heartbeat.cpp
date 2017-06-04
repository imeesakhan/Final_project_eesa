#include <ros/ros.h>
#include "std_msgs/Bool.h"

ros::Publisher chatter_pub;


void timerCallback(const ros::TimerEvent&)
{
std_msgs::Bool beat;
beat.data=true;
chatter_pub.publish(beat);
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "heartbeat_source");
  ros::NodeHandle n;
  chatter_pub = n.advertise<std_msgs::Bool>("heartbeat", 1000);

  ros::Timer timer = n.createTimer(ros::Duration(10.0), timerCallback);
  ros::spin();
  return 0;
}
