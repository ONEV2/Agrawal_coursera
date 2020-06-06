#******************************************************************************
# Copyright (C) 2017 by Alex Fosdick - University of Colorado
#
# Redistribution, modification or use of this software in source or binary
# forms is permitted as long as the files maintain this copyright. Users are 
# permitted to modify this and use it to learn about the field of embedded
# software. Alex Fosdick and the University of Colorado are not liable for any
# misuse of this material. 
#
#*****************************************************************************

#------------------------------------------------------------------------------
# <Put a Description Here>
#
# Use: make [TARGET] [PLATFORM-OVERRIDES]
#
# Build Targets:
#      <Put a description of the supported targets here>
#
# Platform Overrides:
#      <Put a description of the supported Overrides here
#
#------------------------------------------------------------------------------
include sources.mk
# Architectures Specific Flags
CPU = cortex-m0plus
ARCH = thumb
SPECS = nosys.specs

# Platform Specific Flags
LINKER_FILE = /home/prakhar/Desktop/coursera/ese-coursera-course1/assessments/m2/msp432p401r.lds

# Compiler Flags and Defines

ifeq ($(PLATFORM),HOST)
	CC=gcc
else ifeq ($(PLATFORM),MSP432)
	CC= arm-none-eabi-gcc -DMSP432
	CFLAGS = -mcpu=$(CPU) -m$(ARCH) --specs=$(SPECS) -Wall
	LDFLAGS = -Wl,-Map=$(TARGET).map -T $(LINKER_FILE)
else
	CC= gcc
endif
#arm-none-eabi-gcc -mcpu=cortex-m4 -std=c99 -Werror -E main.c -o main.i
LD = arm-none-eabi-ld 
TARGET = demo
OBJS = $(SRCS:.c=.o)
# Generate object files
%.o : %.c
	$(CC) -c $< $(CFLAGS) -D$(PLATFORM) -o $@ 
# generate preprocessed files
%.i : %.c
	$(CC) $(CFLAGS) -Werror -E $< -o $@
# Generate asm file
%.asm : %.c
	$(CC) -std=c99 -Wall -S $< 
.PHONY : build
build: $(TARGET).out

# Link all the object files and produce final executable file
$(TARGET).out : $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) $(LDFLAGS) -o $@

.PHONY : compile 
compile : $(OBJS)
.PHONY : clean 
clean:
	 rm -f $(CC) $(OBJS) $(TARGET).out $(TARGET).map