################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Exam1/Exam1.c 

OBJS += \
./Exam1/Exam1.o 

C_DEPS += \
./Exam1/Exam1.d 


# Each subdirectory must supply rules for building sources it contributes
Exam1/%.o: ../Exam1/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


