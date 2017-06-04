#include "../include/hearbeah.h"

int main(int argc, char **argv)
{
  ros::init(argc, argv, "listener");
  ros::NodeHandle n;
  ros::Subscriber sub = n.subscribe("heartbeat", 1000, timerCallback1);
  ros::spin();

  return 0;
}
