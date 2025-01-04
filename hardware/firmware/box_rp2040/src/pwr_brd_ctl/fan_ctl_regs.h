const uint8_t EMC230x_REG_CONFIG                = 0x20;
const uint8_t EMC230x_REG_FAN_STATUS            = 0x24;
const uint8_t EMC230x_REG_FAN_STALL_STATUS      = 0x25;
const uint8_t EMC230x_REG_FAN_SPIN_STATUS       = 0x26;
const uint8_t EMC230x_REG_FAN_DRIVE_FAIL_STATUS = 0x27;
const uint8_t EMC230x_REG_FAN_INTERRUPT_ENABLE  = 0x29;
const uint8_t EMC230x_REG_PWM_POLARITY_CONFIG   = 0x2A;
const uint8_t EMC230x_REG_PWM_OUTPUT_CONFIG     = 0x2B;
const uint8_t EMC230x_REG_PWM_BASEF45           = 0x2C;
const uint8_t EMC230x_REG_PWM_BASEF123          = 0x2D;
const uint8_t EMC230x_REG_FAN_DRIVE_SETTING     = 0x30;
const uint8_t EMC230x_REG_PWM_DIVIDE            = 0x31;
const uint8_t EMC230x_REG_FAN_CONFIG            = 0x32;
const uint8_t EMC230x_REG_FAN_CONFIG_2          = 0x33;
const uint8_t EMC230x_REG_GAIN                  = 0x35;
const uint8_t EMC230x_REG_FAN_SPIN              = 0x36;
const uint8_t EMC230x_REG_MAX_STEP              = 0x37;
const uint8_t EMC230x_REG_MIN_DRIVE             = 0x38;
const uint8_t EMC230x_REG_VALID_TACH            = 0x39;
const uint8_t EMC230x_REG_DRIVE_FAIL_LSB        = 0x3A;
const uint8_t EMC230x_REG_DRIVE_FAIL_MSB        = 0x3B;
const uint8_t EMC230x_REG_TACH_TARGET_LSB       = 0x3C;
const uint8_t EMC230x_REG_TACH_TARGET_MSB       = 0x3D;
const uint8_t EMC230x_REG_TACH_READING_MSB      = 0x3E;
const uint8_t EMC230x_REG_TACH_READING_LSB      = 0x3F;

/* Registers that can have values written directly into them (i.e. the entire register is meant for a single number):
    EMC230x_REG_FAN_DRIVE_SETTING
    EMC230x_REG_PWM_DIVIDE
    EMC230x_REG_MAX_STEP (Max 0b00111111 or 0x3F or 63)
    EMC230x_REG_MIN_DRIVE
    EMC230x_REG_VALID_TACH (The final value from this register is 32 x (value in register))
    EMC230x_REG_TACH_TARGET_LSB and EMC230x_REG_TACH_TARGET_MSB (MUST write both LSB and MSB, with LSB written before MSB)
*/

// EMC230x_REG_PWM_BASEF
const uint8_t EMC230x_REG_PWM_BASEF_26KHZ  = 0x00;
const uint8_t EMC230x_REG_PWM_BASEF_19KHZ  = 0x01;
const uint8_t EMC230x_REG_PWM_BASEF_4KHZ   = 0x02;
const uint8_t EMC230x_REG_PWM_BASEF_2KHZ   = 0x03;

