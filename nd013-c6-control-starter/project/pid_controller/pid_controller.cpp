/**********************************************
 * Self-Driving Car Nano-degree - Udacity
 *  Created on: December 11, 2020
 *      Author: Mathilde Badoual
 **********************************************/

#include "pid_controller.h"
#include <math.h>
#include <iostream>
#include <vector>

using namespace std;

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kpi, double Kii, double Kdi, double output_lim_maxi,
               double output_lim_mini) {
  /**
   * TODO: Initialize PID coefficients (and errors, if needed)
   **/
  Kp = Kpi;
  Ki = Kii;
  Kd = Kdi;
  output_lim_min = output_lim_mini;
  output_lim_max = output_lim_maxi;
  int_cte = 0;
}

void PID::UpdateError(double cte) {
  /**
   * TODO: Update PID errors based on cte.
   **/
  if (delta_time > 0) {
    diff_cte = (cte - this->cte) / delta_time;
  } else {
    diff_cte = 0;
  }
  int_cte += cte *delta_time;
  this ->cte = cte;
}

double PID::TotalError() {
  /**
   * TODO: Calculate and return the total error
   * The code should return a value in the interval [output_lim_mini,
   * output_lim_maxi]
   */
  double control =  - Kp * cte - Kd * diff_cte - Ki * int_cte;
  if (control < output_lim_min) {
    control = output_lim_min;
  }
  if (control > output_lim_max) {
    control = output_lim_max;
  }
  return control;
}

double PID::UpdateDeltaTime(double new_delta_time) {
  /**
   * TODO: Update the delta time with new value
   */
  delta_time = new_delta_time;
  return delta_time;
}