################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Ula.cpp \
../src/Ulatb.cpp \
../src/main.cpp 

OBJS += \
./src/Ula.o \
./src/Ulatb.o \
./src/main.o 

CPP_DEPS += \
./src/Ula.d \
./src/Ulatb.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/usr/local/lib/systemc/include -I"/home/vieira/MSS-2017-1/Ula/include" -O0 -g3 -Wall -c -fmessage-length=0 -std=c++11 -pthread -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


