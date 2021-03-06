#include <cstdio>
#include "ros/ros.h"
#include "geometry_msgs/PoseStamped.h"
//#include "KeyManager.cpp"
#include <stdlib.h>
#include <sstream>
#include "std_msgs/String.h"
#include "std_msgs/UInt8.h"


using namespace std;

int main(int argc, char ** argv){

	//Initialize ROS
	ros::init(argc, argv, "AngenLocationManager", ros::init_options::AnonymousName);
	ros::NodeHandle nh;

	cout << "NODE INIT" << endl;

	string base;

	base= "roslaunch angen_turtlebot fuerte.launch &";
	system(base.c_str());
	sleep(5);

	base= "xterm -hold -e \"sh /home/angenuser/ros_workspace/angen_cognitive_environment/angen_gazebo/sh/angen_doors.sh\" &";
	system(base.c_str());

	base= "xterm -hold -e \"roslaunch PeisRosPkg metaCSP2.launch\" &";
	system(base.c_str());



	base= "xterm -hold -e \"sh /home/angenuser/ros_workspace/SimpleForwarder/launch/navStartup.sh\" &";
	system(base.c_str());


	base= "xterm -hold -e \"roslaunch SimpleForwarder initOdom.launch\" &";
	system(base.c_str());

	base= "xterm -hold -e \"roslaunch SimpleForwarder initScan.launch\" &";
	system(base.c_str());
	sleep(2);

	base= "xterm -hold -e \"roslaunch angen_turtlebot nav_final.launch map_file:=/home/angenuser/ros_workspace/angen_cognitive_environment/angen_turtlebot/final_mapan.yaml\" &";
	system(base.c_str());


	base= "xterm -hold -e \"roslaunch angen_turtlebot biggerInitial.launch\" &";
	system(base.c_str());



	base= "xterm -hold -e \"optirun rosrun rviz rviz -d `rospack find turtlebot_navigation`/nav_rviz.vcg\" &";
	system(base.c_str());

	base= "xterm -hold -e \"roslaunch SimpleForwarder double_robot.launch\" &";
	system(base.c_str());


	ros::spin();

//	ros::Rate loop_rate(1);
//
//	while (nh.ok()){
//
//		man.publishGoal();
//		ros::spinOnce ();
//		loop_rate.sleep ();
//	}

	return 0;
}
