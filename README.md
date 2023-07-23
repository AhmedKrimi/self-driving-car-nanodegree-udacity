# Self Driving Car Engineer Nanodegree

[Self-Driving car Engineer nanodegree](https://www.udacity.com/course/self-driving-car-engineer-nanodegree--nd0013) enables its students to learn the techniques that power self-driving cars across the full stack of a vehicle’s autonomous capabilities through multiple projects:

<p align="center">
  <img src="https://github.com/udacity/nd013-c2-fusion-starter/raw/main/img/img_title_1.jpeg">
</p>

## [Project 1 - Computer Vision](./nd013-c1-vision-starter)

In this project, students will create a convolutional neural network to detect and classify objects using data from the Waymo Open Dataset. Students will be provided with a dataset of images of urban environments containing annotated cyclists, pedestrians and vehicles. First, they will perform an extensive data analysis including the computation of label distributions, display of sample images, and checking for object occlusions. Students will use this analysis to decide what augmentations are meaningful for this project. Then, they will train a neural network to detect and classify objects. Students will monitor the training with TensorBoard and decide when to end it. Finally, they will experiment with different hyperparameters to improve performance.

## [Project 2 - Sensor Fusion](./nd013-c2-fusion-starter/)

### Project 2.1 - 3D Object Detection
Students will first load and preprocess 3D lidar point clouds, and then use a deep learning approach to detect and classify objects (e.g. vehicles, pedestrians). Students will evaluate and visualize the objects, including calculating key performance metrics. This project combines with the Sensor Fusion project to form a full detection pipeline.

### Project 2.2 - Sensor Fusion
In this project, students will solve a challenging multi-target tracking task by fusing camera and lidar detections. They will implement an Extended Kalman filter to track several vehicles over time, including the different measurement models for camera and lidar. This also requires a track management module for track initialization and deletion, and a data association module to decide which measurement originated from which track. Finally, students will evaluate and visualize the tracked objects. To complete this project, students will use a real-world dataset and therefore face many everyday challenges of a sensor fusion engineer.

## [Project 3 - Localization](./nd013-c3-localization-starter)

In this project, students will use either ICP or NDT, two scan matching algorithms, to align point cloud scans from the CARLA simulator and recover the position of a simulated car with lidar. Students will need to achieve sufficient accuracy for the entirety of a drive within the simulated environment, updating the vehicle’s location appropriately as it moves and obtains new lidar data.

## Project 4 - Planning

In this project, students will implement two of the main components of a traditional hierarchical planner: the behavior planner and the motion planner. Both will work in unison to be able to avoid static objects parked on the side of the road, avoid crashing with these vehicles by executing either a “nudge” or a “lane change” maneuver, handle any type of intersection, and track the centerline on the traveling lane.

## [Project 5 - Control](./nd013-c6-control-starter/)

Students will learn how to control a car once they have a desired trajectory. In other words, how to activate the throttle and the steering wheel of the car to move it following a trajectory described by coordinates. The course will cover the most basic but also the most common controller: the Proportional Integral Derivative or PID controller. Students will understand the basic principle of feedback control and how they are used in autonomous driving techniques.


### References:
Projects descriptions are taken from [the official page of the program](https://www.udacity.com/course/self-driving-car-engineer-nanodegree--nd0013) 