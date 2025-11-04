#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
#include "sensor.h"
#include "display.h"

static const char *TAG = "LAB7-3";

void app_main(void)
{
    ESP_LOGI(TAG, "🚀 Lab 7-3: Custom ESP32 Components Started");
    sensor_init();
    display_init();
    while(1) {
        display_clear();
        float temp = 25.3, hum = 64.2;
        float hi = temp + 0.5 * hum;
        display_show_sensor_data(temp, hum, hi);
        display_show_status("✅ Comfortable");
        vTaskDelay(pdMS_TO_TICKS(5000));
    }
}
