#ifndef CAMERA_H
#define CAMERA_H

#include "esp_http_server.h"

// 函数声明
void setupCamera();
void handleCameraStream();
void handleCameraPage();
void handleToggleLED();
void startCameraServer(httpd_handle_t server);
void configCamera();
#define LED_PIN 4  // 定义LED引脚 ,PIN4与SDIO接口冲突


void handleNoSD();
void handleFileUpload();
void handleFileExplorer();
void handleFileDownload();
char hexToDec(char c);

#define MIN(a,b) ((a)<(b)?(a):(b))

esp_err_t handleFileExplorer(httpd_req_t *req);
#endif // CAMERA_H