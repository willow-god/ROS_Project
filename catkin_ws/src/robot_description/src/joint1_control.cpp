#include"ros/ros.h"
#include"std_msgs/Float64.h"

int main(int argc,char**argv){
        ros::init(argc,argv,"joint1_control");
        ros::NodeHandle n;
        ros::Publisher joint1=n.advertise<std_msgs::Float64>("/toydog/joint1_position_controller/command",10);
        ros::Rate loop_rate(10);

        while(ros::ok()){
                std_msgs::Float64 joint1_angle;
                joint1_angle.data=-2;
                joint1.publish(joint1_angle);

                loop_rate.sleep();
        }
        return 0;
}


