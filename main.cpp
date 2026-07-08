#include "Robot.hpp"

int main() {
    Robot robot;

    // Drive straight forward at half speed for 2 seconds, then stop.
    robot.backward(50);
    robot.wait(2000);
    robot.stop();
    robot.wait(1000);     // short pause between moves

    // Drive straight backward at half speed for 2 seconds.
    robot.backward(50);
    robot.wait(2000);
    robot.stop();
    robot.wait(1000);

    // Spin in place: turn left, then turn right.
    robot.turnLeft(60);
    robot.wait(1000);
    robot.turnRight(60);
    robot.wait(1000);
    robot.stop();
    robot.wait(1000);

    // Drive in a circle: curve left, then curve right.
    // (One track runs at half the speed of the other.)
    robot.driveLeft(80);
    robot.wait(2000);
    robot.driveRight(80);
    robot.wait(2000);
    robot.stop();
    robot.wait(1000);

    // Set each track's speed independently (left slower than right).
    robot.drive(30, 60);
    robot.wait(2000);
    robot.stop();

    return 0;
}

