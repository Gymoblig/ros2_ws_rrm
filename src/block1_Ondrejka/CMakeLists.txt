cmake_minimum_required(VERSION 3.8)
project(block1_Ondrejka)

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

# --- Definícia spustiteľných súborov ---
add_executable(teleop_node src/teleop_node.cpp)
add_executable(logger_node src/logger_node.cpp)
add_executable(inverse_kinematics_node src/inverse_kinematics_node.cpp) # PRIDANÉ

# --- Include adresáre ---
target_include_directories(teleop_node PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include/${PROJECT_NAME}>)

target_include_directories(logger_node PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include/${PROJECT_NAME}>
  ${EIGEN3_INCLUDE_DIRS})

# Include pre IK node (Eigen je dobré mať aj tu pre prípadné maticové overenie)
target_include_directories(inverse_kinematics_node PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include/${PROJECT_NAME}>
  ${EIGEN3_INCLUDE_DIRS})

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

# Závislosti pre IK node
ament_target_dependencies(inverse_kinematics_node
  "rclcpp"
  "rrm_msgs"
  "ondrejka_interface"
)

# --- Linkovanie knižníc ---
target_link_libraries(logger_node Eigen3::Eigen)
target_link_libraries(inverse_kinematics_node Eigen3::Eigen) # PRIDANÉ

# --- Inštalácia ---
# Pridali sme inverse_kinematics_node do zoznamu TARGETS
install(TARGETS 
  teleop_node 
  logger_node 
  inverse_kinematics_node
  DESTINATION lib/${PROJECT_NAME})

# Inštalácia launch súborov
install(DIRECTORY launch
  DESTINATION share/${PROJECT_NAME})

ament_package()