/**********************************************
 * Self-Driving Car Nano-degree - Udacity
 *  Created on: December 11, 2020
 *      Author: Mathilde Badoual
 **********************************************/

#pragma once

class PID {
public:

   /**
   * TODO: Create the PID class
   **/

    /*
    * Errors
    */
    // Cross-track error
    double cte;
    // Differential cross-track error
    double diff_cte;
    // Integral cross-track error
    double int_cte;
    /*
    * Coefficients
    */
    double Kp;
    double Ki;
    double Kd;     
    /*
    * Output limits
    */
    double output_lim_max;
    double output_lim_min;
    /*
    * Delta time
    */
    double delta_time;
    /*
    * Constructor
    */
    PID();

    /*
    * Destructor.
    */
    virtual ~PID();

    /*
    * Initialize PID.
    */
    void Init(double Kp, double Ki, double Kd, double output_lim_max, double output_lim_min);

    /*
    * Update the PID error variables given cross track error.
    */
    void UpdateError(double cte);

    /*
    * Calculate the total PID error.
    */
    double TotalError();
  
    /*
    * Update the delta time.
    */
    double UpdateDeltaTime(double new_delta_time);
};

