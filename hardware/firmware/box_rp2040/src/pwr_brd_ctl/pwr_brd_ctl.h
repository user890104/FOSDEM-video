#pragma once

#include <stdbool.h>
#include <stdint.h>

#define FAN_WAIT_LOOPS (1000)
#define CMD_WAIT_TIME_US (1000*1000)
#define DESIRED_RPM (3000)
#define DESIRED_RPM_THRESH (1000)
#define NUMFAN (5)


void pwr_brd_ctl_init();
void pwr_brd_fan_task();
void pwr_brd_fan_init();
bool pwr_brd_raw_gpio_read(uint8_t* val);
void pwr_brd_i2c_bus_scan();
void pwr_brd_i2c_dump_all_regs(uint8_t addr);
bool temp_sensor_get_temp_raw(uint8_t* dest);
bool pwr_brd_i2c_read_reg(uint8_t dev_addr, uint8_t reg_id, uint8_t* dest, uint8_t num_bytes);
bool pwr_brd_i2c_write_reg(uint8_t dev_addr, uint8_t reg_id, uint8_t* src, uint8_t num_bytes);
bool pwr_brd_charger_power(bool on);
