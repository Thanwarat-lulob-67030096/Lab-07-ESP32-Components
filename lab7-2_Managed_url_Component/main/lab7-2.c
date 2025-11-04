#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
#include "sensor.h"

static const char *TAG = "LAB7-2";

void app_main(void)
{
    ESP_LOGI(TAG, "🚀 Lab 7-2: Managed Component from GitHub Started");
    sensor_init();
    while(1) {
        sensor_read_data();
        sensor_check_status();
        vTaskDelay(pdMS_TO_TICKS(4000));
    }
}
