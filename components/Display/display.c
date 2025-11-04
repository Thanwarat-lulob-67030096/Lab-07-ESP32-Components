#include <stdio.h>
#include "esp_log.h"
#include "display.h"

static const char *TAG = "DISPLAY";

void display_init(void) {
    ESP_LOGI(TAG, "🖥️  Display initialized");
}

void display_clear(void) {
    ESP_LOGI(TAG, "🧹 Clear display screen");
}

void display_show_sensor_data(float temp, float hum, float hi) {
    ESP_LOGI(TAG, "🌡️  Temperature: %.2f°C", temp);
    ESP_LOGI(TAG, "💧 Humidity: %.2f%%", hum);
    ESP_LOGI(TAG, "🔥 Heat Index: %.2f", hi);
}

void display_show_status(const char *status) {
    ESP_LOGI(TAG, "📋 STATUS: %s", status);
}
