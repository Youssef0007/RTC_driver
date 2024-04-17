################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MACL/I2C/I2C_Prog.c 

OBJS += \
./MACL/I2C/I2C_Prog.o 

C_DEPS += \
./MACL/I2C/I2C_Prog.d 


# Each subdirectory must supply rules for building sources it contributes
MACL/I2C/%.o: ../MACL/I2C/%.c MACL/I2C/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega16 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


