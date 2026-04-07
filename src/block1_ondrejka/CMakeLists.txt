cmake_minimum_required(VERSION 3.8)
project(block1_ondrejka)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# 1. Nájdi všetky potrebné balíky
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rrm_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(ondrejka_interface REQUIRED)
find_package(Eigen3 REQUIRED)

find_package(urdf REQUIRED)

# --- Definícia spustiteľných súborov (Nodes) ---
add_executable(teleop_node src/teleop_node.cpp)
add_executable(logger_node src/logger_node.cpp)
add_executable(inverse_kinematics_node src/inverse_kinematics_node.cpp)
add_executable(motion_manager_node src/motion_manager_node.cpp) # NOVÉ: Pridaný Motion Manager

# --- Include adresáre ---
target_include_directories(teleop_node PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>)

target_include_directories(logger_node PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  ${EIGEN3_INCLUDE_DIRS})

target_include_directories(inverse_kinematics_node PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  ${EIGEN3_INCLUDE_DIRS})

# Include pre Motion Manager
target_include_directories(motion_manager_node PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>)

# --- Závislosti (ament_target_dependencies) ---
ament_target_dependencies(teleop_node
  "rclcpp"
  "rrm_msgs"
  "ondrejka_interface"
  "sensor_msgs"
)

ament_target_dependencies(logger_node
  "rclcpp"
  "sensor_msgs"
  "geometry_msgs"
  "tf2_ros"
  "rrm_msgs"
  "ondrejka_interface"
)

# IK Solver potrebuje prístup k tvojim interface-om
ament_target_dependencies(inverse_kinematics_node
  "rclcpp"
  "rrm_msgs"
  "ondrejka_interface"
  "urdf"
)

# Motion Manager potrebuje rclcpp, rrm_msgs (pre simulator) a tvoje rozhrania
ament_target_dependencies(motion_manager_node
  "rclcpp"
  "rrm_msgs"
  "ondrejka_interface"
)

# --- Linkovanie knižníc ---
target_link_libraries(logger_node Eigen3::Eigen)
target_link_libraries(inverse_kinematics_node Eigen3::Eigen)

# --- Inštalácia ---
# Pridané motion_manager_node do inštalácie
install(TARGETS 
  teleop_node 
  logger_node 
  inverse_kinematics_node
  motion_manager_node
  DESTINATION lib/${PROJECT_NAME})

# Inštalácia launch súborov
install(DIRECTORY launch
  DESTINATION share/${PROJECT_NAME})

ament_package()