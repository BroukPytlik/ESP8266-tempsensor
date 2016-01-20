#ifndef __I2C_DS18B20_H
#define	__I2C_DS18B20_H

#define DS1820_WRITE_SCRATCHPAD	0x4E
#define DS1820_READ_SCRATCHPAD	0xBE
#define DS1820_COPY_SCRATCHPAD	0x48
#define DS1820_READ_EEPROM		0xB8
#define DS1820_READ_PWRSUPPLY	0xB4
#define DS1820_SEARCHROM		0xF0
#define DS1820_SKIP_ROM			0xCC
#define DS1820_READROM			0x33
#define DS1820_MATCHROM			0x55
#define DS1820_ALARMSEARCH		0xEC
#define DS1820_CONVERT_T		0x44

// DS18x20 family codes
#define DS18S20		0x10
#define DS18B20 	0x28


/*
 * static function prototypes
 */
int do_ds18b20(int argc, const char* const* argv);

#endif
