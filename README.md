# Self-Driving Car Engineer Nanodegree

[Self-Driving car Engineer nanodegree](https://www.udacity.com/course/self-driving-car-engineer-nanodegree--nd0013) enables its students to learn the techniques that power self-driving cars across the full stack of a vehicle’s autonomous capabilities through multiple projects:

<p align="center">
  <img src="https://github.com/udacity/nd013-c2-fusion-starter/raw/main/img/img_title_1.jpeg">
</p>

## [Project 1 - Computer Vision](./nd013-c1-vision-starter)

In this project, I created a convolutional neural network to detect and classify objects using data from the Waymo Open Dataset. I was provided with a dataset of images of urban environments containing annotated cyclists, pedestrians, and vehicles. First, I performed an extensive data analysis, including computing label distributions, displaying sample images, and checking for object occlusions. I used this analysis to decide what augmentations were meaningful for the project. Then, I trained a neural network to detect and classify objects. I monitored the training with TensorBoard and decided when to end it. Finally, I experimented with different hyperparameters to improve performance.

## [Project 2 - Sensor Fusion](./nd013-c2-fusion-starter/)

### Project 2.1 - 3D Object Detection

In this project, I first loaded and preprocessed 3D lidar point clouds. Following this, I employed a deep learning approach to detect and classify objects such as vehicles and pedestrians. I then evaluated and visualized these objects, calculating key performance metrics.

### Project 2.2 - Sensor Fusion

In this project, I tackled a challenging multi-target tracking task by fusing camera and lidar detections. I implemented an Extended Kalman filter to track multiple vehicles over time, incorporating various measurement models for camera and lidar. This necessitated the development of a track management module for the initiation and deletion of tracks, as well as a data association module to discern the origins of various measurements relative to their respective tracks. I then evaluated and visualized the tracked objects. Utilizing a real-world dataset, the project embodied the everyday challenges encountered by a sensor fusion engineer.

## [Project 3 - Localization](./nd013-c3-localization-starter)

In this project, I utilized both ICP (Iterative Closest Point) and NDT (Normal Distributions Transform), two scan matching algorithms, to align point cloud scans from the CARLA simulator and recover the position of a simulated car equipped with lidar. I had to maintain sufficient accuracy throughout an entire drive within the simulated environment. This involved continuously updating the vehicle’s location in accordance with its movement and the acquisition of new lidar data.

## [Project 4 - Planning](./nd013-c5-planning-starter-master)

In this project, I implemented two of the main components of a traditional hierarchical planner: the behavior planner and the motion planner. Working in unison, I designed these components to avoid static objects parked alongside the road and prevent collisions by executing maneuvers such as a “nudge” or a “lane change”. I also equipped them to handle various types of intersections and to accurately track the centerline of the traveling lane.

## [Project 5 - Control](./nd013-c6-control-starter/)

In this project, I implemented a PID controller to follow a set trajectory, adjusting the throttle and steering based on coordinate inputs. Additionally, I learned about feedback control mechanisms and their application in autonomous vehicles. This endeavor also involved gaining insights into the concepts of feedback control mechanisms and their crucial role in the domain of autonomous vehicles.

### References:
Project descriptions are adapted from [the official page of the program](https://www.udacity.com/course/self-driving-car-engineer-nanodegree--nd0013)