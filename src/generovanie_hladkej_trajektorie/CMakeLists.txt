cmake_minimum_required(VERSION 3.8)
project(generovanie_hladkej_trajektorie)

# 1. Kompilačné nastavenia
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic -std=c++17)
endif()

# 2. Nájdi ROS 2 balíky, ktoré potrebuješ
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(visualization_msgs REQUIRED)


# 3. Vytvorenie spustiteľného súboru (executable)
# Predpokladám, že tvoj súbor sa volá model_spawner.cpp a je v priečinku src/
add_executable(model_spawner src/model_spawner_node.cpp)

# 4. Prepojenie so závislosťami
ament_target_dependencies(model_spawner
  rclcpp
  visualization_msgs
)

# 5. Inštalácia (aby fungovalo 'ros2 run')
install(TARGETS
  model_spawner
  DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY stl_modely
  DESTINATION share/${PROJECT_NAME}
)

# 6. Testovanie (voliteľné, nechaj ak chceš)
if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

# 7. Ukončenie balíka (musí byť vždy na konci!)
ament_package()