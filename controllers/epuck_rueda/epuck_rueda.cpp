#include <webots/Motor.hpp>
#include <webots/Robot.hpp>

#include <cmath>

using namespace webots;

int main() {
  Robot robot;
  const int time_step = static_cast<int>(robot.getBasicTimeStep());

  Motor *left_wheel = robot.getMotor("left wheel motor");
  if (left_wheel == nullptr)
    return 1;

  constexpr double full_turn = 2.0 * 3.14159265358979323846;
  left_wheel->setPosition(full_turn);

  while (robot.step(time_step) != -1) {

  }

  return 0;
}
