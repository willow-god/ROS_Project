#include "ros/ros.h"
#include "std_msgs/Float64.h"

int main(int argc, char **argv) {
	ros::init(argc,argv,"joint_control");
	ros::NodeHandle n_main;
	ros::Publisher joint1=n_main.advertise<std_msgs::Float64>("ae",10);
	ros::Rate loop_rate(10);
	while(ros::ok()) {
		std_msgs::Float64 joint1_angle;
		joint1_angle.data=1.57;
		joint1.publish(joint1_angle);
		loop_rate.sleep();
	}
	return 0;
}
