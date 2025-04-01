#include "robot_simulator.h"
#include <string.h>

robot_status_t robot_create(robot_direction_t direction, int x, int y) {
    robot_status_t robot = {
        .direction = direction,
        .position.x = x,
        .position.y = y,
    };

    return robot;
}

void robot_move(robot_status_t *robot, const char *commands) {
    int num_commands = strlen(commands);

    for (int i = 0; i < num_commands; i++) {
        char command = commands[i];

        switch (command) {
            case 'L':
                if (robot->direction == DIRECTION_DEFAULT) {
                    robot->direction = DIRECTION_WEST;
                    break;
                }
                robot->direction--;
                break;
            case 'R':
                if (robot->direction == DIRECTION_WEST) {
                    robot->direction = DIRECTION_NORTH;
                    break;
                }
                robot->direction++;
                break;
            case 'A':
                switch (robot->direction) {
                    case DIRECTION_NORTH:
                        robot->position.y++;
                        break;
                    case DIRECTION_EAST:
                        robot->position.x++;
                        break;
                    case DIRECTION_SOUTH:
                        robot->position.y--;
                        break;
                    case DIRECTION_WEST:
                        robot->position.x--;
                        break;
                    default:
                        break;
                }
        }
    }
}
