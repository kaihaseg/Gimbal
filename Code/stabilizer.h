#ifndef STABILIZER_H
#define STABILIZER_H

#define DEBUG_STAB

// Define stepper motor connections and motor interface type. 
// Motor interface type must be set to 1 when using a driver:
const int   DIR_PIN = 6;
const int   STEP_PIN = 5;
const int   MOTOR_INTERFACE_TYPE = 1;

const int   SERVO_PIN = 7; // A descriptive name for D6 pin of Arduino to provide PWM signal

const int   GYRO_SELECT_PIN = 4;
const int   DEFAULT_GYRO_RATE  = BMI160_GYRO_RATE_400HZ;
const int   DEFAULT_ACCEL_RATE = BMI160_ACCEL_RATE_400HZ;

const int   DEFAULT_GYRO_RATE_IN_HZ = 400;   

const int   DEFAULT_GYRO_RANGE = BMI160_GYRO_RANGE_125;
const float BANANI_V_DEGREE    = 262.4; 
const float BANANI_V_G_2       = 13678;

const float SERVO_KP = 1;
const float SERVO_KI = 50;
const float SERVO_KD = 0;

const float STEPPER_KP = 1;
const float STEPPER_KI= 30;
const float STEPPER_KD = 0;

void GyroInterrupt (void);

void PlotAnglePosY (float anglePosY, int currTime);

void PlotPosX (float posX, int currTime);

int ComputePID (float input, float setpoint,
                float kp, float ki, float kd,
                float dt, int minOut, int maxOut);

float ExpRunningAverageAdaptive (float newVal);

void SetInitialGyroOffset();

void SetInitialStepperOffset();

#endif
