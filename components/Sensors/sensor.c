#include <stdio.h>
#include "esp_log.h"
#include "sensor.h"

static const char *TAG = "SENSOR";

void sensor_init(void) {
    ESP_LOGI(TAG, "🔧 Sensor initialized from file: sensor.c, line: 11");
    ESP_LOGI(TAG, "📡 Sensor module ready for operation");
}

void sensor_read_data(void) {
    ESP_LOGI(TAG, "📊 Reading sensor data...");
    ESP_LOGI(TAG, "🌡️  Temperature: 26.4°C");
    ESP_LOGI(TAG, "💧 Humidity: 61.5%%");
}

void sensor_check_status(void) {
    ESP_LOGI(TAG, "✅ Sensor status check");
    ESP_LOGI(TAG, "📈 All sensors operating normally");
}
