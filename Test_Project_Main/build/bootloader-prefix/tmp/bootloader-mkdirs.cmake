# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "D:/Project/001_Psudo_Company/src/fw/Test_Project/components/bootloader/subproject"
  "D:/Project/001_Psudo_Company/src/fw/Test_Project/Test_Project_Main/build/bootloader"
  "D:/Project/001_Psudo_Company/src/fw/Test_Project/Test_Project_Main/build/bootloader-prefix"
  "D:/Project/001_Psudo_Company/src/fw/Test_Project/Test_Project_Main/build/bootloader-prefix/tmp"
  "D:/Project/001_Psudo_Company/src/fw/Test_Project/Test_Project_Main/build/bootloader-prefix/src/bootloader-stamp"
  "D:/Project/001_Psudo_Company/src/fw/Test_Project/Test_Project_Main/build/bootloader-prefix/src"
  "D:/Project/001_Psudo_Company/src/fw/Test_Project/Test_Project_Main/build/bootloader-prefix/src/bootloader-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "D:/Project/001_Psudo_Company/src/fw/Test_Project/Test_Project_Main/build/bootloader-prefix/src/bootloader-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "D:/Project/001_Psudo_Company/src/fw/Test_Project/Test_Project_Main/build/bootloader-prefix/src/bootloader-stamp${cfgdir}") # cfgdir has leading slash
endif()
