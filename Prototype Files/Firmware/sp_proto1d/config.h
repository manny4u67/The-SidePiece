#pragma once

/*
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    "YourName"
#define PRODUCT         "MacroPad"
*/

#define MATRIX_COLS 2
#define MATRIX_ROWS 5
#define DIODE_DIRECTION COL2ROW

#define MATRIX_COL_PINS { GP1 , GP2 }
#define MATRIX_ROW_PINS { GP3 , GP4 , GP5 , GP6 , GP7 }

#define ENCODER_A_PINS { GP10, GP12 }
#define ENCODER_B_PINS { GP11, GP13 }
#define ENCODER_DEFAULT_POS 0x3

#undef I2C_DRIVER
#define I2C_DRIVER I2CD1
#undef I2C1_SCL_PIN
#define I2C1_SCL_PIN GP19
#undef I2C1_SDA_PIN
#define I2C1_SDA_PIN GP18



#define USB_POLLING_INTERVAL_MS 1