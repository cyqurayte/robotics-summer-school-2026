# Robotics Summer School 2026 🤖

Welcome! This is a starter project for controlling your robot in the workshop.

You only need to edit **one file**: `main.cpp`. That's where you write the
commands that make the robot move.

## Your first program

Open `main.cpp`. A robot program always looks like this:

```cpp
#include "Robot.hpp"

int main() {
    Robot robot;

    robot.forward(50);   // drive forward at half speed
    robot.wait(2000);    // keep going for 2 seconds (2000 milliseconds)
    robot.stop();        // stop

    return 0;
}
```

- `Robot robot;` turns the robot on.
- Then you give it commands, one line at a time.
- `wait(...)` pauses your program so the robot keeps doing the last thing.
- Always `stop()` when you are done!

## Sync project to the robot

To run your project on the robot, first you need to push the files onto the robot:

```bash
rsync -avz --progress ./ jetson@<IP>:/home/jetson/nano-usb/robotics-summer-school-2026/
```

## Build and run

In a terminal, from this folder, run:

```bash
cmake -B build
cmake --build build
./build/my_robot
```

The first two lines get your program ready, and the last line runs it on the
robot. Every time you change `main.cpp`, run the last two lines again:

```bash
cmake --build build
./build/my_robot
```

## Commands you can use

Speeds go from **-100** (full reverse) to **100** (full forward). `50` is half
speed. If you type a number that is too big or too small, the robot uses the
closest allowed value.

| Command | What it does |
|--------|--------------|
| `robot.forward(speed)` | Drive straight forward |
| `robot.backward(speed)` | Drive straight backward |
| `robot.turnLeft(speed)` | Spin left on the spot |
| `robot.turnRight(speed)` | Spin right on the spot |
| `robot.driveLeft(speed)` | Drive forward while curving to the left |
| `robot.driveRight(speed)` | Drive forward while curving to the right |
| `robot.drive(left, right)` | Set the left and right tracks separately |
| `robot.stop()` | Stop right away |
| `robot.wait(ms)` | Wait for a number of milliseconds (1000 = 1 second) |

## Ideas to try

- Make the robot drive forward, wait, and come back.
- Spin in a full circle, then stop.
- Drive in a square: forward, turn, forward, turn... (four times!)
- Draw a figure-eight using `driveLeft` and `driveRight`.

There is already an example in `main.cpp` that does several of these — read it,
run it, and then change the numbers to see what happens.

## Good to know

- The robot has a built-in safety timer: if your program stops sending commands
  for a few seconds, the robot stops by itself. So don't worry if it runs away —
  it will stop.
- `wait()` does **not** move the robot. It just pauses your program while the
  robot keeps doing its last command.

Have fun, and ask a teacher if you get stuck! 🚀