// EMC230x_REG_FAN_CONFIG
const uint8_t EMC230x_REG_FAN_CONFIG_RPMCONTROL     = 0x80;
const uint8_t EMC230x_REG_FAN_CONFIG_MINRPM_CLEAR   = ~0x60;
const uint8_t EMC230x_REG_FAN_CONFIG_MINRPM_500     = 0x00;
const uint8_t EMC230x_REG_FAN_CONFIG_MINRPM_1000    = 0x20;
const uint8_t EMC230x_REG_FAN_CONFIG_MINRPM_2000    = 0x40;
const uint8_t EMC230x_REG_FAN_CONFIG_MINRPM_4000    = 0x60;
const uint8_t EMC230x_REG_FAN_CONFIG_FANPOLES_CLEAR = ~0x18;
const uint8_t EMC230x_REG_FAN_CONFIG_FANPOLES_1     = 0x00;
const uint8_t EMC230x_REG_FAN_CONFIG_FANPOLES_2     = 0x08;
const uint8_t EMC230x_REG_FAN_CONFIG_FANPOLES_3     = 0x10;
const uint8_t EMC230x_REG_FAN_CONFIG_FANPOLES_4     = 0x18;
const uint8_t EMC230x_REG_FAN_CONFIG_UPDATE_CLEAR   = ~0x07;
const uint8_t EMC230x_REG_FAN_CONFIG_UPDATE_100     = 0x00;
const uint8_t EMC230x_REG_FAN_CONFIG_UPDATE_200     = 0x01;
const uint8_t EMC230x_REG_FAN_CONFIG_UPDATE_300     = 0x02;
const uint8_t EMC230x_REG_FAN_CONFIG_UPDATE_400     = 0x03;
const uint8_t EMC230x_REG_FAN_CONFIG_UPDATE_500     = 0x04;
const uint8_t EMC230x_REG_FAN_CONFIG_UPDATE_800     = 0x05;
const uint8_t EMC230x_REG_FAN_CONFIG_UPDATE_1200    = 0x06;
const uint8_t EMC230x_REG_FAN_CONFIG_UPDATE_1600    = 0x07;

// EMC230x_REG_FAN_CONFIG_2
const uint8_t EMC230x_REG_FAN_CONFIG_2_RAMPCONTROL    = 0x40;
const uint8_t EMC230x_REG_FAN_CONFIG_2_GLITCHFILTER   = 0x20;
const uint8_t EMC230x_REG_FAN_CONFIG_2_DEROPT_CLEAR   = ~0x18;
const uint8_t EMC230x_REG_FAN_CONFIG_2_DEROPT_NONE    = 0x00;
const uint8_t EMC230x_REG_FAN_CONFIG_2_DEROPT_BASIC   = 0x08;
const uint8_t EMC230x_REG_FAN_CONFIG_2_DEROPT_STEP    = 0x10;
const uint8_t EMC230x_REG_FAN_CONFIG_2_DEROPT_BOTH    = 0x18;
const uint8_t EMC230x_REG_FAN_CONFIG_2_ERRRANGE_CLEAR = ~0x06;
const uint8_t EMC230x_REG_FAN_CONFIG_2_ERRRANGE_0     = 0x00;
const uint8_t EMC230x_REG_FAN_CONFIG_2_ERRRANGE_50    = 0x02;
const uint8_t EMC230x_REG_FAN_CONFIG_2_ERRRANGE_100   = 0x04;
const uint8_t EMC230x_REG_FAN_CONFIG_2_ERRRANGE_200   = 0x06;

// EMC230x_REG_FAN_SPIN
const uint8_t EMC230x_REG_FAN_SPIN_NOKICK           = 0x20;
const uint8_t EMC230x_REG_FAN_SPIN_SPINLVL_CLEAR    = ~0x1C;
const uint8_t EMC230x_REG_FAN_SPIN_SPINLVL_30       = 0x00;
const uint8_t EMC230x_REG_FAN_SPIN_SPINLVL_35       = 0x04;
const uint8_t EMC230x_REG_FAN_SPIN_SPINLVL_40       = 0x08;
const uint8_t EMC230x_REG_FAN_SPIN_SPINLVL_45       = 0x0C;
const uint8_t EMC230x_REG_FAN_SPIN_SPINLVL_50       = 0x10;
const uint8_t EMC230x_REG_FAN_SPIN_SPINLVL_55       = 0x14;
const uint8_t EMC230x_REG_FAN_SPIN_SPINLVL_60       = 0x18;
const uint8_t EMC230x_REG_FAN_SPIN_SPINLVL_65       = 0x1C;
const uint8_t EMC230x_REG_FAN_SPIN_SPINUPTIME_CLEAR = ~0x03;
const uint8_t EMC230x_REG_FAN_SPIN_SPINUPTIME_250   = 0x00;
const uint8_t EMC230x_REG_FAN_SPIN_SPINUPTIME_500   = 0x01;
const uint8_t EMC230x_REG_FAN_SPIN_SPINUPTIME_1000  = 0x02;
const uint8_t EMC230x_REG_FAN_SPIN_SPINUPTIME_2000  = 0x03;

// EMC230x_REG_MAX_STEP
const uint8_t EMC230x_REG_MAX_STEP_MAX = 0b00111111;
