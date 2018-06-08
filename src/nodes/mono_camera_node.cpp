#include <ros/ros.h>
#include <avt_vimba_camera/mono_camera.h>

int main(int argc, char** argv)
{
	ros::init(argc, argv, "mono_camera_node");

  ros::NodeHandle nh;
  ros::NodeHandle nhp("~");

  avt_vimba_camera::MonoCamera mc(nh,nhp);

//  ros::spin();
  ros::AsyncSpinner spinner(6); // Use 6 threads
  spinner.start();
  ros::waitForShutdown();

  return 0;
}
