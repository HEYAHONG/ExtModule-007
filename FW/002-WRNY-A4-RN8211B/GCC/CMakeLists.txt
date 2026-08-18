cmake_minimum_required(VERSION 3.20)
#arm-none-eabi-gcc 工具链设置
set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_C_COMPILER arm-none-eabi-gcc)
set(CMAKE_ASM_COMPILER arm-none-eabi-gcc)
set(CMAKE_CXX_COMPILER arm-none-eabi-g++)
set(CMAKE_ADDR2LINE arm-none-eabi-addr2line)
set(CMAKE_AR arm-none-eabi-ar)
set(CMAKE_RANLIB arm-none-eabi-ranlib)
set(CMAKE_CXX_COMPILER_AR arm-none-eabi-ar)
set(CMAKE_CXX_COMPILER_RANLIB arm-none-eabi-ranlib)
set(CMAKE_C_COMPILER_AR arm-none-eabi-ar)
set(CMAKE_C_COMPILER_RANLIB arm-none-eabi-ranlib)
set(CMAKE_Fortran_COMPILER arm-none-eabi-gfortan)
set(CMAKE_OBJCOPY arm-none-eabi-objcopy)
set(CMAKE_OBJDUMP arm-none-eabi-objdump)
set(CMAKE_RC_COMPILER arm-none-eabi-windres)
set(CMAKE_READELF arm-none-eabi-readelf)
set(CMAKE_STRIP arm-none-eabi-strip)
set(CMAKE_LINKER arm-none-eabi-ld)
set(CMAKE_EXECUTABLE_SUFFIX_ASM .elf)
set(CMAKE_EXECUTABLE_SUFFIX_C .elf)
set(CMAKE_EXECUTABLE_SUFFIX_CXX .elf)
set(CMAKE_C_COMPILER_FORCED TRUE)
set(CMAKE_CXX_COMPILER_FORCED TRUE)
#设置工程名称
set(PROJECT_NAME base)
project(${PROJECT_NAME} C CXX ASM)
#设置编译选项(采用newlib的nano.specs)
set(CMAKE_C_FLAGS " ${CMAKE_C_FLAGS} \
                -Wall \
                -Os \
                -DGCC_COMPILE=1 \
                -mthumb \
                -ffunction-sections \
                -fdata-sections \
                -mcpu=cortex-m0 \
                -std=c11 \
                -specs=nano.specs \
                -Wno-restrict \
                -Wno-strict-aliasing \
                -Wno-maybe-uninitialized \
                -Wno-unused-variable \
                -mfloat-abi=soft \
                 ")
set(CMAKE_ASM_FLAGS ${CMAKE_C_FLAGS})
set(CMAKE_CXX_FLAGS " ${CMAKE_CXX_FLAGS} \
                -Wall \
                -fno-rtti \
                -Os \
                -DGCC_COMPILE=1 \
                -mthumb \
                -ffunction-sections \
                -fdata-sections \
                -mcpu=cortex-m0 \
                -std=c++11 \
                -Wno-psabi \
                -specs nano.specs \
                -mfloat-abi=soft \
                 " )
set(CMAKE_EXE_LINKER_FLAGS " ${CMAKE_EXE_LINKER_FLAGS}\
                -mthumb \
                -Wl,--gc-sections \
                -mcpu=cortex-m0 \
                -T${CMAKE_CURRENT_SOURCE_DIR}/rn8211_rn8211b_rn8213_soc_c.ld  \
                -Wl,--warn-common \
                -Wl,-Map,${PROJECT_NAME}.map \
                ")

set(BUILD_SHARED_LIBS OFF)
#设置宏定义
add_definitions(
-DRN821x_RN721x_SOC_C=1
-DHBOX_CONFIG_HEADER=hbox_config.h
-D__STDC_NO_ATOMICS__=1
-DHAVE_NO_OPENAT=1
-D__START=start_main
-D__STARTUP_CLEAR_BSS=1
)
#设置头文件目录
include_directories(
../../3rdparty/rn821x_rn721x_soc_pack_v1.1.14/cmsis/inc/
../../3rdparty/rn8xxx_ll_v1.4.0/inc/
../../3rdparty/HCppBox/master/hbox/h3rdparty/3rdparty/FreeRTOS/Kernel/
../FreeRTOS-Port/
../CMSIS/
../
./
)
#添加工程文件
file(GLOB C_CXX_FILES
../../3rdparty/rn821x_rn721x_soc_pack_v1.1.14/cmsis/inc/*.h
../../3rdparty/rn821x_rn721x_soc_pack_v1.1.14/cmsis/src/*.c
../../3rdparty/rn8xxx_ll_v1.4.0/inc/*.h
../../3rdparty/rn8xxx_ll_v1.4.0/src/*.c
../FreeRTOS-Port/*.h
../FreeRTOS-Port/*.c
../CMSIS/*.h
../*.s
../*.h
../*.c
../*.cpp
*.s
*.h
*.c
*.cpp
)
#添加可执行文件
add_executable(${PROJECT_NAME} ${C_CXX_FILES})
add_custom_command(TARGET ${PROJECT_NAME}
	POST_BUILD
	COMMAND  arm-none-eabi-size ${PROJECT_NAME}.elf
	COMMAND  arm-none-eabi-objcopy --verbose -O binary ${PROJECT_NAME}.elf  ${PROJECT_NAME}.bin
	WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)

add_subdirectory(../../3rdparty/HCppBox/master/hbox HCppBox_hbox)
#启用hbox
hbox_enable(${PROJECT_NAME})


