#pragma once
void display_init(void);
void display_clear(void);
void display_show_sensor_data(float temp, float hum, float hi);
void display_show_status(const char *status);
