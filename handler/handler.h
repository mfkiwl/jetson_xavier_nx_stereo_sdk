#ifndef __HANDLER_H
#define __HANDLER_H

void *thread_image_handler(void *arg);
void *thread_imu_ads16505_handler(void *arg);
void *thread_imu_mpu9250_handler(void *arg);
void *thread_gnss_ub482_handler(void *arg);

#endif