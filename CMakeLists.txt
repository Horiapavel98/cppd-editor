cmake_minimum_required(VERSION "3.17.1")

project("cppd")

add_executable("${PROJECT_NAME}" "main.cpp")

install(TARGETS "${PROJECT_NAME}" DESTINATION bin) #${CMAKE_INSTALL_PREFIX}/bin
install(FILES "main.cpp" DESTINATION src)          #${CMAKE_INSTALL_PREFIX}/src

include(CTest)
include(CPack)
