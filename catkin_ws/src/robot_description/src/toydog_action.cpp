#include"ros/ros.h"
#include"std_msgs/Float64.h"

int main(int argc,char**argv){
        ros::init(argc,argv,"toydog_action");
        ros::NodeHandle n;
        ros::Publisher joint1=n.advertise<std_msgs::Float64>("/toydog/one_position_controller/command",10);
        ros::Rate loop_rate(10);

        while(ros::ok()){
                std_msgs::Float64 joint1_angle;
                joint1_angle.data=-1.0;
                joint1.publish(joint1_angle);
                loop_rate.sleep();
        }
        return 0;
}
